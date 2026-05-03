// QUESTÃO 6 (Sequenciais): A lanchonete Gostosura vende apenas um tipo de sanduíche,
// cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de
// hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a
// rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a
// quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos)
// de queijo, presunto e carne necessários para compra.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float fq, fp, rh, qs, qt, pt, ht;

    fq = 0.100;
    fp = 0.050;
    rh = 0.100;

    cout<< "Quantos sanduiches a fazer? ";
    cin>> qs;

    qt = fq * qs;
    pt = fp * qs;
    ht = rh * qs;

    cout<< "Serão necessários " << qt << " quilos de queijo " << pt << " quilos de presunto "
        << rh << " quilos de carne!";

    return 0;
}
