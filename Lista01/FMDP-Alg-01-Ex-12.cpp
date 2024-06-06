/*12. Área e volume. Escreva um programa Python que começa lendo o valor de um raio r,
fornecido pelo usuário. O programa deve continuar calculando e exibindo a área de um círculo
de raio r, e o volume de uma esfera de raio r. Utilize a constante pi do módulo math nos seus
cálculos.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Greetings! Please enter the radius of a circle and a sphere: ";
    cin >> r;
    double area = M_PI * pow(r, 2);
    double volume = (4.0/3.0) * M_PI * pow(r, 3);
    cout << "The area of a circle with radius " << r << " is " << area << endl;
    cout << "The volume of a sphere with radius " << r << " is " << volume << endl;
    return 0;
}