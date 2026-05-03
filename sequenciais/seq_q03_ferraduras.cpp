// QUESTÃO 3 (Sequenciais): Faça um algoritmo para calcular quantas ferraduras são
// necessárias para equipar todos os cavalos comprados para um haras.
// (cada cavalo possui 4 patas, portanto precisa de 4 ferraduras)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cavalo, ferraduras;

    cout<< "quantos cavalos você tem em seu haras? ";
    cin>> cavalo;

    ferraduras = cavalo * 4;

    cout<< "São necessárias " << ferraduras << " ferraduras no total!";

    return 0;
}
