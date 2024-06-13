// Exercício 9: Remoção de comentários. Python usa o caractere # para marcar o início de um comentário. 
// O comentário termina no final da linha que contém o caractere #. Neste exercício, você deve criar um 
// programa que remove todos os comentários de um arquivo-fonte Python. Verifique cada linha no arquivo 
// para determinar se um caractere # está presente. Se for, então seu programa deve remover todos os 
// caracteres do caractere # até o final da linha (ignoraremos a situação em que o caractere de comentário 
// ocorre dentro de uma string). Salve o arquivo modificado usando um novo nome que será inserido pelo 
// usuário. O usuário também irá inserir o nome do arquivo de entrada. Certifique-se de que uma mensagem 
// de erro apropriada seja exibida se for encontrado um problema ao acessar os arquivos.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "Erro: número incorreto de argumentos passado para o programa." << endl;
        return 1;
    }
    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Erro: arquivo não encontrado." << endl;
        return 1;
    }
    string outputFilename;
    cout << "Digite o nome do arquivo de saída: ";
    cin >> outputFilename;
    ofstream output(outputFilename);
    if (!output.is_open()) {
        cerr << "Erro: arquivo de saída não pode ser criado." << endl;
        return 1;
    }
    string line;
    while (getline(file, line)) {
        size_t pos = line.find('#');
        if (pos != string::npos) {
            line = line.substr(0, pos);
        }
        output << line << endl;
    }
    return 0;
}