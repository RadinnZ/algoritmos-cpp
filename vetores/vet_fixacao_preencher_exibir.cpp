// EXERCÍCIO DE FIXAÇÃO (Vetores): Faça um programa que preencha um vetor
// de 10 posições e exiba o mesmo na tela.

#include <iostream>
using namespace std;

int main(){
    int vet[10];
    int i;

    for (i = 0; i < 10; i++){
        cout << "Insira um valor: \n";
        cin >> vet[i];
    }

    for (i = 0; i < 10; i++){
        cout << vet[i] << "\t";
    }

    return 0;
}
