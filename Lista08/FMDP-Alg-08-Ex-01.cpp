// Exercício 1: Fatorial
// Implemente uma função recursiva para calcular o fatorial de um número inteiro positivo. 
// O fatorial é denotado pelo símbolo de exclamação “!” e é definido da seguinte forma: 
// 1! = 1 e n! = n x (n-1)!, para n>1.

#include <iostream>
#include <limits>
using namespace std;

unsigned long long int fatorial(int n) {
    unsigned long long int result = 1;
    for (int i = 1; i <= n; ++i) {
        if (result > numeric_limits<unsigned long long int>::max() / i) {
            cout << "Overflow! O fatorial de " << n << " é muito grande para ser representado." << endl;
            return 0;
        }
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Número inválido! Digite um número inteiro positivo." << endl;
    } else {
        unsigned long long int result = fatorial(n);
        if (result != 0) {
            cout << n << "! = " << result << endl;
        }
    }
    return 0;
}
