/*6. Conta do almoço. Imagine que você foi almoçar num restaurante, e pediu uma refeição com
um suco, um prato principal e uma sobremesa. Cada um desses itens tem um preço unitário.
Ao final, o valor da conta deve ser a soma do valor dos itens consumidos, acrescida de 10%
de taxa de serviço. Faça um programa Python para receber estes dados do usuário e calcular
o valor total da conta deste tipo de refeição. Exiba a resposta com os mesmos critérios de
formatação da questão anterior (R$ e 2 casas decimais).*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float juice, main_curse, dessert;
    cout << fixed << setprecision(2);
    cout << "Greetings! Dweller, please enter the price of the juice: ";
    cin >> juice;
    cout << "Now, please enter the price of the main course: ";
    cin >> main_curse;
    cout << "Finally, please enter the price of the dessert: ";
    cin >> dessert;
    float total = (juice + main_curse + dessert) * 1.10;
    cout << "The total amount of the bill is R$ " << total << endl;
    return 0;
    main();
}