#include <iostream>
#include <locale.h>
#include "Cupom.h"

using std::cout; using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "CUPOM 1" << endl;
    Cupom cupom1("Shampoo", "Produto de higiene para cabelos", 4, 8.0);
    cupom1.exibeCupom();

    cout << "\nCUPOM 2" << endl;
    Cupom cupom2("Condicionador", "Produto de higiene para cabelos", 3, 7.0);
    cupom2.exibeCupom();

    return 0;
}