/*Área de um triângulo (novamente). No exercício anterior você criou um programa para
calcular a área de um triângulo dados sua base e sua altura. Entretanto, também é possível
calcular a área de um triângulo se forem conhecidos os comprimentos de seus 3 lados. Seja
, , e os comprimentos dos três lados.
Seja
Então, a área do triângulo pode ser calculada com a seguinte fórmula:
Escreva um programa Python que leia os comprimentos de 3 lados de um triângulo, calcule e
exiba sua área. */

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    double a, b, c;

    cout << "Greetings! Please enter the lengths of the three sides of a triangle: ";

    while (true) {
        cin >> a >> b >> c;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter numeric values for the lengths of the three sides: ";
        } else if (!isValidTriangle(a, b, c)) {
            cout << "The lengths entered do not form a valid triangle. Please enter valid side lengths: ";
        } else {
            break; 
        }
    }

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of a triangle with sides of length " << a << ", " << b << ", and " << c << " is " << area << endl;

    return 0;
}
