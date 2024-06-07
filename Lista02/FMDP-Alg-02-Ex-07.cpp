/*7. Centena, dezena, unidade. Dado um número de três algarismos N = CDU (onde C é o
algarismo das centenas, D é o algarismo das dezenas e U o algarismo das unidades) Faça um
programa Python que receba do usuário o número inteiro N, e imprima separadamente a
centena, a dezena e a unidade. */

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número inteiro de 3 dígitos: ";
    cin >> numero;
    if (cin.fail() || numero < 100 || numero > 999) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número inteiro de 3 dígitos.\n";
        return 1;
    }
    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = numero % 10;
    cout << "Centena: " << centena << ", Dezena: " << dezena << ", Unidade: " << unidade << ".\n";
    return 0;
}