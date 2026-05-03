// QUESTÃO 6 (Laço de Repetição): Faça um algoritmo que gere, automaticamente,
// a tabuada dos valores de 1 a 10. Por exemplo, 1 x 1 = 1, 1 x 2 = 2, ...
// 1 x 10 = 10, 2 x 1 = 2, ..., 10 x 10 = 100.

#include <iostream>
using namespace std;

int main(){
    for (int valor = 1; valor <= 10; valor++){
        for (int n = 1; n <= 10; n++){
            cout << valor << " x " << n << " = " << valor * n << " \n ";
        }
    }
    return 0;
}
