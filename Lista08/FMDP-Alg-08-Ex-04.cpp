// Exercício 4: Fibonacci com memorização de resultado
// Escreva uma nova versão da sua função recursiva do exercício 2 (Fibonacci) utilizando a técnica de 
// memorização de resultado para melhorar desempenho e consumo de memória.

#include <iostream>
#include <unordered_map>
#include <limits>

using namespace std;

unordered_map<int, unsigned long long> cache;

unsigned long long fibonacci(int n) {

    if (cache.find(n) != cache.end()) {
        return cache[n];
    }

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
    if (cache[n] < cache[n - 1]) {
        cout << "Aviso: Overflow detectado no termo " << n << "." << endl;
    }
    return cache[n];
}

int main() {
    cout << "Digite números inteiros positivos (digite um número negativo para encerrar):" << endl;
    while (true) {
        int n;
        cin >> n;
        if (n < 0) {
            cout << "Encerrando programa." << endl;
            break;
        }
        if (n > 92) {
            cout << "Aviso: Entrada maior que 92 pode causar overflow no tipo unsigned long long." << endl;
            continue;
        }
        cout << "O " << n << "º termo da sequência de Fibonacci é " << fibonacci(n) << "." << endl;
    }
    return 0;
}