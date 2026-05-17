// QUESTÃO 3 (Vetores): Escreva um algoritmo que leia dois vetores de 10 posições
// e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em
// um terceiro vetor. Exiba o vetor resultante.

#include <iostream>
using namespace std;
#define pos 4

int main(){
    int vet1[10], vet2[10], vetM[10];
    int i;

    cout << "Insira " << pos << " valores para a lista 1: \n";
    for (i = 0; i < pos; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> vet1[i];
    }

    cout << "Insira " << pos << " valores para a lista 2: \n";
    for (i = 0; i < pos; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> vet2[i];
    }

    for(i = 0; i < pos; i++){
        vetM[i] = vet1[i] * vet2[i];
    }

    cout << "O resultado da multiplicação dos elementos de mesmo índice das listas 1 e 2 é: \n";
    for(i = 0; i < pos; i++){
        cout << i + 1 << " = " << vetM[i] << "\n";
    }

    return 0;
}
