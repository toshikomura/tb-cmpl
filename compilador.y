
// Testar se funciona corretamente o empilhamento de par�metros
// passados por valor ou por refer�ncia.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"

int num_vars;

%}

%token PROGRAM ABRE_PARENTESES FECHA_PARENTESES
%token VIRGULA PONTO_E_VIRGULA DOIS_PONTOS PONTO
%token T_BEGIN T_END VAR IDENT ATRIBUICAO
%token NUMERO
%token SOMA SUBTRACAO MULTIPLICACAO DIVISAO
%token ENQUANTO SE SENAO

%%

programa    :{
             geraCodigo (NULL, "INPP");
             }
             PROGRAM IDENT
             ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
             geraCodigo (NULL, "PARA");
             }
;

bloco       :
              parte_declara_vars
              {
              }

              comando_composto
              ;




parte_declara_vars:  var
;


var         : { } VAR declara_vars
            |
;

declara_vars: declara_vars declara_var
            | declara_var
;

declara_var : { }
              lista_id_var DOIS_PONTOS
              tipo
              { /* AMEM */
              }
              PONTO_E_VIRGULA
;

tipo        : IDENT
;

lista_id_var: lista_id_var VIRGULA IDENT
              { /* insere �ltima vars na tabela de s�mbolos */ }
            | IDENT { /* insere vars na tabela de s�mbolos */}
;

lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;


comando_composto: T_BEGIN comandos T_END
;

comandos: comandos expressao
            | expressao
;

expressao: IDENT ATRIBUICAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO IDENT SOMA IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO SOMA NUMERO PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO SOMA IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO IDENT SOMA NUMERO PONTO_E_VIRGULA

            | IDENT ATRIBUICAO IDENT SUBTRACAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO SUBTRACAO NUMERO PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO SUBTRACAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO IDENT SUBTRACAO NUMERO PONTO_E_VIRGULA

            | IDENT ATRIBUICAO IDENT MULTIPLICACAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO MULTIPLICACAO NUMERO PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO MULTIPLICACAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO IDENT MULTIPLICACAO NUMERO PONTO_E_VIRGULA

            | IDENT ATRIBUICAO IDENT DIVISAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO DIVISAO NUMERO PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO DIVISAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO IDENT DIVISAO NUMERO PONTO_E_VIRGULA
;


%%

main (int argc, char** argv) {
   FILE* fp;
   extern FILE* yyin;

   if (argc<2 || argc>2) {
         printf("usage compilador <arq>a %d\n", argc);
         return(-1);
      }

   fp=fopen (argv[1], "r");
   if (fp == NULL) {
      printf("usage compilador <arq>b\n");
      return(-1);
   }


/* -------------------------------------------------------------------
 *  Inicia a Tabela de S�mbolos
 * ------------------------------------------------------------------- */

   yyin=fp;
   yyparse();

   return 0;
}

