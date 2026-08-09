/*
 * Exercício 4
 * Faça uma função que recebe, por parâmetro, a altura (em metros) e o
 * sexo de uma pessoa e retorna o seu peso ideal. Para os homens,
 * calcular o peso ideal usando a fórmula PI = 72,7 * altura - 58, e
 * para as mulheres PI = 62,1 * altura - 44,7.
 */

#include <iostream>
using namespace std;

float pesoIdeal(float altura, char sexo) {
    float pi;

    if (sexo == 'M' || sexo == 'm') {
        pi = 72.7 * altura - 58;
    } else {
        pi = 62.1 * altura - 44.7;
    }

    return pi;
}

int main() {
    float altura;
    char sexo;

    cout << "Digite a altura (em metros): ";
    cin >> altura;
    cout << "Digite o sexo (M/F): ";
    cin >> sexo;

    float resultado = pesoIdeal(altura, sexo);
    cout << "Peso ideal: " << resultado << " kg" << endl;

    return 0;
}
