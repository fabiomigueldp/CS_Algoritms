// Exercício 11: Codificação run-length
// Escreva uma função recursiva que implemente a técnica de compressão run-length descrita no exercício anterior. 
// Sua função deve receber uma lista ou uma string como seu único parâmetro. Ela deve retornar a lista compactada 
// em run-length como seu único resultado.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> CodificaRunLength(vector<string> lista, int pos = 0, string ultValor = "", int contador = 0) {
    if (pos == lista.size()) {
        if (contador > 0) {
            return {ultValor, to_string(contador)};
        } else {
            return {};
        }
    } else {
        if (lista[pos] == ultValor) {
            return CodificaRunLength(lista, pos + 1, ultValor, contador + 1);
        } else {
            vector<string> resultadoAtual;
            if (contador > 0) {
                resultadoAtual.push_back(ultValor);
                resultadoAtual.push_back(to_string(contador));
            }
            vector<string> resultadoRecursivo = CodificaRunLength(lista, pos + 1, lista[pos], 1);
            resultadoAtual.insert(resultadoAtual.end(), resultadoRecursivo.begin(), resultadoRecursivo.end());
            return resultadoAtual;
        }
    }
}

int main() {
    vector<string> original = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "B", "B", "B", "B", "A", "A", "A", "A", "A", "A", "B"};
    vector<string> compactada = CodificaRunLength(original);
    cout << "Lista original: ";
    for (const auto& elem : original) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "Lista compactada: ";
    for (const auto& elem : compactada) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
