/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco A - Exercício 3. De três funções para uma
 * Nome: Radin
 *
 * Um colega escreveu três funções para calcular o dobro de um valor:
 *
 * int dobro(int x) { return 2 * x; }
 * float dobro(float x) { return 2 * x; }
 * double dobro(double x) { return 2 * x; }
 *
 * a) Substitua as três por um único template.
 * b) No programa de teste, chame a função apenas com valores int.
 *    Quantas funções concretas o compilador gerou? Justifique.
 * c) Acrescente uma chamada com double. O que mudou na resposta
 *    do item (b)?
 */

#include <iostream>
using namespace std;

// TODO a) escreva o template único de dobro
// template <typename T>
// T dobro(T x) {
//
// }

template <typename T>
T dobro(T x){
    return 2 * x;
}

int main() {
    // TODO b) chame dobro apenas com valores int
    cout << dobro(4) << endl;
    cout << dobro(21) << endl;

    // R (item b):

    // TODO c) acrescente uma chamada com double
    cout << dobro(2.4) << endl;
    cout << dobro(4.7) << endl;
    // R (item c):

    return 0;
}
