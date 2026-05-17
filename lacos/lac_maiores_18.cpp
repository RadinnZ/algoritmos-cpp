// QUESTÃO (Laço de Repetição): Faça um programa que solicita a idade de
// 10 pessoas e exiba a quantidade de pessoas que possui idade maior ou
// igual a 18 anos.

#include <iostream>
using namespace std;

int main(){
    int idade, i = 0;

    for(int q = 1; q <= 10; q++){
        cout << "Informe a idade de 10 pessoas " << "(" << q << ")" << " :";
        cin >> idade;
        if (idade >= 18){
            i++;
        }
    }

    cout << i << " pessoas possuem idade igual ou superior a 18 anos \n\n";

    return 0;
}
