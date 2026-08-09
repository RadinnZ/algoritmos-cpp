/*
 * Exercício 8
 * Elabore um programa que calcule o M.D.C. (máximo divisor comum)
 * entre dois valores fornecidos pelo usuário. O cálculo deve ser feito
 * por meio de uma função. Por exemplo: M.D.C. de 12 e 20 é 4.
 */

#include <iostream>
using namespace std;

int mdc(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    return a;
}

int main() {
    int num1, num2;

    cout << "Informe o numero 1: \n";
    cin >> num1;
    cout << "Informe o numero 2: \n";
    cin >> num2;

    cout << "O M.D.C e: " << mdc(num1, num2) << "\n\n";

    return 0;
}
