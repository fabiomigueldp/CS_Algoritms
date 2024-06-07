/*9. Data invertida. Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não
em uma variável do tipo data, crie um programa Python que leia uma data no formato
DDMMAA e imprima essa data no formato AAMMDD, onde:
• a letra D corresponde a dois algarismos representando o dia;
• a letra M corresponde a dois algarismos representando o mês;
• a letra A corresponde aos dois últimos algarismos representando o ano.
Por exemplo: a data 110618 (11 de junho de 2018), deve ser impressa como 180611*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int data;
    cout << "Digite uma data no formato DDMMAA: ";
    cin >> data;
    if (cin.fail() || data < 100000 || data > 999999) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira uma data no formato DDMMAA.\n";
        return 1;
    }
    int dia = data / 10000;
    int mes = (data % 10000) / 100;
    int ano = data % 100;
    cout << "Data no formato AAMMDD: " << ano << mes << dia << ".\n";
    return 0;
}