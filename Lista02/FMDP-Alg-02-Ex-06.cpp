/*6. Soma dos dígitos de um inteiro. Desenvolva um programa que obtenha do usuário um
número inteiro de 4 dígitos e exiba a soma dos dígitos do número. Por exemplo, se o usuário
fornecer o número 3141, então seu programa deve exibir o número 9 (3 + 1 + 4 + 1).*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número inteiro de 4 dígitos: ";
    cin >> numero;
    if (cin.fail() || numero < 1000 || numero > 9999) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número inteiro de 4 dígitos.\n";
        return 1;
    }
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    cout << "A soma dos dígitos do número informado é: " << soma << ".\n";
    return 0;
}