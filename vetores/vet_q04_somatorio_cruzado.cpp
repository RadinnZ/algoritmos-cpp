// QUESTÃO 4 (Vetores): Faça um algoritmo que leia dois vetores (A e B) de 6
// posições de números inteiros. O algoritmo deve, então, subtrair o primeiro
// elemento de A do último elemento de B, e acumular o valor, subtrair o segundo
// elemento de A do penúltimo elemento de B, acumulando o resultado, e assim por
// diante. Mostre o resultado do somatório acumulado.

#include <iostream>
using namespace std;
#define TAMANHO 6

int main(){
    int vet[TAMANHO];
    int i;

    for (i = 0; i < TAMANHO; i++){
        cout << "Insira um valor: \n";
        cin >> vet[i];
    }

    for (int I = 0, f = TAMANHO - 1; I < f; I++, f--){
        cout << vet[I] + vet[f] << "\n\n";
    }

    return 0;
}
