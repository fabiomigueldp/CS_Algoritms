/*.7. Soma dos n primeiros números positivos. Escreva um programa Python que receba do
usuário um número inteiro positivo n e então exiba a soma de todos os números inteiros de 1 a
n. Tal soma pode ser computada usando a seguinte fórmula:soma = ((n)(n + 1))/2*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Greetings! Please enter a positive integer number: ";
    cin >> n;
    int sum = (n*(n+1))/2;
    cout << "The sum of the first " << n << " positive integers is " << sum << endl;
    return 0;
    main();
}