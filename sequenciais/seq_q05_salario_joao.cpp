// QUESTÃO 5 (Sequenciais): João recebeu seu salário de R$ 1200,00 e precisa pagar
// duas contas (C1=R$ 200,00 e C2=R$ 120,00) que estão atrasadas. Como as contas
// estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um
// algoritmo que calcule e mostre quanto restará do salário do João.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float sal, c1, c2, r1, r2, resultado;

    sal = 1200.00;
    c1 = 200.00;
    c2 = 120.00;

    r1 = c1 + (c1 * 0.02);
    r2 = c2 + (c2 * 0.02);

    resultado = sal - r1 - r2;

    cout<< "Ira sobrar " << resultado << " do seu salário";

    return 0;
}
