#include <iostream>
#include <string>
#include "Cupom.h"

using std::cout; using std::endl; using std::string;

const int QNTD_PADRAO = 0;
const int PRECO_PADRAO = 0;

//private
void Cupom::validaQuantidade(int quantidade){
    if (quantidade < QNTD_PADRAO)
        setQuantidade(QNTD_PADRAO);
    else
        setQuantidade(quantidade);
}

void Cupom::validaPreco(float preco){
    if (preco < PRECO_PADRAO)
        setPreco(PRECO_PADRAO);
    else
        setPreco(preco);
}

//public
Cupom::Cupom(string id, string descricao, int quantidade, float preco){
    setId(id);
    setDescricao(descricao);
    validaQuantidade(quantidade);
    validaPreco(preco);
}

string Cupom::getId(){
    return this->id;
}

string Cupom::getDescricao(){
    return this->descricao;
}

int Cupom::getQuantidade(){
    return this->quantidade;
}

float Cupom::getPreco(){
    return this->preco;
}

void Cupom::setId(string novoId){
    this->id = novoId;
}

void Cupom::setDescricao(string novaDescricao){
    this->descricao = novaDescricao;
}

void Cupom::setQuantidade(int novaQuantidade){
    this->quantidade = novaQuantidade;
}

void Cupom::setPreco(float novoPreco){
    this->preco = novoPreco;
}

float Cupom::calculaCupom(){
    return (getQuantidade() * getPreco());
}

void Cupom::exibeCupom(){
    cout << "\nId: " << getId() << endl;
    cout << "Descricao: " << getDescricao() << endl;
    cout << "Qunatidade: " << getQuantidade() << endl;
    cout << "Preco: " << getPreco() << endl;
    cout << "Total: " << calculaCupom() << endl;
}