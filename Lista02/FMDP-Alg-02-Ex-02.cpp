/*2. Unidades de tempo (novamente). Neste exercício você deve fazer o processo inverso do
exercício anterior. Desenvolva um programa Python que recebe do usuário uma quantidade de
tempo em segundos. Então o programa deve exibir a quantidade de tempo equivalente na
forma D:HH:MM:SS, onde D, HH, MM e SS representam dias, horas, minutos e segundos
respectivamente. Os valores de horas, minutos e segundos devem ser formatados todos com
dois dígitos, sendo obrigatória a inclusão do dígito 0 para valores menores que 10.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int totalSegundos;
    cout << "Digite a quantidade de tempo em segundos: ";
    cin >> totalSegundos;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número válido.\n";
        return 1;
    }
    int dias = totalSegundos / 86400;
    totalSegundos %= 86400;
    int horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    int minutos = totalSegundos / 60;
    int segundos = totalSegundos % 60;
    cout << "O intervalo de tempo informado equivale a " << dias << ":" << (horas < 10 ? "0" : "") << horas << ":" << (minutos < 10 ? "0" : "") << minutos << ":" << (segundos < 10 ? "0" : "") << segundos << ".\n";
    return 0;
}