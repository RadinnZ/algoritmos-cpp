/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco D - Exercício 12. Dois parâmetros de tipo
 * Nome: Radin
 *
 * a) Escreva um procedimento genérico que receba dois valores,
 *    possivelmente de tipos diferentes, e os imprima no formato
 *    (primeiro, segundo).
 * b) Teste com (int, char), (double, string) e (char, double).
 * c) Se em vez de imprimir você quisesse devolver a soma dos
 *    dois valores, qual seria o tipo de retorno? Explique por
 *    que essa pergunta é difícil de responder com o que sabemos
 *    até aqui.
 */

#include <iostream>
#include <string>
using namespace std;

template <typename T, typename T2>

void imprimir(T x, T2 y){
   cout << "(" << x << ", " << y << ")" << endl;
}

int main() {
    // TODO b) teste (int, char), (double, string), (char, double)
    int inteiro = 1;
    char letra = 'i';
    double numero = 6.7;
    string palavra = "amor";

    imprimir(inteiro, letra);
    imprimir(numero, palavra);
    imprimir(letra, numero);

    return 0;
}

// R (item c):
