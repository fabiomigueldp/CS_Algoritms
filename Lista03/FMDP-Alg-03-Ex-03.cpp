/*3. Vogal ou consoante. Escreva um programa Python que peça para o usuário uma letra do
alfabeto. Se o usuário entrar com as letras a, e, i, o ou u, o programa deve exibir uma
mensagem dizendo que a letra é uma vogal. Caso contrário, o programa deve exibir a
mensagem informando que a letra é uma consoante.*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isAlpha(char c) {
    return isalpha(static_cast<unsigned char>(c));
}

int main() {
    string entrada;
    char letra;
    bool entradaValida = false;

    while (!entradaValida) {
        cout << "Digite uma letra do alfabeto: ";
        cin >> entrada;

        if (entrada.length() == 1 && isAlpha(entrada[0])) {
            entradaValida = true;
            letra = tolower(entrada[0]);
        } else {
            cout << "Erro: Entrada inválida. Por favor, digite uma única letra do alfabeto." << endl;
        }
    }

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra " << letra << " é uma vogal." << endl;
    } else {
        cout << "A letra " << letra << " é uma consoante." << endl;
    }

    return 0;
}
