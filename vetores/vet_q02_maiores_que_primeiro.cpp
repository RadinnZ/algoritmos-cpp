// QUESTÃO 2 (Vetores): Construa um algoritmo que solicite 5 valores ao usuário,
// armazene estes em um vetor de 5 posições inteiras. Após, descubra quantos
// elementos são maiores do que o elemento da primeira posição.

#include <iostream>
using namespace std;

int main(){
    int vet[5];
    int maior = 0;
    int i;

    cout << "Insira 5 valores: \n";
    for (i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }

    for(i = 1; i < 5; i++){
        if(vet[i] > vet[0]){
            maior++;
        }
    }

    cout << "\n\n" << maior << " números são maiores do que o elemento da primeira posição. \n";

    return 0;
}
