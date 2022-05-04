#include <iostream>
#include <locale.h>
#include "ContaBanco.h"

using std::cout; using std::endl;

int main() {
  setlocale(LC_ALL, "Portuguese");

  cout<< "CONTA 1:" << endl;
  ContaBanco conta1(3000);
  conta1.displayMessage();
  conta1.creditar(1000);
  conta1.displayMessage();
  conta1.debitar(1);
  conta1.displayMessage();

  cout<< "\nCONTA 2:" << endl;
  ContaBanco conta2(-1);
  conta2.debitar(50);
  conta2.creditar(200);
  conta2.debitar(50);
  conta2.displayMessage();

  return 0;
}