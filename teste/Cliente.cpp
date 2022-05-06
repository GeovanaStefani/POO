#include <iostream>
#include "Cliente.h"

using std::cout; using std::endl; using std::string;

Cliente::Cliente(string nome, int idade, float salario){
    setNome(nome);
    setIdade(idade);
    setSalario(salario);
}

string Cliente::getNome(){
    return this->nome;
}

int Cliente::getIdade(){
    return this->idade;
}

float Cliente::getSalario(){
    return this->salario;
}

void Cliente::setNome(string novoNome){
    this->nome = novoNome;
}

void Cliente::setIdade(int novaIdade){
    this->idade = novaIdade;
}

void Cliente::setSalario(float novoSalario){
    this->salario = novoSalario;
}

void Cliente::fazAniversario(){
    setIdade(getIdade()+1);
}

void Cliente::compra(float valor){
    setSalario(getSalario()-valor);
}

void Cliente::displayMessage(){
    cout << "\nNome: " << getNome() << "\nIdade: " << getIdade() << "\nSalario: " << getSalario() << endl;
}