/*4. Polígono regular. Crie um programa Python que determina e exibe o nome de um polígono
regular sendo fornecida pelo usuário a quantidade de lados. Seu programa deve suportar
polígonos de 3 a 10 lados (inclusive). Caso o usuário forneça valores fora desta faixa, o
programa deve exibir uma mensagem de erro. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int lados;
    string nomePoligono;
    bool entradaValida = false;
    while (!entradaValida) {
        cout << "Digite a quantidade de lados do polígono regular (entre 3 e 10): ";
        cin >> lados;
        if (lados >= 3 && lados <= 10) {
            entradaValida = true;
        } else {
        cout << "Erro: Entrada inválida. Por favor, digite um número entre 3 e 10." << endl;
        }
    }
        switch (lados) {
            case 3:
                nomePoligono = "triângulo";
                break;
            case 4:
                nomePoligono = "quadrado";
                break;
            case 5:
                nomePoligono = "pentágono";
                break;
            case 6:
                nomePoligono = "hexágono";
                break;
            case 7:
                nomePoligono = "heptágono";
                break;
            case 8:
                nomePoligono = "octógono";
                break;
            case 9:
                nomePoligono = "eneágono";
                break;
            case 10:
                nomePoligono = "decágono";
                break;
        }
        cout << "O polígono regular com " << lados << " lados é um " << nomePoligono << "." << endl;
    return 0;
    }
