
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

atribuicao: IDENT ATRIBUICAO IDENT PONTO_E_VIRGULA
            | IDENT ATRIBUICAO NUMERO PONTO_E_VIRGULA
            | expressao
;

expressao:  IDENT ATRIBUICAO IDENT SOMA IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "SOMA");
            }
            | IDENT ATRIBUICAO NUMERO SOMA NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "SOMA");
            }
            | IDENT ATRIBUICAO NUMERO SOMA IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "SOMA");
            }
            | IDENT ATRIBUICAO IDENT SOMA NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "SOMA");
            }

            | IDENT ATRIBUICAO IDENT SUBTRACAO IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "SUBT");
            }
            | IDENT ATRIBUICAO NUMERO SUBTRACAO NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "SUBT");
            }
            | IDENT ATRIBUICAO NUMERO SUBTRACAO IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "SUBT");
            }
            | IDENT ATRIBUICAO IDENT SUBTRACAO NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "SUBT");
            }

            | IDENT ATRIBUICAO IDENT MULTIPLICACAO IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "MULT");
            }
            | IDENT ATRIBUICAO NUMERO MULTIPLICACAO NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "MULT");
            }
            | IDENT ATRIBUICAO NUMERO MULTIPLICACAO IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "MULT");
            }
            | IDENT ATRIBUICAO IDENT MULTIPLICACAO NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "MULT");
            }

            | IDENT ATRIBUICAO IDENT DIVISAO IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "DIVI");
            }
            | IDENT ATRIBUICAO NUMERO DIVISAO NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CTCT");
            geraCodigo (NULL, "DIVI");
            }
            | IDENT ATRIBUICAO NUMERO DIVISAO IDENT PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "DIVI");
            }
            | IDENT ATRIBUICAO IDENT DIVISAO NUMERO PONTO_E_VIRGULA
            {
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "CRCT");
            geraCodigo (NULL, "DIVI");
            }
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

