// QUESTÃO 3 (Laço de Repetição): Chico tem 1,50 metros e cresce 2 centímetros por ano,
// enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo
// que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float Chico=1.5, Ze=1.1;
    int ano=0;
    while (Ze<Chico){
        Ze+=0.03;
        Chico+=0.02;
        ano++;
    }
    cout << ano;
    return 0;
}
