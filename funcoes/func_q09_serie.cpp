/*
 * Exercício 9
 * Faça uma função que calcule o valor da série S descrita a seguir
 * para um valor n>0 a ser fornecido como parâmetro para a mesma.
 * Termo geral: (1 + i²) / i, para i variando de 1 até n.
 */

#include <iostream>
using namespace std;

float S(int a) {
    float soma = 0;

    for (int i = 1; i <= a; i++) {
        soma = soma + (1.0 + i * i) / i;
    }

    return soma;
}

int main() {
    int num;

    cout << "Informe o numero 1: \n";
    cin >> num;

    cout << "O resultado da serie e: " << S(num) << "\n\n";

    return 0;
}
