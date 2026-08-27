/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco D - Exercício 11. Menor e maior de uma vez só
 * Nome: Radin
 *
 * Escreva um procedimento genérico que percorra um vetor uma
 * única vez e devolva, por referência, o menor e o maior
 * elemento.
 *
 * a) Implemente e teste com int, double e char.
 * b) Por que esse procedimento é void, se ele produz dois
 *    resultados?
 * c) O que aconteceria se o vetor tivesse tamanho zero? Proponha
 *    um tratamento.
 */

#include <iostream>
using namespace std;

// a) procedimento genérico menor/maior por referência
template <typename T>
bool menorMaior(T v[], int tamanho, T &menor, T &maior){
    // c) tratamento para vetor vazio
    if (tamanho <= 0) {
        return false; // não há como calcular menor/maior
    }

    menor = v[0];
    maior = v[0];

    for (int i = 1; i < tamanho; i++){
        if (v[i] < menor) menor = v[i];
        if (v[i] > maior) maior = v[i];
    }

    return true;
}

int main() {
    // a) teste com int, double e char
    int iv[] = {5, 3, 8, 1, 9, 2};
    double id[] = {1.1, 4.4, 2.2, 5.5, 3.3};
    char ic[] = {'d', 'a', 'z', 'm', 'k'};

    int menorInt, maiorInt;
    double menorDouble, maiorDouble;
    char menorChar, maiorChar;

    if (menorMaior(iv, 6, menorInt, maiorInt))
        cout << "int    -> menor: " << menorInt << " | maior: " << maiorInt << endl;

    if (menorMaior(id, 5, menorDouble, maiorDouble))
        cout << "double -> menor: " << menorDouble << " | maior: " << maiorDouble << endl;

    if (menorMaior(ic, 5, menorChar, maiorChar))
        cout << "char   -> menor: " << menorChar << " | maior: " << maiorChar << endl;

    // c) teste com vetor de tamanho zero
    int vazio[] = {};
    int m1, m2;
    if (!menorMaior(vazio, 0, m1, m2))
        cout << "Vetor vazio: nao foi possivel calcular menor/maior." << endl;

    return 0;
}

/* R (item b):
 * O procedimento e void porque, com um único "return", so seria
 * possivel devolver um valor por vez. Como o exercicio pede DOIS
 * resultados (menor e maior), a solucao e usar parametros passados
 * por referencia (T &menor, T &maior). Assim, em vez de "devolver"
 * os valores, a funcao altera diretamente as variaveis que foram
 * passadas por quem a chamou. O "void" so indica que nada volta
 * pelo mecanismo de return; os resultados voltam pelas referencias.
 *
 * R (item c):
 * Se o vetor tiver tamanho zero, nao existe primeiro elemento para
 * usar como valor inicial de "menor" e "maior" (v[0] seria acesso
 * invalido, comportamento indefinido). O tratamento adotado aqui foi
 * mudar o retorno da funcao de void para bool: a funcao retorna
 * false quando tamanho <= 0, sinalizando ao chamador que o calculo
 * nao foi realizado, e so acessa v[0] quando ha pelo menos um
 * elemento. Assim quem chama a funcao pode checar o retorno antes
 * de usar "menor" e "maior".
 */