/*9. Juros compostos. Faça de conta que você acabou de abrir uma conta de investimento que
rende 12% de juros ao ano. Os juros que você ganha são pagos ao final do ano. Escreva um
programa que começa lendo do usuário o valor inicial depositado na conta. Em seguida, o
programa deve computar e exibir o saldo da conta de investimento após 1, 2 e 3 anos. Exiba
cada valor com exatamente 2 casas decimais. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float initial_deposit;
    cout << fixed << setprecision(2);
    cout << "Greetings! Please enter the initial deposit amount: ";
    cin >> initial_deposit;
    float balance_1 = initial_deposit * pow(1.12, 1);
    float balance_2 = initial_deposit * pow(1.12, 2);
    float balance_3 = initial_deposit * pow(1.12, 3);
    cout << "The balance of the account after 1 year is R$ " << balance_1 << endl;
    cout << "The balance of the account after 2 years is R$ " << balance_2 << endl;
    cout << "The balance of the account after 3 years is R$ " << balance_3 << endl;
    return 0;
    main();
}