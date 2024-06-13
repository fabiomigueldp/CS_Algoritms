// Exercício 2: Exibir o cabeçalho de um arquivo texto. Os sistemas operacionais baseados em Unix
// normalmente possuem um comando chamado head, que exibe as 10 primeiras linhas de um arquivo 
// cujo nome é passado como argumento em linha de comando. Escreva um programa Python que apresente 
// o mesmo comportamento. O programa deve exibir uma mensagem de erro caso não exista o arquivo ou 
// caso não tenha sido passado nenhum argumento para o programa em linha de comando.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
    vector<string> lines;
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    int n = min(10, (int)lines.size());
    for (int i = 0; i < n; i++) {
        cout << lines[i] << endl;
    }
    return 0;
}