// QUESTÃO (Laço de Repetição): Faça um algoritmo que leia 10 valores
// inteiros e mostre a sua soma.

#include <iostream>
using namespace std;

int main()
{
    int soma = 0;
    int n;
    cout << "Escreva 10 números inteiros \n\n";

    for (int i = 1; i <= 10; i++){
        cout << "Número " << i << " = ";
        cin >> n;
        soma = n + soma;
    }

    cout << "Soma: " << soma << endl;

    return 0;
}
