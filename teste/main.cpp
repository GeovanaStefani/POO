#include <locale.h>
#include <iostream>
#include <string>
#include "Cliente.h"

int main(){
    setlocale(LC_ALL, "Portuguese");

    Cliente cliente1("Geovana", 18, 1500);
    cliente1.displayMessage();

    cliente1.fazAniversario();
    cliente1.compra(20.0);
    cliente1.displayMessage();

    return 0;
}
