// QUESTÃO (Laço de Repetição): Faça um programa que solicita ao usuário
// uma quantidade indeterminada de números inteiros. O programa deve calcular
// e escrever a média aritmética apenas dos números pares. A entrada de dados
// deve ser encerrada quando o número 0 (ZERO) for digitado.

#include <iostream>
using namespace std;

int main(){
    int i;
    int soma = 0;
    int qtd = 0;

    while (true){
        cout << "informe um número inteiro: ";
        cin >> i;

        if (i == 0) break;

        if (i % 2 == 0){
            soma += i;
            qtd++;
        }
    }

    if (qtd > 0)
        cout << "A média dos números pares é = " << (float)soma / qtd << "\n\n";
    else
        cout << "Nenhum número par digitado";

    return 0;
}
