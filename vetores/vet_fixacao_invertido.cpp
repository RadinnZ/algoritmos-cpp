// EXERCÍCIO DE FIXAÇÃO (Vetores): Elabore um algoritmo que preencha um vetor
// de 15 posições e o imprima de forma invertida.

#include <iostream>
using namespace std;
#define TAMANHO 15

int main(){
    int vet[TAMANHO];
    int i;

    for (i = 0; i < TAMANHO; i++){
        cout << "Insira um valor: \n";
        cin >> vet[i];
    }

    for (i = TAMANHO - 1; i >= 0; i--){
        cout << vet[i] << "\n\n";
    }

    return 0;
}
