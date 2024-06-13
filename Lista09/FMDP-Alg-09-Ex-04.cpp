// Exercício 4: Concatenar múltiplos arquivos. Os sistemas operacionais baseados em Unix normalmente
// possuem um comando chamado cat, que é a abreviação de “concatenate". Sua finalidade é concatenar 
// e exibir um ou mais arquivos passados como argumentos. Os arquivos são exibidos na mesma ordem em 
// que são passados como argumentos. Note que este comando não modifica os arquivos originais e não 
// cria um novo arquivo, ele apenas exibe o conteúdo dos arquivos na sequência. Escreva um programa 
// Python que apresente o mesmo comportamento. O programa deve exibir uma mensagem de erro caso algum 
// arquivo não puder ser lido, e então passa para a leitura do próximo arquivo. O programa também deve 
// exibir mensagem de erro caso não tenha sido passado nenhum argumento para o programa em linha de 
// comando.

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
    for (int i = 1; i < argc; i++) {
        ifstream file(argv[i]);
        if (!file.is_open()) {
            cerr << "Erro: arquivo não encontrado." << endl;
            continue;
        }
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
    return 0;
}