#ifndef CONTA_H
#define CONTA_H

class ContaBanco{
    
private:
  double saldo;
  void validaSaldo(double saldo);
  void setSaldo(double valor);
  void displayMessageSaldoInsuficiente();

public:
  ContaBanco(double saldo);
  double getSaldo();
  void creditar(double valor);
  void debitar(double valor);
  void displayMessage();

};

#endif