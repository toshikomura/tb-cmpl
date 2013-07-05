tb-cmpl
=========

Realização do trabalho de Construção de Compiladores (CI211) UFPR Ciência da Computação 2013.

Por: Gustavo Toshi Komura.

Projeto Base do Compilador prof Bruno Muller.

1 - Incluido tokens 'enquanto' para 'while', 'se' para 'if' e 'senao' para 'else'.

2 - Incluido tokens 'SOMA' para '+', 'SUBTRACAO' para '-', 'MULTIPLICACAO' para '*',
'DIVISAO' para '/' e 'NUMERO' para numeros inteiros.
  2.Obs: Incluido na parte sintática do compilador a seguinte linhas

    -------------------------------------
    comandos: comandos expressao
              | expressao
    ;

    expressao: .....
    -------------------------------------

  Observar que ele verifica se existe um comando e uma expressao ou somente uma expressao.
  E que no caso um comando, no momento, só pode ser uma expressao.

3 - Incluido possibilidade de inserir mais de um elemento no comando MEPA através da
função geraCodigo(), utilizando a função sprintf() para concatenar strings.

4 - Incluido tabela de simbolos, criando a struct no header e alocando a tabela no
compilador.

5 - Incluido verificação no momento de atribuição, verificando se a variável foi
declarada.

6 - Adicionado função yerror para corrigir erro com bison.

7 - Incluido leitura de expressões com parenteses.

8 - Incluido tokens de repetição.

9 - Incluido escrita de código MEPA de comandos com constantes.

10 - Incluido contagem de variáveis.

11 - Incluido verificação de nivel lexico e deslocamento.

12 - Incluido função de procura de simbolo na tabela de simbolos.

13 - Incluido função de geração de novo rotulo.

14 - Incluido leitura de repetição.

15 - Incluido leitura de expressões booleanas.

16 - Incluido pilha para rotulos.

17 - Adicionado endereços das variáveis na instrução CRVL do MEPA.

18 - Mudança nas funções de Empilha e Desempilha rotulo, no caso elas deixatm de
retornar um ponteiro, e passam a atribuir o ponteiro ao parametro passado.

19 - Modificação na leitura para aceitar "if"s e "while"s com uma única linha
sem "begin" e "end".

20 - Inclusão e possibilidade de leitura de procedimentos com aninhamento.
