// QUESTÃO 1 (Vetores): Faça um algoritmo que leia um vetor de 30 posições
// e informe quantos elementos são múltiplos de 2 e quantos são múltiplos de 3.

#include <iostream>
using namespace std;
#define NV 5

int main(){
    int vet[NV];
    int i;
    int mult2 = 0;
    int mult3 = 0;

    cout << "Insira " << NV << " Valores: \n";
    for (i = 0; i < NV; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

    for (i = 0; i < NV; i++) {
        if (vet[i] % 2 == 0) {
            mult2++;
        }
        if (vet[i] % 3 == 0) {
            mult3++;
        }
    }

    cout << "\nMultiplos de 2: " << mult2 << " números \n";
    cout << "Multiplos de 3: " << mult3 << " números \n";

    return 0;
}
