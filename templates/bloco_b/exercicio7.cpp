/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco B - Exercício 7. Um erro que só aparece na chamada
 * Nome: Radin
 *
 * a) Escreva um template de função que compile perfeitamente
 *    quando o programa não o utiliza.
 * b) Faça uma chamada desse template que produza erro de
 *    compilação por causa do tipo usado - e não por erro de
 *    dedução.
 * c) Explique em até três linhas por que o mesmo código estava
 *    correto antes e passou a estar errado depois, sem que uma
 *    única letra da função tenha mudado.
 */

#include <iostream>
using namespace std;

// a) Template que funciona para tipos que aceitam o operador %.
template <typename T>
T resto(T x) {
    return x % 2;
}

int main() {

    // b) A dedução do tipo funciona, mas a chamada gera erro
    // porque o operador % não pode ser usado com double.

    // cout << resto(7.5) << endl;

    return 0;
}

// c) O template só é verificado quando é utilizado.
// Antes da chamada, não havia erro porque a função não tinha
// sido instanciada. Ao chamar com double, o operador % causa erro.