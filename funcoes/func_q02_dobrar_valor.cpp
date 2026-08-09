/*
 * Exercício 2
 * Faça um procedimento chamado dobrarValor que recebe um número
 * inteiro por parâmetro, por valor, e multiplica esse valor por dois
 * dentro do procedimento, sem retorná-lo. No programa principal,
 * declare uma variável inteira, atribua um valor a ela, chame o
 * procedimento passando essa variável e, em seguida, imprima novamente
 * o valor da variável. Observe que o valor original não se altera,
 * pois a passagem foi feita por valor.
 */

#include <iostream>
using namespace std;

void dobrarValor(int valor) {
    valor = valor * 2;
    cout << "Valor dentro do procedimento: " << valor << endl;
}

int main() {
    int numero = 10;
    cout << "Valor antes: " << numero << endl;

    dobrarValor(numero);

    cout << "Valor depois: " << numero << endl;

    return 0;
}
