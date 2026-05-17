// QUESTÃO 1 (Laço de Repetição): Faça um programa que imprima na tela
// 30 vezes a mensagem "Olá, tudo bem?", numerando cada linha.

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 30; i++){
        cout << i << " : " << "Olá, tudo bem? \n\n";
    }

    return 0;
}
