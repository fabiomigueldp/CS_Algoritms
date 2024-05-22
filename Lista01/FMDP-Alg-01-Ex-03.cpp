// print("Olá, para calcular a área de uma sala, siga as seguintes instruções:")
// comprimento = float(input("Insira o valor em metros do comprimento da sala: "))
// largura = float(input("Insira o valor em metros da largura da sala: "))
// area = comprimento * largura
// print(f"Sua sala possui uma área de {area} metros quadrados.")

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello, to calculate the area of the room, follow the instructions below:\n";
    float comprimento, largura;
    cout << "Insert the length of the room in meters: ";
    cin >> comprimento;
    cout << "Insert the width of the room in meters: ";
    cin >> largura;
    float area = comprimento * largura;
    cout << "Your room has an area of " << area << " square meters.\n";
    return 0;
    main();
}