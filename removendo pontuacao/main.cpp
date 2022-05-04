#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::cin; using std::endl; using std::string; using std::size_t;

string retira_pontuacao(string &var, const string &pontuacao){
  while (true){
    size_t pos_pontuacao = var.find(pontuacao);
    size_t tamanho_var = var.size();

    if (pos_pontuacao >= tamanho_var) break;

    string var1 = var.substr(0, pos_pontuacao);
    string var2 = var.substr(pos_pontuacao+1);

    var = var1 + var2;
  }

  return var;
}

int main() {
  setlocale(LC_CTYPE, "");
  string str;
  string pontuacoes[] = {" ", ",", ".", ";", ":", "!", "?"};

  cout << "Informe uma frase: ";
  getline(cin, str);

  for (string pontuacao: pontuacoes){
    retira_pontuacao(str, pontuacao);
  }

  cout << "Frase sem pontuacao: " << str;

  return 0;
}
