/*
 * Exercício 3
 * Faça um procedimento chamado trocar que recebe dois números inteiros
 * por parâmetro, por referência, e troca os valores entre eles. No
 * programa principal, declare duas variáveis inteiras, atribua valores
 * a elas, chame o procedimento passando as duas variáveis e imprima os
 * valores após a chamada, verificando que a troca realmente ocorreu.
 */

#include <iostream>
using namespace std;

void trocar(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

int main() {
    int x = 5, y = 10;

    cout << "Antes: x = " << x << ", y = " << y << endl;

    trocar(x, y);

    cout << "Depois: x = " << x << ", y = " << y << endl;

    return 0;
}
