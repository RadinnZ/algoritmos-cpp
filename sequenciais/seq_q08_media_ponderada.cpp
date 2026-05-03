// QUESTÃO 8 (Sequenciais): O sistema de avaliação de determinada disciplina é composto
// por três provas. A primeira prova tem peso 2, a segunda tem peso 4 e a terceira
// prova tem peso 6. Faça um programa que solicita as notas para o aluno, calcula
// e exibe a média final deste aluno.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float n1, n2, n3, media;

    cout<< "insira suas 3 notas: ";
    cin>> n1>>n2>>n3;
    media = (n1 * 2 + n2 * 4 + n3 * 6) / 12;

    cout<< "Sua média final é de: " << media;

    return 0;
}
