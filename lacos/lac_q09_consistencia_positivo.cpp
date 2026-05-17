// QUESTÃO 9 (Laço de Repetição): Faça um programa que solicita ao usuário
// um número real positivo. Verifique se o número é realmente positivo, e em
// caso contrário solicite ao usuário digitar novamente (este processo pode se
// repetir inúmeras vezes e é chamado de consistência, pois garante que o número
// será válido após a entrada de dados).
// Saídas:
//  - Pedido ao usuário = "Digite um número real positivo"
//  - Caso número válido = "O número digitado é válido"
//  - Caso número inválido = "Número inválido, tente novamente"

#include <iostream>
using namespace std;

int main(){
    int i = 1;

    while(i > 0){
        int n;
        cout << "\nDigite um número real positivo: ";
        cin >> n;
        if (n > 0){
            cout << "\nO número digitado é válido! \n\n";
            i--;
        } else {
            cout << "\nNúmero inválido, tente novamente! \n";
        }
    }

    return 0;
}
