// Exercício 10: Um livro sem “e”. O romance “Gadsby”, de Ernest Vincent Wright, tem mais de 50.000 
// palavras. Embora 50.000 palavras não sejam normalmente notáveis para um romance, neste caso é porque 
// nenhuma das palavras do livro usa a letra “e”. Isso é particularmente notável quando se considera que 
// "e" é a letra mais comum em inglês. Escreva um programa que leia uma lista de palavras de um arquivo e 
// determine qual proporção das palavras usam cada letra do alfabeto. Exibe o resultado para todas as 26 
// letras. Inclua uma mensagem adicional identificando a letra usada na menor quantidade de palavras. 
// Seu programa deve ignorar quaisquer sinais de pontuação e deve tratar letras maiúsculas e minúsculas 
// como equivalentes.

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>
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
    string word;
    while (file >> word) {
        for (char c : word) {
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
    vector<pair<char, double>> freqPercent;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        freqPercent.push_back({it->first, (it->second * 100.0) / total});
    }
    sort(freqPercent.begin(), freqPercent.end(), [](pair<char, double> a, pair<char, double> b) {
        return a.second < b.second;
    });
    for (auto it = freqPercent.begin(); it != freqPercent.end(); it++) {
        cout << it->first << ": " << it->second << "%" << endl;
    }
    cout << "A letra menos usada foi: " << freqPercent[0].first << endl;
    return 0;
}