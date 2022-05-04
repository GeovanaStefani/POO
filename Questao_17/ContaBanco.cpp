#include <iostream>
#include "ContaBanco.h"

using std::cout; using std::endl;

const int SALDO_INICIAL = 0;

//private
void ContaBanco::setSaldo(double valor){
  this->saldo = valor;
}

void ContaBanco::validaSaldo(double saldo){
  if (saldo < SALDO_INICIAL)
    setSaldo(SALDO_INICIAL);
  else
    setSaldo(saldo);
}

void ContaBanco::displayMessageSaldoInsuficiente(){
  cout << "Saldo Insuficiente!" << endl;
}

//public
ContaBanco::ContaBanco(double saldo){
  validaSaldo(saldo);
}

double ContaBanco::getSaldo(){
  return this->saldo;
}

void ContaBanco::creditar(double valor){
  setSaldo(getSaldo() + valor);
}

void ContaBanco::debitar(double valor){
  if (getSaldo() < valor){
    displayMessageSaldoInsuficiente();
  } else{
    setSaldo(getSaldo() - valor);
  }
}

void ContaBanco::displayMessage(){
  cout << "Saldo: " << getSaldo() << endl;
}