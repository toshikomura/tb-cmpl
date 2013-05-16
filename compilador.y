
// Testar se funciona corretamente o empilhamento de parâmetros
// passados por valor ou por referência.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"

int num_vars;
void yyerror (char const *);

%}

%token PROGRAM ABRE_PARENTESES FECHA_PARENTESES
%token VIRGULA PONTO_E_VIRGULA DOIS_PONTOS PONTO
%token T_BEGIN T_END VAR IDENT ATRIBUICAO
%token NUMERO
%token SOMA SUBTRACAO MULTIPLICACAO DIVISAO
%token ENQUANTO PARA FACA REPITA ATE SE ENTAO SENAO

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
              { /* insere última vars na tabela de símbolos */ }
            | IDENT { /* insere vars na tabela de símbolos */}
;

lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;


comando_composto: T_BEGIN comandos T_END
;

comandos:   comandos atribuicao
            | atribuicao
;

atribuicao: IDENT ATRIBUICAO expressao_fraca PONTO_E_VIRGULA
;

expressao_fraca: expressao_fraca SOMA expressao_forte
            {
            geraCodigo (NULL, "SOMA");
            }
            | expressao_fraca SUBTRACAO expressao_forte
            {
            geraCodigo (NULL, "SUBT");
            }
            | expressao_forte
;

expressao_forte: expressao_forte MULTIPLICACAO expressao_fator
            {
            geraCodigo (NULL, "MULT");
            }
            | expressao_forte DIVISAO expressao_forte
            {
            geraCodigo (NULL, "DIVI");
            }
            | expressao_fator
;

expressao_fator: IDENT
            {
            geraCodigo (NULL, "CRVL");
            }
            | NUMERO
            {
            geraCodigo (NULL, "CRCT");
            }
            | expressao_fraca SOMA expressao_fraca
            {
            geraCodigo (NULL, "SOMA");
            }
            | expressao_fraca SUBTRACAO expressao_fraca
            {
            geraCodigo (NULL, "SUBT");
            }
            | expressao_fraca MULTIPLICACAO expressao_fraca
            {
            geraCodigo (NULL, "MULT");
            }
            | expressao_fraca DIVISAO expressao_fraca
            {
            geraCodigo (NULL, "DIVI");
            }
            | ABRE_PARENTESES expressao_fraca FECHA_PARENTESES
;

%%

void yyerror (char const *message)
{
    fputs (message, stderr);
    fputc ('\n', stderr);
}

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
 *  Inicia a Tabela de Símbolos
 * ------------------------------------------------------------------- */

   yyin=fp;
   yyparse();

   return 0;
}

