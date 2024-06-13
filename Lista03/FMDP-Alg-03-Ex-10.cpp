/*10. Cor da casa do tabuleiro. As posições das casas em tabuleiros de xadrez são identificadas
por uma letra e um número. A letra identifica a coluna e o número define a linha, conforme a
figura abaixo:

    a   b   c   d   e   f   g   h
  +---+---+---+---+---+---+---+---+
1 |   |###|   |###|   |###|   |###|
  +---+---+---+---+---+---+---+---+
2 |###|   |###|   |###|   |###|   |
  +---+---+---+---+---+---+---+---+
3 |   |###|   |###|   |###|   |###|
  +---+---+---+---+---+---+---+---+
4 |###|   |###|   |###|   |###|   |
  +---+---+---+---+---+---+---+---+
5 |   |###|   |###|   |###|   |###|
  +---+---+---+---+---+---+---+---+
6 |###|   |###|   |###|   |###|   |
  +---+---+---+---+---+---+---+---+
7 |   |###|   |###|   |###|   |###|
  +---+---+---+---+---+---+---+---+
8 |###|   |###|   |###|   |###|   |
  +---+---+---+---+---+---+---+---+
  
  Escreva um programa Python que receba do usuário um posição. Use um comando if para
determinar se a coluna informada começa com quadrado preto ou branco. Então, use
aritmética de inteiros para determinar a cor do quadrado da linha correspondente. Por
exemplo, se o usuário entrou com o valor a1, então seu programa deve informar que o
quadrado é preto. Se o usuário entrou com o valor d5, então seu programa deve informar que
o quadrado é branco. Seu programa pode assumir que o usuário vai entrar valores válidos,
não sendo necessário verificar eventuais erros de input.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string posicao;
    string cor;

    cout << "Digite a posição da casa do tabuleiro: ";
    cin >> posicao;

    char coluna = posicao[0];
    int linha = posicao[1] - '0';

    if (coluna == 'a' || coluna == 'c' || coluna == 'e' || coluna == 'g') {
        if (linha % 2 == 0) {
            cor = "preto";
        } else {
            cor = "branco";
        }
    } else {
        if (linha % 2 == 0) {
            cor = "branco";
        } else {
            cor = "preto";
        }
    }

    cout << "A casa " << posicao << " é de cor " << cor << "." << endl;

    return 0;
}