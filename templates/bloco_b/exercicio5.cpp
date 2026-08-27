/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco B - Exercício 5. O terceiro cout não compila
 * Nome: Radin
 *
 * a) Compile o código acima. Copie a mensagem de erro e explique,
 *    com suas palavras, o que o compilador não conseguiu fazer.
 *
 * b) Corrija o erro alterando apenas a terceira chamada dentro do
 *    main, sem tocar na função. Apresente duas soluções diferentes.
 *
 * c) Agora faça o contrário: sem alterar o main, modifique a
 *    função para que ela aceite argumentos de tipos diferentes.
 *    Compile e rode.
 *
 * d) No item (c), o programa imprime 7 ou 7.0? Rode e explique
 *    o resultado a partir do tipo de retorno que você escolheu.
 *
 * e) Reescreva o programa inteiro sem usar templates, de modo que
 *    as três chamadas do main original funcionem. Quantas funções
 *    foram necessárias?
 */

#include <iostream>
using namespace std;


/* 
   ITEM A
   

   Código original:

template <typename T>
T maiorValor(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << maiorValor(3, 7) << endl;
    cout << maiorValor(3.0, 7.0) << endl;
    cout << maiorValor(3, 7.0) << endl;
    return 0;
}

   A terceira chamada não compila porque 3 é int e 7.0 é double.
   O template possui apenas um tipo T, então os dois argumentos
   precisam ser do mesmo tipo.

   A mensagem de erro pode variar dependendo do compilador.
*/


/* 
   ITEM B
   
   Solução 1:
   Transformar o primeiro argumento em double.

   cout << maiorValor(3.0, 7.0) << endl;

   Solução 2:
   Informar explicitamente que T deve ser double.

   cout << maiorValor<double>(3, 7.0) << endl;
*/


/* 
   ITEM C
   
   Agora usamos dois tipos diferentes: T1 e T2.
   O auto permite que o compilador determine o tipo de retorno.
*/

template <typename T1, typename T2>
auto maiorValor2(T1 x, T2 y) {
    return (x > y) ? x : y;
}


/* 
   ITEM E

   Sem templates, seriam necessárias 3 funções para que as três
   chamadas originais funcionassem:

   1. int + int
   2. double + double
   3. int + double

   Elas estão comentadas porque não podem coexistir neste mesmo
   programa com o main do item C usando o mesmo nome sem alterar
   a estrutura do exercício.
*/


/*
int maiorValor(int x, int y) {
    return (x > y) ? x : y;
}

double maiorValor(double x, double y) {
    return (x > y) ? x : y;
}

double maiorValor(int x, double y) {
    return (x > y) ? x : y;
}
*/


int main() {

    /*
       ITEM B

    // Primeira chamada original
    cout << maiorValor2(3, 7) << endl;

    // Segunda chamada original
    cout << maiorValor2(3.0, 7.0) << endl;

    // Terceira chamada original
    cout << maiorValor2(3, 7.0) << endl;


    /* 
       ITEM B - DUAS SOLUÇÕES

       Estas duas chamadas funcionam com a função original
       maiorValor<T>, mas estão comentadas para não duplicar
       a saída do programa.

    cout << maiorValor(3.0, 7.0) << endl;

    cout << maiorValor<double>(3, 7.0) << endl;
    */


    /* 
       ITEM D

       A terceira chamada:

       maiorValor2(3, 7.0)

       retorna um double, pois o resultado da expressão
       condicional possui tipo double.

       Mesmo sendo double, o cout mostra 7 em vez de 7.0,
       porque cout não exibe casas decimais por padrão.
    */


    /* 
       ITEM E

       Sem templates, foram necessárias 3 funções:

       - maiorValor(int, int)
       - maiorValor(double, double)
       - maiorValor(int, double)

       Essas funções estão comentadas acima.
    */


    return 0;
}