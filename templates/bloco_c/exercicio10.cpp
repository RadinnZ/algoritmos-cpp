/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco C - Exercício 10. Contagem com limite
 * Nome: Radin
 *
 * Escreva uma função genérica que receba um vetor, o seu
 * tamanho e um valor-limite do mesmo tipo dos elementos, e
 * devolva quantos elementos são maiores que esse limite.
 *
 * a) Implemente e teste com int e com double.
 * b) O tipo de retorno é T? Justifique - a resposta separa quem
 *    entendeu o mecanismo de quem decorou a sintaxe.
 * c) Quantos parâmetros de tipo essa função precisa? Por quê?
 */

#include <iostream>
using namespace std;

// TODO a) função genérica de contagem com limite
// template <typename T>
// ??? contaMaiores(T v[], int tamanho, T limite) {
//
// }
template <typename T>
T contaLimite(T v[], int tamanho, T limite) {
    T MaiorLimite = 0;
    for(int i = 0; i < tamanho; i++){
        if(v[i] > limite){
            MaiorLimite++;
        }
    }
    return MaiorLimite;
}


int main() {
    // TODO a) teste com int e com double
    int vetI[5];
for(int x = 0; x < 5; x++){
    vetI[x] = x + 1;   
}

double vetD[5];
for(int y = 0; y < 5; y++){
    vetD[y] = (y + 1) * 1.5;   
}

    cout << "Maiores que o limite int: " << contaLimite(vetI, 5, 3) << endl;
    cout << "Maiores que o limite double: " << contaLimite(vetD, 5, 3.9) << endl;

    return 0;
}

/* R (item b):
 *
 * R (item c):
 */
