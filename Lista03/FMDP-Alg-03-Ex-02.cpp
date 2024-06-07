/*2. Idade canina. É comum dizermos que um ano de um cachorro equivale a 7 anos de um
humano. Porém, essa conversão simples erra em não reconhecer que cachorros se tornam
adultos em cerca de 2 anos. Assim, algumas pessoas acreditam que é melhor contar os dois
primeiros anos como 10.5 anos caninos, e os anos restantes como 4 anos caninos cada.
Escreva um programa que implemente a conversão de anos cronológicos para anos caninos.
Certifique-se que seu programa funciona tanto para conversão de idades até 2 anos
cronológicos e também maiores que 2 anos cronológicos. Seu progra*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int idade;
    cout << "Dígite a idade do chacorro:";
    cin >> idade;
    if (idade <= 2) {
        cout << "A idade do cachorro em anos caninos é: " << idade * 10.5 << endl;
    } else {
        cout << "A idade do cachorro em anos caninos é:" << 21 + (idade - 2) * 4 << endl;
    }
    return 0;
    }
