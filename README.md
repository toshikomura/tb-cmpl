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
