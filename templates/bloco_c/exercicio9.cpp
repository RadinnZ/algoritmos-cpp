/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco C - Exercício 9. Soma dos elementos de um vetor
 * Nome: Radin
 *
 * a) Escreva uma função genérica que devolva a soma dos
 *    elementos de um vetor, recebendo o tamanho por parâmetro.
 * b) Teste com um vetor de int e com um vetor de double.
 * c) Qual deve ser o tipo de retorno? Justifique.
 * d) O que acontece se você chamar a função com um vetor de char?
 *    Ela compila? O resultado faz sentido? Explique.
 */

#include <iostream>
using namespace std;

// a) função genérica de soma de vetor
template <typename T>
T somaVetor(T vet[], int tamanho){
    T soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma = vet[i] + soma;
    }
    return soma;
}

int main() {
    // b) teste com vetor de int e vetor de double
    int vetI[5];
    for(int x = 0; x < 5; x++){
        cin >> vetI[x];
    }

    double vetD[5];
    for(int y = 0; y < 5; y++){
        cin >> vetD[y];
    }

    cout << "Soma vetor int: " << somaVetor(vetI, 5) << endl;
    cout << "Soma vetor double: " << somaVetor(vetD, 5) << endl;

    // d) teste também com vetor de char
    char vetC[5];
    for(int z = 0; z < 5; z++){
        cin >> vetC[z];
    }
    cout << "Soma vetor char: " << somaVetor(vetC, 5) << endl;

    return 0;
}

/* R (item c):
 *
 * O tipo de retorno deve ser T (o mesmo tipo genérico do vetor), e não
 * um tipo fixo como int. A função soma elementos do tipo T, então o
 * resultado da soma também deve ser do tipo T - é isso que faz o
 * template funcionar tanto para int quanto para double sem reescrever
 * a função. Se o retorno fosse fixo em int, por exemplo, a soma de um
 * vetor de double perderia a parte decimal.
 *
 * R (item d):
 *
 * Sim, compila e roda normalmente, porque char também é um tipo
 * numérico por baixo dos panos (guarda o código ASCII do caractere).
 * Só que o resultado não costuma fazer sentido para quem está lendo:
 *
 *  - o cout imprime a soma como CARACTERE, não como número, então o
 *    resultado aparece como um símbolo estranho (ou nada visível) em
 *    vez de um valor numérico legível;
 *  - char tem uma faixa muito pequena de valores (geralmente -128 a
 *    127), então somar poucos caracteres já pode facilmente estourar
 *    esse limite (overflow), dando um resultado incorreto/sem sentido.
 *
 * Ou seja: compila, mas não é um uso correto do template - char não é
 * um tipo pensado para representar quantidades somáveis.
 */