#ifndef CUPOM_H
#define CUPOM_H

#include<string>

using std::string;

class Cupom{

    private:
        string id;
        string descricao;
        int quantidade;
        float preco;
        void validaQuantidade(int quantidade);
        void validaPreco(float preco);

    public:
        Cupom(string id, string descricao, int quantidade, float preco);
        string getId();
        string getDescricao();
        int getQuantidade();
        float getPreco();
        void setId(string novoId);
        void setDescricao(string novaDescricao);
        void setQuantidade(int novaQuantidade);
        void setPreco(float novoPreco);
        float calculaCupom();
        void exibeCupom();
};

#endif