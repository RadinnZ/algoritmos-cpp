// QUESTÃO (Laço de Repetição): Faça um programa que solicita ao usuário
// dois valores inteiros e positivos que serão a base e o expoente.
// O programa deve usar laço de repetição para calcular e escrever o
// resultado da base elevado ao expoente (potência).

#include <iostream>
using namespace std;

int main()
{
    int base;
    int multi;
    int exp;
    int i = 1;

    cout << "Digíte a base e o expoente para calcular a potência \n";
    cout << "Base = ";
    cin >> base;
    cout << "Expoente = ";
    cin >> exp;

    multi = 1;

    while (i <= exp){
        multi = base * multi;
        i++;
    }

    cout << "O resultado dessa potência é = " << multi << "\n\n";

    return 0;
}
