// Exercício 11: Corretor ortográfico. Um corretor ortográfico pode ser uma ferramenta útil para pessoas 
// que têm dificuldade em escrever palavras corretamente. Neste exercício, você escreverá um programa 
// que lê um arquivo e exibe todas as palavras com erros ortográficos contidas nele. Palavras com erros 
// ortográficos serão identificadas comparando cada palavra do arquivo com uma lista de palavras conhecidas 
// do Português. Quaisquer palavras no arquivo do usuário que não aparecerem na lista de palavras conhecidas 
// serão relatadas como erros ortográficos. O usuário deve fornecer como parâmetro de linha de comando o 
// nome do arquivo para verificar se há erros de ortografia. Seu programa deve exibir uma mensagem de erro 
// apropriada se o parâmetro da linha de comando estiver ausente. Uma mensagem de erro também deve ser 
// exibida se o seu programa não conseguir abrir o arquivo do usuário. Use a solução do exercício 8 da lista 
// 6 ao criar a solução para este exercício, de forma que palavras seguidas de vírgula, ponto ou outro sinal 
// de pontuação não sejam relatadas como erros ortográficos. Ignore a capitalização das palavras ao verificar 
// a ortografia. No google classroom há um arquivo texto com todas as palavras do Português Brasileiro para 
// você usar neste exercício.

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_set>
#include <cctype>
#include <algorithm>
#include <sstream>

using namespace std;

string normalizarPalavra(const string& palavra) {
    string normalizada;
    for (char ch : palavra) {
        if (isalpha(ch)) {
            normalizada += tolower(ch);
        }
    }
    return normalizada;
}

unordered_set<string> carregarDicionario(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    unordered_set<string> dicionario;
    string linha;
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo de dicionário: " << nomeArquivo << endl;
        exit(1);
    }
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        string palavra;
        while (ss >> palavra) { 
            dicionario.insert(normalizarPalavra(palavra));
        }
    }
    arquivo.close();
    return dicionario;
}

void processarTexto(const string& nomeArquivo, const unordered_set<string>& dicionario) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo de texto: " << nomeArquivo << endl;
        exit(1);
    }
    string linha;
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        string palavra;
        while (ss >> palavra) {
            palavra = normalizarPalavra(palavra);
            if (dicionario.find(palavra) == dicionario.end()) {
                cout << "Erro ortográfico: " << palavra << endl;
            }
        }
    }
    arquivo.close();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Erro: Nome do arquivo de texto não fornecido." << endl;
        return 1;
    }
    string nomeArquivoTexto = argv[1];
    string nomeArquivoDicionario = "Palavras_portugues_br-utf8.txt";

    unordered_set<string> dicionario = carregarDicionario(nomeArquivoDicionario);
    processarTexto(nomeArquivoTexto, dicionario);

    return 0;
}
