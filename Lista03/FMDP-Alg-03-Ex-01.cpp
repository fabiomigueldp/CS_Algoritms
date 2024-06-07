/*1. Par ou ímpar. Escreva um programa Python que recebe do usuário um número inteiro. Seu
programa deve então exibir uma mensagem indicando se o número fornecido é par ou ímpar.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Dígite um número inteiro:";
    cin >> num;
    if (num % 2 == 0) {
        cout << "O número " << num << "é par." << endl;
    } else {
        cout << "O número " << num << "é ímpar." << endl;
    }
    return 0;
    }