/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco B - Exercício 6. Compila ou não compila?
 * Nome: Radin
 *
 * template <typename T>
 * T soma(T a, T b) {
 *     return a + b;
 * }
 *
 * Para cada chamada, diga se compila e, quando compilar, qual é o
 * valor impresso. Responda ANTES de testar; depois confira no
 * compilador.
 *
 * cout << soma(2, 3) << endl;
 * cout << soma(2.5, 3) << endl;
 * cout << soma('A', 'B') << endl;
 * cout << soma<int>('A', 1) << endl;
 * cout << soma<double>(2, 3) << endl;
 *
 * a) Preencha a tabela compila / não compila / saída para as
 *    cinco chamadas.
 * b) Em quantas delas você errou a previsão? Explique o que
 *    faltava no seu raciocínio.
 */

#include <iostream>
using namespace std;

// TODO template soma
template <typename T>
T soma(T a, T b) {
return a + b;
}

/* R (item a) - preencha ANTES de compilar:
 *
 *  Chamada                  | Compila? | Saída
 *  --------------------------|----------|-------
 *  soma(2, 3)                |sim          |5
 *  soma(2.5, 3)               |não          |deduced conflicting types for parameter ‘T’ (‘double’ and ‘int’)
 *  soma('A', 'B')              |sim          |�
 *  soma<int>('A', 1)           |sim          |66
 *  soma<double>(2, 3)          |sim          |5
 */

int main() {
    // TODO descomente uma de cada vez, na ordem do enunciado,
    // e confira com a previsão escrita acima
    cout << soma(2, 3) << endl;
    //cout << soma(2.5, 3) << endl;
    cout << soma('A', 'B') << endl;
    cout << soma<int>('A', 1) << endl;
    cout << soma<double>(2, 3) << endl;

    return 0;
}

// R (item b) - em quantas você errou a previsão e o que faltava:
