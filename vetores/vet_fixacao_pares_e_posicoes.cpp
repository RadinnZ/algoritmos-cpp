// EXERCÍCIO DE FIXAÇÃO (Vetores): Faça um programa que preencha um vetor de
// 20 posições e exiba todos os valores pares e suas respectivas posições.

#include <iostream>
using namespace std;
#define TAMANHO 20

int main(){
    int vet[TAMANHO];
    int i;

    for (i = 0; i < TAMANHO; i++){
        cout << "Insira um valor: \n";
        cin >> vet[i];
    }

    for (i = 0; i < TAMANHO; i++){
        if (vet[i] % 2 == 0){
            cout << "Posição " << i+1 << ": " << vet[i] << "\n\n";
        }
    }

    return 0;
}
