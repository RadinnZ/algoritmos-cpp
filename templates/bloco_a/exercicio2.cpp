/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco A - Exercício 2. Impressão genérica de vetor
 * Nome: Radin
 *
 * a) Escreva um procedimento genérico que imprima o conteúdo de
 *    um vetor de qualquer tipo. Passe o tamanho do vetor por
 *    parâmetro.
 * b) Teste com um vetor de int e com um vetor de double, sem
 *    duplicar nenhuma linha de código.
 * c) Responda: por que o tamanho do vetor é um parâmetro comum,
 *    e não um parâmetro de tipo?
 */
// TODO a) escreva o procedimento genérico de impressão
// template <typename T>
// void imprimeVetor(T v[], int tamanho) {
//
// }
// TODO b) declare um vetor de int e um vetor de double e
    // chame imprimeVetor para cada um

    // R (item c):
    
#include <iostream>
using namespace std;

template <typename T>
void imprimeVetor(T v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    int vi[5] = {1, 2, 3, 4, 5};
    double vd[4] = {1.1, 2.2, 3.3, 4.4};

    imprimeVetor(vi, 5);   
    imprimeVetor(vd, 4);  
    return 0;
}