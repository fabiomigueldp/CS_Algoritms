/* 5. Retorno de recicláveis. Alguns estabelecimentos retornam créditos em troca de reciclagem
de recipientes. Em um estabelecimento em particular, vasilhames de um litro ou menos geram
crédito de 10 centavos e vasilhames de mais de um litro geram créditos de 25 centavos.
Escreva um programa que leia do teclado a quantidade destes dois tipos de vasilhames a
serem reciclados. A seguir o programa deve calcular e exibir o valor total dos créditos
referentes ao retorno dos vasilhames. Pesquise sobre como formatar a saída para que a
resposta seja exibida com sinal de reais R$ e exatamente duas casas decimais.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int small_vessels, large_vessels;
    cout << "Greetings! Dweller, please enter the number of\nvessels with a volume of 1 liter or less: ";
    cin >> small_vessels;
    cout << "Now, please enter the number of vessels with a volume greater than 1 liter: ";
    cin >> large_vessels;
    float total = (small_vessels * 0.10) + (large_vessels * 0.25);
    cout << fixed << setprecision(2);
    cout << "The total amount of credits for the return of the vessels is R$ " << total << endl;
    return 0;
    main();
}

