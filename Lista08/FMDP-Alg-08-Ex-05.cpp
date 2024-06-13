// Exercício 5: Total de valores numéricos
// Escreva um programa que leia os valores numéricos do usuário até que uma linha em branco seja inserida. 
// Exiba a soma total de valores inseridos pelo usuário (ou 0,0 se o primeiro valor inserido for uma linha em branco). 
// Conclua esta tarefa usando recursão. Seu programa não pode usar nenhum laço de repetição.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

double total(string s) {
    if (s == "") {
        return 0.0;
    } else {
        double n;
        istringstream(s) >> n;
        string t;
        getline(cin, t);
        return n + total(t);
    }
}

int main() {
    string s;
    cout << "Digite um valor numérico (ou uma linha em branco para encerrar): ";
    getline(cin, s);
    cout << "O total dos valores inseridos é " << total(s) << "." << endl;
    return 0;
}