// Exercício 2: Sequência de Fibonacci
// A série de Fibonacci é uma sequência onde um termo é definido pela soma dos dois termos anteriores. 
// Os primeiros termos são 0, 1, 1, 2, 3, 5, 8, 13, etc. O enésimo termo da sequência é definido por Fn = Fn−1 + Fn−2,
// com F0 = 0 e F1 = 1. Escreva uma função Python recursiva que recebe como parâmetro um valor inteiro n, 
// e retorna o enésimo termo da sequência de Fibonacci.

#include <iostream>
#include <string>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Número inválido! Digite um número inteiro positivo." << endl;
    } else {
        cout << "O " << n << "º termo da sequência de Fibonacci é " << fibonacci(n) << "." << endl;
    }
    return 0;
}