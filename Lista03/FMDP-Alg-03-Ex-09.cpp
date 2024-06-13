/*9. Data de feriado. A tabela abaixo mostra os feriados nacionais brasileiros que caem sempre no
mesmo dia (em oposição aos feriados variáveis como carnaval e corpus christi).

Feriado Data
Confraternização universal 1o. de janeiro
Tiradentes 21 de abril
Dia do trabalho 1o. de maio
Independência do Brasil 7 de setembro
Nossa Senhora Aparecida 12 de outubro
Finados 2 de novembro
Proclamação da República 15 de novembro
Natal 25 de dezembro

Escreva um programa Python que leia do usuário o mês e o dia de uma determinada data. Se
o mês e o dia corresponderem a uma das datas da tabela acima, seu programa deve exibir o
nome do feriado. Caso contrário o programa deve informar que o dia e o mês informados não
correspondem a um feriado nacional.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> feriados = {"Confraternização universal", "Tiradentes", "Dia do trabalho",
                               "Independência do Brasil", "Nossa Senhora Aparecida", "Finados",
                               "Proclamação da República", "Natal"};
    vector<string> datas = {"1 de janeiro", "21 de abril", "1 de maio", "7 de setembro",
                            "12 de outubro", "2 de novembro", "15 de novembro", "25 de dezembro"};
    vector<string> meses = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho",
                            "agosto", "setembro", "outubro", "novembro", "dezembro"};
    string mes, dia;
    bool entradaValida = false;

    while (!entradaValida) {
        cout << "Digite o mês e o dia de uma data (ex.: janeiro 1): ";
        cin >> mes >> dia;

        transform(mes.begin(), mes.end(), mes.begin(), ::tolower);

        auto it = find(meses.begin(), meses.end(), mes);
        if (it != meses.end()) {
            entradaValida = true;
            int index = distance(meses.begin(), it);
            string data = dia + " de " + mes;
            auto it2 = find(datas.begin(), datas.end(), data);
            if (it2 != datas.end()) {
                int index2 = distance(datas.begin(), it2);
                cout << "A data de " << data << " é o feriado " << feriados[index2] << "." << endl;
            } else {
                cout << "O dia e o mês informados não correspondem a um feriado nacional." << endl;
            }
        } else {
            cout << "Erro: Entrada inválida. Por favor, digite um mês válido." << endl;
        }
    }

    return 0;
}