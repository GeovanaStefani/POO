#include<iostream>
#include "Data.h"

using std::cout; using std::endl;

const int MES_PADRAO = 1;

//private
void Data::validaMes(int mes){
    if ((mes < 1) || (mes>12))
        setMes(MES_PADRAO);
    else
        setMes(mes);
}

//public
Data::Data(int dia, int mes, int ano){
    setDia(dia);
    validaMes(mes);
    setAno(ano);
}

int Data::getDia(){
    return this->dia;
}

int Data::getMes(){
    return this->mes;
}

int Data::getAno(){
    return this->ano;
}

void Data::setDia(int novoDia){
    this->dia = novoDia;
}

void Data::setMes(int novoMes){
    this->mes = novoMes;
}

void Data::setAno(int novoAno){
    this->ano = novoAno;
}

void Data::mostrarData(){
    cout << endl << getDia() << "/" << getMes() << "/" << getAno() << endl;
}