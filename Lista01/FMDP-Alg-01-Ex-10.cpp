/*10. Aritmética. Escreva um programa Python que leia do usuário dois inteiros a e b. Seu
programa deve computar e exibir o seguinte:
• A soma de a e b
• A diferença quando b é subtraído de a
• O produto de a por b
• O quociente quando a é dividido por b
• O resto quando a é dividido por b
• O resultado de log10 a
• O resultado de a^b*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cout << "Greetings! Please enter two integers a and b: ";
    cin >> a >> b;
    cout << "The sum of a and b is " << a + b << endl;
    cout << "The difference when b is subtracted from a is " << a - b << endl;
    cout << "The product of a by b is " << a * b << endl;
    cout << "The quotient when a is divided by b is " << a / b << endl;
    cout << "The remainder when a is divided by b is " << a % b << endl;
    cout << "The result of log10 a is " << log10(a) << endl;
    cout << "The result of a^b is " << pow(a, b) << endl;
    return 0;
    main();
}