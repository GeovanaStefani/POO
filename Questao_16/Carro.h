#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

class Carro{
    
private:
  string marca;
  int ano;

public:
  Carro(string nome, int ano);

  string getMarca();
  int getAno();

  void setMarca(string novoNome);
  void setAno(int novoAno);

  void displayMessage();
};

#endif