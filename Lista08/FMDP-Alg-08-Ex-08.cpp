// Exercício 8: Conversão decimal → binário recursiva
// Escreva uma função recursiva que converta um número decimal não negativo em binário. 
// Trate 0 e 1 como casos básicos que retornam uma string contendo o dígito apropriado. 
// Para todos os outros inteiros positivos, n, você deve calcular o próximo dígito usando o operador de 
// resto e, em seguida, fazer uma chamada recursiva para calcular os dígitos de n // 2. 
// Finalmente, você deve concatenar o resultado da chamada recursiva (que será uma string) e o 
// próximo dígito (que você precisará converter em uma string) e retornar essa string como o 
// resultado da função.

#include <iostream>
#include <string>
using namespace std;

string DecBinRecursivo(int n) {
    if (n == 0) {
        return "0";
    } else if (n == 1) {
        return "1";
    } else {
        return DecBinRecursivo(n / 2) + to_string(n % 2);
    }
}

int main() {
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Número inválido! Digite um número inteiro positivo." << endl;
    } else {
        cout << "O número " << n << " em binário é " << DecBinRecursivo(n) << "." << endl;
    }
    return 0;
}