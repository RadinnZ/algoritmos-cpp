// QUESTÃO 11 (Laço de Repetição): Faça um algoritmo que solicite um valor
// inteiro e informe, ao final, o fatorial deste valor.
// Obs.: por exemplo, o fatorial de 5 é 120, pois 5 x 4 x 3 x 2 x 1 = 120.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int fat = 1;

    cout << "Informe um valor inteiro: ";
    cin >> n;

    for (int i = n; i >= 1; i--){
        fat = fat * i;
    }

    cout << "O fatorial de " << n << " é " << fat << "\n\n";

    return 0;
}
