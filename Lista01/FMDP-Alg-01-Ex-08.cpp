/*8. Bugigangas e quinquilharias. Uma loja online oferece aos seus clientes dois tipos de
produto: bugigangas e quinquilharias. Cada bugiganga pesa 75 gramas e cada quinquilharia
pesa 112 gramas. Faça um programa Python que leia a quantidade de bugigangas e a
quantidade de quinquilharias de um pedido do usuário. A seguir, seu programa deve calcular e
exibir o peso total do pedido. */

#include <iostream>
using namespace std;

int main() {
    int bugigangas, quinquilharias;
    cout << "Greetings! Please enter the number of bugigangas: ";
    cin >> bugigangas;
    cout << "Now, please enter the number of quinquilharias: ";
    cin >> quinquilharias;
    float total_weight = (bugigangas * 0.075) + (quinquilharias * 0.112);
    cout << "The total weight of the order is " << total_weight << " kilograms." << endl;
    return 0;
    main();
}