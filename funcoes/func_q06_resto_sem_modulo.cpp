/*
 * Exercício 6
 * Faça um programa que possua uma função que receba por parâmetro dois
 * números inteiros positivos num1 e num2 e retorne o resto da divisão
 * inteira de num1 por num2, sem utilizar o operador %. Considere que
 * num2 será sempre diferente de zero.
 */

#include <iostream>
using namespace std;

int resto(int num1, int num2) {
    int quociente = num1 / num2;

    return num1 - (quociente * num2);
}

int main() {
    int num1, num2;

    cout << "Informe o numero 1: \n";
    cin >> num1;
    cout << "Informe o numero 2: \n";
    cin >> num2;

    cout << "O resto e " << resto(num1, num2) << "\n\n";

    return 0;
}
