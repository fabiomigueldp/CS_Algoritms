/*  11. Raízes de equação quadrática. Uma função quadrática pode ser descrita da seguinte forma:
    f(x) = ax² + bx + c, onde a, b e c são constantes, e a é diferente de zero. As raízes da
    função quadrática podem ser encontradas determinando-se os valores de x que satisfazem a
    equação quadrática ax² + bx + c = 0. Uma função quadrática pode ter 0, 1 ou 2 raízes
    reais. Essas raízes podem ser calculadas pela fórmula de Bháskara, mostrada abaixo:

                        -b ± √(b² - 4ac)
             raiz =   ---------------------
                                2a

    A parte da expressão dentro da raiz quadrada é chamada de discriminante. Se o discriminante
    for negativo, a equação não possui raízes reais. Se o discriminante for igual a zero, então a
    equação tem apenas uma raiz real. Caso contrário, a equação tem duas raízes reais e a
    expressão deve ser computada duas vezes, uma com o sinal de + e a outra com o sinal de -
    ao se calcular o numerador da fração.

    Escreva um programa Python que calcula as raízes reais de uma função quadrática. Seu
    programa deve iniciar solicitando ao usuário os valores de a, b e c. Então o programa deve
    exibir uma mensagem informando a quantidade de raízes reais e o(s) valor(es) da(s) raiz(es).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminante, raiz1, raiz2;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        cout << "A equação não possui raízes reais." << endl;
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        cout << "A equação possui uma raiz real: " << raiz1 << "." << endl;
    } else {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "A equação possui duas raízes reais: " << raiz1 << " e " << raiz2 << "." << endl;
    }

    return 0;
}