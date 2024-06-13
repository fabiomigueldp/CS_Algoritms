// Exercício 10: Decodificação run-length
// A codificação run-length é uma técnica simples de compressão de dados que pode ser eficaz quando valores repetidos 
// ocorrem em posições adjacentes dentro de uma lista. Compressão é obtida substituindo grupos de valores repetidos por 
// uma cópia do valor, seguido pelo número de vezes que o valor deve ser repetido. 
// Por exemplo, a lista ["A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "B", "B", "B", "B", "A", "A", 
// "A", "A", "A", "A", "B"] seria comprimida como ["A", 12, "B", 4, "A", 6, "B", 1]. A descompressão é realizada 
// replicando cada valor da lista o número de vezes indicado. Escreva uma função recursiva que descompacte uma lista 
// codificada run-length. Sua função recursiva deve ter uma lista compactada em run-length como seu único parâmetro. 
// Ela deve retornar a lista descompactada como seu único resultado.

#include <iostream>
#include <vector>
using namespace std;

vector<string> DecodificaRunLength(vector<string> lista) {
    vector<string> descompactada;
    if (lista.size() == 0) {
        return descompactada;
    } else {
        string valor = lista[0];
        int vezes = stoi(lista[1]);
        for (int i = 0; i < vezes; i++) {
            descompactada.push_back(valor);
        }
        vector<string> resto(lista.begin() + 2, lista.end());
        vector<string> descompactado = DecodificaRunLength(resto);
        descompactada.insert(descompactada.end(), descompactado.begin(), descompactado.end());
        return descompactada;
    }
}

int main() {
    vector<string> compactada = {"A", "12", "B", "4", "A", "6", "B", "1"};
    vector<string> descompactada = DecodificaRunLength(compactada);
    cout << "Lista compactada: ";
    for (int i = 0; i < compactada.size(); i++) {
        cout << compactada[i] << " ";
    }
    cout << endl;
    cout << "Lista descompactada: ";
    for (int i = 0; i < descompactada.size(); i++) {
        cout << descompactada[i] << " ";
    }
    cout << endl;
    return 0;
}