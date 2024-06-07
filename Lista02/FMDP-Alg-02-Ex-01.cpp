/*1. Unidades de tempo. Crie um programa Python que leia do usuário um valor de intervalo de
tempo expresso em número de dias, horas, minutos e segundos. O programa deve computar e
exibir a quantidade total de segundos deste intervalo de tempo informado.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int dias, horas, minutos, segundos;
    cout << "Digite o número de dias: ";
    cin >> dias;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número válido.\n";
        return 1;
    }
    cout << "Digite o número de horas: ";
    cin >> horas;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número válido.\n";
        return 1;
    }
    cout << "Digite o número de minutos: ";
    cin >> minutos;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número válido.\n";
        return 1;
    }
    cout << "Digite o número de segundos: ";
    cin >> segundos;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número válido.\n";
        return 1;
    }
    int totalSegundos = dias * 86400 + horas * 3600 + minutos * 60 + segundos;
    cout << "O intervalo de tempo informado equivale a " << totalSegundos << " segundos.\n";
    return 0;
}
