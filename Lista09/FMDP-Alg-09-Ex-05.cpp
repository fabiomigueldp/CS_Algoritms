// Exercício 5: Numerar as linhas de um arquivo. Escreva um programa Python que adicione números de 
// linhas em um arquivo. O programa deve receber do usuário os nomes do arquivo de entrada e do arquivo 
// de saída (que será um novo arquivo criado pelo programa). Cada linha do arquivo de saída deve começar 
// com seu número, seguido de dois pontos, um espaço em branco, seguido do conteúdo da linha do arquivo 
// original.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cerr << "Erro: número incorreto de argumentos passado para o programa." << endl;
        return 1;
    }
    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Erro: arquivo de entrada não encontrado." << endl;
        return 1;
    }
    ofstream output(argv[2]);
    if (!output.is_open()) {
        cerr << "Erro: arquivo de saída não pode ser criado." << endl;
        return 1;
    }
    string line;
    int lineNumber = 1;
    while (getline(file, line)) {
        output << lineNumber << ": " << line << endl;
        lineNumber++;
    }
    return 0;
}
