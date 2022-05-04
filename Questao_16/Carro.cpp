#include <iostream>
#include "Carro.h"

using std::cout; using std::endl;

Carro::Carro(string nome, int ano){
    this->marca = nome;
    this->ano = ano;
}

string Carro::getMarca(){
  return this->marca;
}

int Carro::getAno(){
  return this->ano;
}

void Carro::setMarca(string novoNome){
  if (novoNome == "")
    this->marca = "\"Sem Marca\"";
  else if (novoNome.length() > 10)
    this->marca = novoNome.substr(0,10);
  else
    this->marca = novoNome;
}

void Carro::setAno(int novoAno){
  this->ano = novoAno;
}

void Carro::displayMessage(){
  cout << "\nMarca: "<< getMarca() << "\nAno: " << getAno() << endl;
}