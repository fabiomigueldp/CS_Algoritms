// Exercício 7: Conversão decimal → binário iterativa
// Escreva uma função que converte um número decimal (base 10) em binário (base 2). 
// A função deve receber como parâmetro o número inteiro decimal (q) e, em seguida, 
// deve realizar a conversão usando o algoritmo de divisão mostrado abaixo. 
// Quando o algoritmo for concluído, o resultado contém a representação binária do número, 
// que deve ser retornada pela função como uma string.
// DecBinIterativo(q)
// result ← ””
// repeat
// r ← q%2
// result ← str(r) + result
// q ← q//2
// until q == 0;
// return result

#include <iostream>
#include <string>
using namespace std;

string DecBinIterativo(int q) {
    string result = "";
    do {
        int r = q % 2;
        result = to_string(r) + result;
        q = q / 2;
    } while (q != 0);
    return result;
}

int main() {
    int q;
    cout << "Digite um número inteiro positivo: ";
    cin >> q;
    if (q < 0) {
        cout << "Número inválido! Digite um número inteiro positivo." << endl;
    } else {
        cout << "O número " << q << " em binário é " << DecBinIterativo(q) << "." << endl;
    }
    return 0;
}