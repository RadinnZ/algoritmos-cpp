// QUESTÃO 1 (Sequenciais): Faça um programa que solicita que o usuário
// digite o seu nome e exiba a mensagem "Olá" seguido do nome digitado pelo usuário.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome;
    cout<< "Qual seu nome?";
    cin>> nome;

    cout<< "Olá, "<< nome << "!";

    return 0;
}
