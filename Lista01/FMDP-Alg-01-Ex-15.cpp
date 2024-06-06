/*5. Área de um polígono regular. Um polígono é regular se seus lados são todos do mesmo
tamanho e os ângulos entre lados adjacentes são todos iguais. A área de um polígono regular
pode ser calculada pela fórmula abaixo onde l é o comprimento de um lado e n é o número de
lados:
Escreva um programa Python que obtenha do usuário os valores de l e n, e então calcule e
exiba a área do polígono regular correspondente.*/
#include <iostream>
#include <cmath>
#include <limits> 

using namespace std;

int main() {
    double l, n;

    while (true) {
        cout << "Greetings! Please enter the length of a side and the number of sides of a regular polygon: ";
        if (cin >> l >> n && l > 0 && n >= 3) {
            break;
        }
        cout << "Invalid input. Side length must be positive, and the number of sides must be at least 3.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double area = (n * pow(l, 2)) / (4 * tan(M_PI / n));

    cout.precision(10); 
    cout << "The area of a regular polygon with side length " << l << " and " << n 
         << " sides is: " << area << endl;

    return 0;
}
