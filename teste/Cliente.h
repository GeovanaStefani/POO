#ifndef CLIENTE_H
#define CLIENTE_H

#include<iostream>
using std::string;

class Cliente{

    private:
        string nome;
        int idade;
        float salario;

    public:
        Cliente(string nome, int idade, float salario);
        string getNome();
        int getIdade();
        float getSalario();
        void setNome(string novoNome);
        void setIdade(int novaIdade);
        void setSalario(float novoSalario);
        void fazAniversario();
        void compra(float valor);
        void displayMessage();
};

#endif