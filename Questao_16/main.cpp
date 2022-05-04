#include <locale.h>
#include "Carro.h"

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  Carro carro1("Fiat", 2001);
  carro1.setAno(2010);
  carro1.displayMessage();

  Carro carro2("Ferrari", 2000);
  carro2.setMarca("");
  carro2.displayMessage();

  return 0;
}