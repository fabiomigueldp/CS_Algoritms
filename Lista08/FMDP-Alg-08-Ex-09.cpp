// Exercício 9: Raiz quadrada recursiva
// Crie uma função de raiz quadrada com dois parâmetros. O primeiro parâmetro, n, é o número 
// para o qual a raiz quadrada está sendo calculada. O segundo parâmetro, estimativa, é a 
// estimativa atual para a raiz quadrada. O parâmetro de estimativa deve ter um valor padrão de 1,0. 
// Não forneça um valor padrão para o primeiro parâmetro.
// Sua função será recursiva. O caso básico ocorre quando o valor absoluto da diferença entre estimativa2 
// (estimativa ao quadrado) e n é menor ou igual a 10-12. Neste caso, sua função deve retornar o valor de estimativa 
// porque está próximo o suficiente da raiz quadrada de n. Caso contrário, sua função deve retornar o resultado 
// da chamada a si própria passando n como primeiro parâmetro e (estimativa + n / estimativa) / 2 como o segundo parâmetro.

#include <iostream>
#include <cmath>
using namespace std;

double RaizQuadrada(double n, double estimativa = 1.0) {
    if (abs(estimativa * estimativa - n) <= 1e-12) {
        return estimativa;
    } else {
        return RaizQuadrada(n, (estimativa + n / estimativa) / 2);
    }
}

int main() {
    double n;
    cout << "Digite um número real positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Número inválido! Digite um número real positivo." << endl;
    } else {
        cout << "A raiz quadrada de " << n << " é " << RaizQuadrada(n) << "." << endl;
    }
    return 0;
}