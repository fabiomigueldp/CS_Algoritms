// Exercício 3: Palíndromo
// Faça uma função Python recursiva que recebe uma string e retorna um valor lógico indicando se ela é ou não 
// um palíndromo. Um palíndromo é uma palavra ou frase, que é igual quando lida da esquerda para a direita ou da 
// direita para a esquerda. Espaços em branco e sinais de pontuação devem ser descartados. 
// Exemplo de palíndromo: "saudavel leva duas".

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool palindromo(string s) {
    if (s.length() <= 1) {
        return true;
    } else {
        if (!isalpha(s[0])) {
            return palindromo(s.substr(1));
        } else if (!isalpha(s[s.length() - 1])) {
            return palindromo(s.substr(0, s.length() - 1));
        } else if (tolower(s[0]) != tolower(s[s.length() - 1])) {
            return false;
        } else {
            return palindromo(s.substr(1, s.length() - 2));
        }
    }
}

int main() {
    string s;
    cout << "Digite uma string: ";
    getline(cin, s);
    if (palindromo(s)) {
        cout << "A string é um palíndromo." << endl;
    } else {
        cout << "A string não é um palíndromo." << endl;
    }
    return 0;
}