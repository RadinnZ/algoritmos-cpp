/*
 * Exercício 7
 * Faça um procedimento que recebe dois números inteiros positivos num1
 * e num2 por valor, além de dois parâmetros adicionais, quociente e
 * resto, por referência. O procedimento deve calcular o quociente e o
 * resto da divisão inteira de num1 por num2 e armazená-los nos
 * parâmetros por referência, de forma que o programa principal possa
 * utilizá-los após a chamada.
 */

#include <iostream>
using namespace std;

void QR(int num1, int num2, int &quociente, int &resto) {
    quociente = num1 / num2;
    resto = num1 % num2;
}

int main() {
    int num1, num2, q, r;

    cout << "Informe o numero 1: \n";
    cin >> num1;
    cout << "Informe o numero 2: \n";
    cin >> num2;

    QR(num1, num2, q, r);

    cout << "Quociente: " << q << "\n";
    cout << "Resto: " << r << "\n";

    return 0;
}
