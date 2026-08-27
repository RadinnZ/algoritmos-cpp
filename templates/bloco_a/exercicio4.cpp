/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco A - Exercício 4. Nem tudo é genérico
 * Nome: Radin
 *
 * Escreva uma função genérica que receba três valores do mesmo
 * tipo - um valor e os limites mínimo e máximo de um intervalo -
 * e devolva se o valor está dentro do intervalo.
 *
 * a) Implemente a função e teste com int, double e char.
 * b) Qual é o tipo de retorno da função? Ele é T? Justifique a
 *    escolha.
 * c) Quais operações o tipo T precisa suportar para que essa
 *    função funcione?
 */

#include <iostream>
using namespace std;

// TODO a) escreva a função genérica de intervalo
// template <typename T>
// ??? dentroDoIntervalo(T valor, T minimo, T maximo) {
//
// }
template <typename T>
bool dentroDoIntervalo(T valor, T minimo, T maximo) {
    if(valor >= minimo && valor <= maximo){
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << boolalpha;
    // TODO a) teste com int, double e char
cout << dentroDoIntervalo(3, 2, 8) << endl; // 3 é o valor, 2 é o mínimo e 8 o máximo
cout << dentroDoIntervalo(6.6, 1.1, 67.67) << endl;
cout << dentroDoIntervalo('b', 'a', 'c') << endl;
   // R (item b):
    // O tipo de retorno e bool, nao T. Isso porque a funcao responde
    // uma pergunta de sim/nao ("o valor esta dentro do intervalo?"),
    // e essa resposta e sempre um valor logico, independente de T
    // ser int, double ou char. O retorno so seria T se a funcao
    // devolvesse um valor do MESMO tipo dos dados de entrada (como
    // no exercicio do dobro), o que nao e o caso aqui.

    // R (item c):
    // O tipo T precisa suportar os operadores relacionais >= e <=
    // (comparacao de ordem), ja que a funcao compara valor com
    // minimo e maximo. Qualquer tipo que tenha esses operadores
    // definidos (nativos como int/double/char, ou uma classe que
    // sobrecarregue operator>= e operator<=) funciona com esse
    // template.

    return 0;
}
