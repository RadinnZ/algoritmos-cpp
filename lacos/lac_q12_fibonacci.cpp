// QUESTÃO 12 (Laço de Repetição): Faça um algoritmo que faça a geração da
// série de Fibonacci, até o termo n informado pelo usuário.
// Por exemplo, se o usuário informar o valor 6 deverá ser exibido 8 na tela.
// Obs.: Série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, ...

#include <iostream>
using namespace std;

int main(){
    long long n, atual, anterior, temp;
    int i = 1;

    cout << "Informe o termo: ";
    cin >> n;

    anterior = 0;
    atual = 1;

    while (i <= n){
        temp = atual;
        atual = anterior + atual;
        anterior = temp;
        i++;
    }

    cout << "O termo " << n << " da série é: " << anterior << "\n\n";

    return 0;
}
