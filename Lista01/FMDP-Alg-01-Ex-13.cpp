/* 13. Área de um triângulo. A área de um triângulo pode ser calculada pela fórmula abaixo, onde b
é o comprimento de sua base e h é o comprimento de sua altura. */

#include <iostream>
using namespace std;

int main() {
    double b, h;
    cout << "Greetings! Please enter the base and height of a triangle: ";
    cin >> b >> h;
    double area = (b * h) / 2;
    cout << "The area of a triangle with base " << b << " and height " << h << " is " << area << endl;
    return 0;}
    