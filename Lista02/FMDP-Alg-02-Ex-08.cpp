/*8. Centena, dezena, unidade (novamente). Dado um número de três algarismos N = CDU
(onde C é o algarismo das centenas, D é o algarismo das dezenas e U o algarismo das
unidades), considere o número M constituído pelos algarismos de N em ordem inversa, isto é,
M=UDC. Faça um programa Python para gerar e imprimir M a partir de N (p.ex.:N=123
->M=321).*/

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
    int inverso = unidade * 100 + dezena * 10 + centena;
    cout << "O número " << numero << " invertido é " << inverso << ".\n";
    return 0;
}