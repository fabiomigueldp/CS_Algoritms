/*5. Nome do mês e número de dias. A quantidade de dias de um mês pode variar de 28 a 31
dias. Neste exercício você deve criar um programa Python que recebe do usuário o nome de
um mês (como uma string). Então seu programa deve exibir uma mensagem informando a
quantidade de dias daquele mês. Caso o mês seja fevereiro, sua mensagem pode informar
“28 ou 29 dias”.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> meses = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho",
                            "agosto", "setembro", "outubro", "novembro", "dezembro"};
    vector<string> dias = {"31", "28 ou 29", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"};
    string mes;
    bool entradaValida = false;

    while (!entradaValida) {
        cout << "Digite o nome de um mês: ";
        getline(cin, mes);

        transform(mes.begin(), mes.end(), mes.begin(), ::tolower);

        auto it = find(meses.begin(), meses.end(), mes);
        if (it != meses.end()) {
            entradaValida = true;
            int index = distance(meses.begin(), it);
            cout << "O mês de " << mes << " tem " << dias[index] << " dias." << endl;
        } else {
            cout << "Erro: Entrada inválida. Por favor, digite um mês válido." << endl;
        }
    }

    return 0;
}
