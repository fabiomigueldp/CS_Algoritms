// Exercício 7: Frequência de letras. Uma técnica que pode ser usada para quebrar formas simples de 
// encriptação é a análise de frequência. Essa análise examina o texto encriptado para determinar quais 
// caracteres são mais frequentes. Depois ela tenta mapear as letras mais comuns na língua portuguesa, 
// tais como A, R, S, etc.. para os caracteres mais frequentes do texto encriptado.
// Escreva um programa Python que faz a primeira parte deste processo, determinando e exibindo a 
// frequência (percentual) de ocorrência de todas as letras em um arquivo. Ignore espaços, números e 
// sinais de pontuação. Seu programa não deve diferenciar letras maiúsculas e minúsculas (portento deve 
// tratar A e a como sendo a mesma letra). O usuário deve fornecer o nome do arquivo como argumento em 
// linha de comando. O programa deve exibir uma mensagem de erro caso não consiga ler o arquivo ou caso 
// não tenha sido passado nenhum argumento para o programa em linha de comando.

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "Erro: nenhum argumento passado para o programa." << endl;
        return 1;
    }
    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Erro: arquivo não encontrado." << endl;
        return 1;
    }
    map<char, int> freq;
    string line;
    while (getline(file, line)) {
        for (char c : line) {
            if (isalpha(c)) {
                c = tolower(c);
                freq[c]++;
            }
        }
    }
    int total = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        total += it->second;
    }
    for (auto it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << ": " << (it->second * 100.0) / total << "%" << endl;
    }
    return 0;
}