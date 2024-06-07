/*5. Nome do mês e número de dias. A quantidade de dias de um mês pode variar de 28 a 31
dias. Neste exercício você deve criar um programa Python que recebe do usuário o nome de
um mês (como uma string). Então seu programa deve exibir uma mensagem informando a
quantidade de dias daquele mês. Caso o mês seja fevereiro, sua mensagem pode informar
“28 ou 29 dias”.*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string mes;
    int dias;
    bool entradaValida = false;
        cout << "Digite o nome de um mês: ";
        cin >> mes;
        for (int i = 0; i < mes.length(); i++) {
            mes[i] = tolower(mes[i]);
        }
        if (mes == "janeiro" || mes == "março" || mes == "maio" || mes == "julho" || mes == "agosto" || mes == "outubro" || mes == "dezembro") {
            dias = 31;
        } else if (mes == "abril" || mes == "junho" || mes == "setembro" || mes == "novembro") {
            dias = 30;
        } else if (mes == "fevereiro") {
            dias = 28;
        } else {
            cout << "Erro: Entrada inválida. Por favor, digite o nome de um mês." << endl;
        }
        cout << "O mês de " << mes << " tem " << dias << " dias." << endl;
    return 0;
    }