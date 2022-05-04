#include <iostream>
#include "Empregado.h"

using std::cout; using std::endl;

const int SALARIO_VALIDO = 0;

//private
void Empregado::validaSalario(double salario){
  if (salario < SALARIO_VALIDO)
    setSalario(SALARIO_VALIDO);
  else
    setSalario(salario);
}

//public
Empregado::Empregado(string nome, string sobrenome, double salario){
  setNome(nome);
  setSobrenome(sobrenome);
  validaSalario(salario);
}

string Empregado::getNome(){
  return this->nome;
}

string Empregado::getSobrenome(){
  return this->sobrenome;
}

double Empregado::getSalario(){
  return this->salario;
}

void Empregado::setNome(string nome){
  this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome){
  this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){
  this->salario = salario;
}

void Empregado::aumentoSalarial(double porcentagem){
  setSalario(getSalario()*1.1);
}

void Empregado::displayMessage(){
  cout << "Salario: " << getSalario() << endl;
}