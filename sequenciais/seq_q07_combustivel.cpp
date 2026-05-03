// QUESTÃO 7 (Sequenciais): Faça um programa que calcula os gastos com combustível
// em uma viagem. O programa deve solicitar ao usuário a distância a ser percorrida
// em Km, o consumo do carro em Km/litro e o preço do litro do combustível. Como
// resposta o programa deverá informar qual o valor em R$ a ser gasto com
// combustível na viagem.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float dKm, cKm, plc, Ln, Vv;

    cout<< "Qual a distância de sua viagem?";
    cin>> dKm;

    cout<< "Qual a autonomia do seu carro? (Km)";
    cin>> cKm;

    cout<< "Qual o preço do litro do combustível?";
    cin>> plc;

    Ln = dKm / cKm;
    Vv = Ln * plc;

    cout<< "O valor total da sua viagem sera de " << Vv << " Reais!";

    return 0;
}
