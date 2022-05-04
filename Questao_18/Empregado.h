#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

using std::string;

class Empregado{
    
private:
  string nome;
  string sobrenome;
  double salario;
  void validaSalario(double salario);

public:
  Empregado(string nome, string sobrenome, double saldo);
  string getNome();
  string getSobrenome();
  double getSalario();
  void setNome(string novoNome);
  void setSobrenome(string novoSobrenome);
  void setSalario(double novoSalario);
  void aumentoSalarial(double porcentagem);
  void displayMessage();
  
};

#endif