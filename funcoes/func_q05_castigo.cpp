/*
 * Exercício 5
 * Faça o programa principal que solicita ao usuário um número inteiro
 * N e após faça a chamada de um procedimento com o nome de "castigo",
 * passando N como parâmetro por valor. Considere que o usuário sempre
 * informará um valor positivo para N. O procedimento deve imprimir N
 * vezes a frase "Não vou colar na Prova".
 */

#include <iostream>
using namespace std;

void castigo(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nao vou colar na Prova" << endl;
    }
}

int main() {
    int n;

    cout << "Digite um numero: ";
    cin >> n;

    castigo(n);

    return 0;
}
