// Exercício 6: Encontrar a palavra mais longa de um arquivo. Neste exercício você deve desenvolver um 
// programa Python para identificar a(s) palavra(s) mais longa(s) de um arquivo. Seu programa deve exibir 
// uma mensagem que inclua o tamanho da palavra mais longa, juntamente com todas as palavras daquele 
// tamanho que existem no arquivo. Trate cada grupo de caracteres sem espaço como uma palavra, mesmo se 
// esse grupo conter números ou sinais de pontuação. Dica: vai ser bem mais fácil desenvolver uma solução 
// se você usar estruturas do Python tais como listas, conjuntos e dicionários.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
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
    map<int, set<string>> words;
    string word;
    while (file >> word) {
        words[word.size()].insert(word);
    }
    int maxLength = 0;
    for (auto it = words.begin(); it != words.end(); it++) {
        maxLength = max(maxLength, it->first);
    }
    cout << "A(s) palavra(s) mais longa(s) tem(têm) " << maxLength << " caracteres:" << endl;
    for (auto it = words[maxLength].begin(); it != words[maxLength].end(); it++) {
        cout << *it << endl;
    }
    return 0;
}