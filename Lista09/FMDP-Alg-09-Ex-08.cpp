// Exercício 8: Palavras que ocorrem com maior frequência. Escreva um programa que exiba a palavra 
// (ou palavras) que ocorrem com mais frequência em um arquivo. Seu programa deve começar lendo o nome 
// do arquivo do usuário. Em seguida, ele deve encontrar a(s) palavra(s) dividindo cada linha do arquivo 
// em cada espaço. Finalmente, quaisquer sinais de pontuação à esquerda ou à direita devem ser removidos 
// de cada palavra. Além disso, seu programa deve ignorar a capitalização. Como resultado, porta, porta!, 
// Porta e PoRTA devem ser tratados como a mesma palavra, por exemplo. Você provavelmente verá que sua 
// solução para o exercício 8 da lista 6 (sobre strings) é útil para resolver este problema.

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string strip_punctuation(string word) {
  size_t start = 0;
  while (start < word.length() && ispunct(word[start])) {
    start++;
  }
  size_t end = word.length();
  while (end > start && ispunct(word[end - 1])) {
    end--;
  }
  return word.substr(start, end - start);
}

int main() {
  string filename;
  cout << "Digite o nome do arquivo: ";
  cin >> filename;

  ifstream file(filename);
  if (!file.is_open()) {
    cerr << "Não foi possível abrir o arquivo." << endl;
    return 1;
  }

  map<string, int> freq;
  string word;

  while (file >> word) {
    word = strip_punctuation(word);
    transform(word.begin(), word.end(), word.begin(),
              [](unsigned char c) { return tolower(c); });
    if (!word.empty()) {
      freq[word]++;
    }
  }

  int max_freq = 0;
  for (auto& p : freq) {
    if (p.second > max_freq) {
      max_freq = p.second;
    }
  }

  vector<string> most_frequent;
  for (auto& p : freq) {
    if (p.second == max_freq) {
      most_frequent.push_back(p.first);
    }
  }

  cout << "Palavra(s) mais frequente(s) com " << max_freq << " ocorrência(s):" << endl;
  for (auto& word : most_frequent) {
    cout << word << endl;
  }

  return 0;
}
