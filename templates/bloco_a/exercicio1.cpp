/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco A - Exercício 1. Troca genérica
 * Nome: Radin
 *
 * A função abaixo troca o conteúdo de duas variáveis inteiras:
 *
 * void troca(int &a, int &b) {
 *     int tmp = a;
 *     a = b;
 *     b = tmp;
 * }
 *
 * Para usá-la com outros tipos seria necessário reescrevê-la
 * inteira a cada tipo novo.
 *
 * a) Reimplemente troca usando template.
 * b) Teste com duas variáveis int, duas double e duas char.
 * c) Teste com duas variáveis string. Você precisou alterar
 *    alguma coisa dentro da função? Por quê?
 */
// TODO a) reimplemente troca usando template
// template <typename T>
// void troca(T &a, T &b) {
//
// }

// TODO b) teste com int
    // TODO b) teste com double
    // TODO b) teste com char
    // TODO c) teste com string

    // R (item c):


#include <iostream>
#include <string>
using namespace std;

template <typename T>
void troca(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main() {
    
int i1 = 11, i2 = 9;
troca(i1, i2);
cout << "int: " << i1 << " " << i2 << endl;

double d1 = 1.5, d2 = 3.9;
troca(d1, d2);
cout << "double: " << d1 << " " << d2 << endl;

char c1 = 'x', c2 = 'y';
troca(c1, c2);
cout << "char: " << c1 << " " << c2 << endl;

string s1 = "primeira", s2 = "segunda";
troca(s1, s2);
 cout << "string: " << s1 << " " << s2 << endl;

    return 0;
}
