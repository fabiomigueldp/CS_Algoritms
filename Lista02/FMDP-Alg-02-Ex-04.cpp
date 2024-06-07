/*4. Ordenação de 3 inteiros. Crie um programa que obtém 3 números inteiros do usuário e os
exibe de forma ordenada do menor para o maior. Use as funções min e max para encontrar o
menor valor e o maior valor. Dica: o valor do meio pode ser obtido pela soma dos três valores,
subtraída do maior e do menor.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a, b, c;
    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número inteiro válido.\n";
        return 1;
    }
    cout << "Digite o segundo número inteiro: ";
    cin >> b;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número inteiro válido.\n";
        return 1;
    }
    cout << "Digite o terceiro número inteiro: ";
    cin >> c;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número inteiro válido.\n";
        return 1;
    }
    int menor = min(a, min(b, c));
    int maior = max(a, max(b, c));
    int meio = a + b + c - menor - maior;
    cout << "Os números em ordem crescente são: " << menor << ", " << meio << ", " << maior << ".\n";
    return 0;
}