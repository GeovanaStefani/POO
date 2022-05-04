#ifndef DATA_H
#define DATA_H

class Data{

private:
    int dia;
    int mes;
    int ano;
    void validaMes(int mes);

public:
    Data(int dia, int mes, int ano);
    int getDia();
    int getMes();
    int getAno();
    void setDia(int novoDia);
    void setMes(int novoMes);
    void setAno(int novoAno);
    void mostrarData();

};


#endif