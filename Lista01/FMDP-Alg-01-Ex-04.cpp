// Área de um terreno. Crie um programa Python que leia as dimensões de um terreno em
// metros (largura e profundidade), e exiba o resultado em hectares.
#include <iostream>
using namespace std;

int main() {
    float largura, profundidade, area;
    cout << "Digite a largura do terreno em metros: ";
    cin >> largura;
    cout << "Digite a profundidade do terreno em metros: ";
    cin >> profundidade;
    area = (largura * profundidade)/10000;
    cout << "A área do terreno é de "<< area << " hectares.\n << endl;";
    return 0;
    main();
}
