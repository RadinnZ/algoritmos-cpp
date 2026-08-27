# 🧬 Exercícios de Templates

Exercícios sobre **templates de função** em C++: generalização de código, dedução de tipos, especialização e boas práticas de programação genérica.

---

## 🔷 Bloco A — Introdução a Templates

Primeiros contatos com a sintaxe `template <typename T>` e motivação para o uso de código genérico.

| # | Arquivo | Descrição |
|---|---|---|
| Ex01 | [exercicio1.cpp](./bloco_a/exercicio1.cpp) | Reimplementa uma função de troca usando template e testa com `int`, `double`, `char` e `string` |
| Ex02 | [exercicio2.cpp](./bloco_a/exercicio2.cpp) | Procedimento genérico que imprime o conteúdo de um vetor de qualquer tipo |
| Ex03 | [exercicio3.cpp](./bloco_a/exercicio3.cpp) | Substitui três funções `dobro` por um único template |
| Ex04 | [exercicio4.cpp](./bloco_a/exercicio4.cpp) | Função genérica que verifica se um valor está dentro de um intervalo `[min, max]` |

---

## 🔷 Bloco B — Dedução de Tipos e Erros de Compilação

Análise de quando o compilador consegue ou não deduzir o tipo correto em chamadas de template.

| # | Arquivo | Descrição |
|---|---|---|
| Ex05 | [exercicio5.cpp](./bloco_b/exercicio5.cpp) | Diagnóstico e correção de erro de dedução com dois tipos diferentes (`int` e `double`) |
| Ex06 | [exercicio6.cpp](./bloco_b/exercicio6.cpp) | Previsão de quais chamadas de `soma<T>` compilam e qual saída produzem |
| Ex07 | [exercicio7.cpp](./bloco_b/exercicio7.cpp) | Template que compila sem uso, mas gera erro ao ser instanciado com tipo incompatível |

---

## 🔷 Bloco C — Templates com Vetores e `static`

Aplicação de templates em operações com vetores e análise do comportamento de variáveis `static` por instanciação.

| # | Arquivo | Descrição |
|---|---|---|
| Ex08 | [exercicio8.cpp](./bloco_c/exercicio8.cpp) | Análise de variável `static` local em template: cada tipo gera seu próprio contador |
| Ex09 | [exercicio9.cpp](./bloco_c/exercicio9.cpp) | Função genérica que retorna a soma dos elementos de um vetor |
| Ex10 | [exercicio10.cpp](./bloco_c/exercicio10.cpp) | Função genérica que conta quantos elementos de um vetor são maiores que um limite |

---

## 🔷 Bloco D — Passagem por Referência e Especialização

Uso de referências em templates e criação de versões especializadas para tipos específicos.

| # | Arquivo | Descrição |
|---|---|---|
| Ex11 | [exercicio11.cpp](./bloco_d/exercicio11.cpp) | Procedimento que devolve menor e maior de um vetor por referência em uma única passagem |
| Ex12 | [exercicio12.cpp](./bloco_d/exercicio12.cpp) | Template com dois parâmetros de tipo (`T1`, `T2`) para imprimir pares de valores distintos |
| Ex13 | [exercicio13.cpp](./bloco_d/exercicio13.cpp) | Especialização de template: versão genérica usa soma, versão `bool` usa OU lógico |

---

[← Voltar ao repositório principal](../README.md)
