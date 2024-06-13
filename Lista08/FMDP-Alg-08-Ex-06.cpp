// Exercício 6: MDC - Máximo Divisor Comum
// Euclides foi um matemático grego que viveu há aproximadamente 2.300 anos. Seu algoritmo para calcular o MDC 
// - máximo divisor comum de dois inteiros positivos, a e b, é eficiente e recursivo. 
// Está descrito abaixo: 
// MDC(a, b)
// if b == 0 then return a
// else c ← a%b return MDC(b,c)
// end

#include <iostream>
#include <limits>
using namespace std;

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int a, b;
    cout << "Digite dois números inteiros positivos: ";
    cin >> a >> b;
    if (a < 0 || b < 0) {
        cout << "Número(s) inválido(s)! Digite dois números inteiros positivos." << endl;
    } else {
        cout << "O MDC de " << a << " e " << b << " é " << mdc(a, b) << "." << endl;
    }
    return 0;
}