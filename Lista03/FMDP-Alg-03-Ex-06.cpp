/*6. Classifique o triângulo. Baseado nos comprimentos dos seus lados, um triângulo pode ser
classificado como equilátero (quando os três lados tem o mesmo tamanho), isósceles (quando
apenas dois lados são iguais) ou escaleno (quando os três lados são diferentes). Escreva um
programa Python que recebe do usuário os comprimentos dos 3 lados de um triângulo e exiba
uma mensagem informando qual é o tipo do triângulo.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    double lado1, lado2, lado3;
    string tipoTriangulo;

    cout << "Digite o comprimento do primeiro lado do triângulo: ";
    cin >> lado1;
    cout << "Digite o comprimento do segundo lado do triângulo: ";
    cin >> lado2;
    cout << "Digite o comprimento do terceiro lado do triângulo: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        tipoTriangulo = "equilátero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        tipoTriangulo = "isósceles";
    } else {
        tipoTriangulo = "escaleno";
    }

    cout << "O triângulo com lados de comprimento " << lado1 << ", " << lado2 << " e " << lado3 << " é um triângulo " << tipoTriangulo << "." << endl;

    return 0;
}