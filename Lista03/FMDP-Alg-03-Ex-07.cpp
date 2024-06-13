/*7. Níveis de barulho. A tabela abaixo mostra uma lista de volume sonoro em decibéis para
diferentes tipos comuns de barulhos 
Barulho Nivel de decibéis (dB)
Britadeira 130
Cortador de grama 106
Despertador 70
Sala silenciosa 40
Escreva um programa Python que receba do usuário um nível de volume em decibéis. Se o
usuário entrar com um valor igual a um daqueles listados na tabela, então seu programa deve
exibir uma mensagem informando o tipo de barulho da tabela equivalente ao valor informado.
Se o usuário entrar um valor intermediário entre dois valores da tabela, então seu programa
deve exibir uma mensagem informando que o nível está entre os dois barulhos (deve informar
quais são eles). Certifique-se também que seu programa exiba mensagens apropriadas caso o
usuário entre com valor menor que o menor valor da tabela ou maior que o maior valor.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int nivelDecibeis;
    string tipoBarulho;

    cout << "Digite o nível de volume em decibéis: ";
    cin >> nivelDecibeis;

    if (nivelDecibeis == 130) {
        tipoBarulho = "Britadeira";
    } else if (nivelDecibeis == 106) {
        tipoBarulho = "Cortador de grama";
    } else if (nivelDecibeis == 70) {
        tipoBarulho = "Despertador";
    } else if (nivelDecibeis == 40) {
        tipoBarulho = "Sala silenciosa";
    } else if (nivelDecibeis > 130) {
        tipoBarulho = "maior que o nível de barulho mais alto da tabela";
    } else if (nivelDecibeis < 40) {
        tipoBarulho = "menor que o nível de barulho mais baixo da tabela";
    } else if (nivelDecibeis > 106 && nivelDecibeis < 130) {
        tipoBarulho = "entre Cortador de grama e Britadeira";
    } else if (nivelDecibeis > 70 && nivelDecibeis < 106) {
        tipoBarulho = "entre Despertador e Cortador de grama";
    } else if (nivelDecibeis > 40 && nivelDecibeis < 70) {
        tipoBarulho = "entre Sala silenciosa e Despertador";
    }

    cout << "O nível de volume de " << nivelDecibeis << " dB é equivalente ao barulho de " << tipoBarulho << "." << endl;

    return 0;
}