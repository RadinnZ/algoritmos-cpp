/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco D - Exercício 13. Soma que vira OU lógico
 * Nome: Radin
 *
 * Escreva uma função genérica imprime que receba dois valores e
 * imprima a sua soma na tela. Depois, faça com que, para o tipo
 * bool, a operação realizada seja o OU lógico em vez da soma
 * aritmética.
 *
 * Sintaxe nova (especialização de template):
 *
 * template <typename T>              // versão genérica
 * void imprime(T a, T b) { ... }
 *
 * template <>                        // versão especializada para bool
 * void imprime<bool>(bool a, bool b) { ... }
 *
 * a) Implemente as duas versões e teste com int, double e bool.
 * b) Chame imprime(true, false) e depois imprime(true, true).
 *    Explique por que, em pelo menos um dos casos, o resultado é
 *    diferente do que seria com a versão genérica.
 * c) Ao chamar a função com bool, quem decide qual das duas
 *    versões será usada: você ou o compilador? Em que momento
 *    essa decisão acontece?
 */

#include <iostream>
using namespace std;

// TODO a) versão genérica
// template <typename T>
// void imprime(T a, T b) {
//
// }

// TODO a) versão especializada para bool
// template <>
// void imprime<bool>(bool a, bool b) {
//
// }

int main() {
    // TODO a) teste com int, double e bool

    // TODO b) chame imprime(true, false) e imprime(true, true)

    return 0;
}

/* R (item b):
 *
 * R (item c):
 */
