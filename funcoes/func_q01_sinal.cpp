/*
 * Exercício 1
 * Faça uma função que recebe um valor inteiro e verifica se o valor é
 * positivo ou negativo. A função deve retornar 1 se o valor for maior
 * ou igual a zero (positivo) e 0 se for negativo (menor que zero).
 */

#include <iostream>
using namespace std;

int verificaSinal(int valor) {
    if (valor >= 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    int resultado = verificaSinal(numero);
    cout << "Resultado: " << resultado << "\n";

    return 0;
}
