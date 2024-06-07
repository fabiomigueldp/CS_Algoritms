/*5. Calculando o troco. Considere o software que controla uma máquina automática de compras.
Uma tarefa que ele precisa realizar é determinar quanto troco fornecer ao comprador quando
este faz o pagamento em dinheiro. Escreva um programa Python que inicia lendo do usuario
uma quantidade de centavos como um número inteiro (portanto vamos considerar números de
0 a 99). Então o seu programa deve calcular e exibir quantidade e o valor de cada moeda para
compor este troco em centavos informado. O troco deve ser montado com a menor quantidade
possível de moedas. Assuma que a máquina possui moedas de 50, 25, 10, 5 e 1 centavos.*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int centavos;
    cout << "Digite a quantidade de centavos: ";
    cin >> centavos;
    if (cin.fail() || centavos < 0 || centavos > 99) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, insira um número de 0 a 99.\n";
        return 1;
    }
    int moedas50 = centavos / 50;
    centavos %= 50;
    int moedas25 = centavos / 25;
    centavos %= 25;
    int moedas10 = centavos / 10;
    centavos %= 10;
    int moedas5 = centavos / 5;
    centavos %= 5;
    int moedas1 = centavos;
    cout << "O troco é composto por " << moedas50 << " moeda(s) de 50 centavos, " << moedas25 << " moeda(s) de 25 centavos, " << moedas10 << " moeda(s) de 10 centavos, " << moedas5 << " moeda(s) de 5 centavos e " << moedas1 << " moeda(s) de 1 centavo.\n";
    return 0;
}