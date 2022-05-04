#include <iostream>
#include <locale.h>
#include "Empregado.h"

using std::cout; using std::endl;

int main() {
  setlocale(LC_ALL, "Portuguese");

  cout<< "EMPREGADO 1:" << endl;
  Empregado empregado1("Geovana", "Stefani", -1);
  empregado1.displayMessage();
  empregado1.setSalario(1000);
  empregado1.displayMessage();
  empregado1.aumentoSalarial(10);
  empregado1.displayMessage();

  cout<< "\nEMPREGADO 2:" << endl;
  Empregado empregado2("Joaquin", "Oliveira", 10000);
  empregado2.displayMessage();
  empregado2.aumentoSalarial(20);
  empregado2.displayMessage();

  return 0;
}