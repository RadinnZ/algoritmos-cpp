/*
 * Programação de Sistemas - Prof. Thiago Felski Pereira, MSc. - UNIVALI
 * Bloco C - Exercício 8. Um contador para cada tipo
 * Nome: Radin
 *
 * Lembrete: uma variável static local é criada uma única vez e
 * mantém o valor entre chamadas da função - não é reiniciada a
 * cada chamada.
 */

#include <iostream>
using namespace std;

template <typename T>
void fun(const T &x) {
    static int contador = 0;
    cout << "x = " << x << " contador = " << contador << endl;
    ++contador;
}

/* R (item a) - saída esperada ANTES de compilar:
 *
 * x = 1 contador = 0
 * x = 1 contador = 1
 * x = 1.1 contador = 0
 *
 * Justificativa: as duas primeiras chamadas usam fun<int>, então
 * compartilham o mesmo "contador" (0 -> vira 1 -> vira 2). A terceira
 * chamada usa fun<double>, uma instanciação diferente do template,
 * com seu próprio "contador" independente, que começa do zero.
 */

int main() {
    fun<int>(1);
    fun<int>(1);
    fun<double>(1.1);

    return 0;
}

/* R (item b):
 *
 * Existem DUAS variáveis "contador" no programa: uma pertencente a
 * fun<int> e outra pertencente a fun<double>.
 *
 * Isso acontece porque, na instanciação de um template, o compilador
 * gera uma função concreta separada para cada tipo T usado - como se
 * existissem duas funções distintas no binário final:
 *
 *   void fun_int(const int &x) { static int contador = 0; ... }
 *   void fun_double(const double &x) { static int contador = 0; ... }
 *
 * Como a variável static pertence à função em que foi declarada, e
 * cada instanciação do template é tratada como uma função própria,
 * cada uma recebe seu próprio "contador" isolado. Templates não
 * compartilham estado static entre instanciações de tipos diferentes.
 *
 * R (item c):
 *
 * Se a terceira chamada fosse fun<int>(2) em vez de fun<double>(1.1),
 * as três chamadas usariam a MESMA instanciação (fun<int>), então
 * compartilhariam o mesmo "contador":
 *
 *   x = 1 contador = 0
 *   x = 1 contador = 1
 *   x = 2 contador = 2
 *
 * A diferença principal: a terceira linha mostraria contador = 2 (a
 * contagem continua), em vez de contador = 0 - porque não haveria
 * mais uma instanciação nova de outro tipo, só chamadas repetidas da
 * mesma versão fun<int>.
 *
 * R (item d):
 *
 * O & em "const T &x" faz x ser uma REFERÊNCIA ao argumento passado,
 * em vez de uma CÓPIA dele. Sem o &, cada chamada criaria uma cópia
 * do valor de entrada; com o &, a função acessa o valor original
 * diretamente, e o const garante que ela não pode modificá-lo.
 *
 * Isso importa em templates porque T pode ser qualquer tipo, inclusive
 * um tipo grande e caro de copiar (uma struct grande, uma string, um
 * vector). Usar const T& evita esse custo de cópia, seja qual for o
 * tipo - é a prática padrão em código genérico.
 *
 * O programa funcionaria sem o &? Sim, e daria a mesma saída, pois int
 * e double são tipos pequenos e baratos de copiar, e a função só lê x
 * (não o modifica). A diferença seria apenas de desempenho (uma cópia
 * extra por chamada), invisível no resultado impresso. Para tipos
 * maiores, porém, essa cópia desnecessária teria custo real.
 */