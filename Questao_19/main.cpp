#include<iostream>
#include<locale.h>
#include "Data.h"

using std::cout; using std::endl;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << "DATA 1: " << endl;
    Data data1(1, 2, 2008);
    data1.mostrarData();

    cout << "DATA 2: " << endl;
    Data data2(1, 0, 2005);
    data2.mostrarData();

    cout << "DATA 3: " << endl;
    Data data3(1, 13, 2020);
    data3.mostrarData();

    return 0;
}