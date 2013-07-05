
// Testar se funciona corretamente o empilhamento de parâmetros
// passados por valor ou por referência.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"

/* Variáveis globais incluidas */
char dados[TAM_DADOS];
int num_vars = 0;
int num_vars_inicial = 0;
int nivel_lexico = 0;
int desloc = 0;
int x, y;
int percorre_vars;

/* Função para corrigir erro de versões */
void yyerror (char const *);

%}

%token PROGRAM ABRE_PARENTESES FECHA_PARENTESES
%token VIRGULA PONTO_E_VIRGULA DOIS_PONTOS PONTO
%token T_BEGIN T_END VAR IDENT ATRIBUICAO
%token NUMERO
%token SOMA SUBTRACAO MULTIPLICACAO DIVISAO
%token IGUAL DIFERENTE MAIOR MENOR NAO E OU
%token ENQUANTO PARA FACA REPITA ATE SE ENTAO SENAO
%token PROCEDIMENTO

%nonassoc LOWER_THEN_ELSE
%nonassoc SENAO

%%

programa    :{
             geraCodigo (NULL, "INPP");
             }
             PROGRAM IDENT
             ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo( NULL, dados);
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


declara_var : {
              num_vars_inicial = num_vars;
              }
              lista_id_var DOIS_PONTOS
              tipo
              { /* AMEM */
              sprintf ( dados, "AMEM %d", num_vars);
              geraCodigo( NULL, dados);
              }
              PONTO_E_VIRGULA
;

tipo        : IDENT
            {
                for( percorre_vars = num_vars_inicial; percorre_vars < num_vars; percorre_vars++){
                    sprintf ( tb_simb[ percorre_vars ].tipo, "%s", token);
                }
            }
;


lista_id_var: lista_id_var VIRGULA IDENT
            { /* insere última vars na tabela de símbolos */
            sprintf ( tb_simb[ num_vars ].simbolo, "%s", token);
            sprintf ( tb_simb[ num_vars ].categoria, "%s", "var_simples");
            tb_simb[ num_vars ].nivel_lexico = nivel_lexico;
            tb_simb[ num_vars ].desloc = desloc;
            desloc++;
            num_vars++;
            }
            | IDENT
            { /* insere vars na tabela de símbolos */
            sprintf ( tb_simb[ num_vars ].simbolo, "%s", token);
            sprintf ( tb_simb[ num_vars ].categoria, "%s", "var_simples");
            tb_simb[ num_vars ].nivel_lexico = nivel_lexico;
            tb_simb[ num_vars ].desloc = desloc;
            desloc++;
            num_vars++;
            }
;


lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;


comando_composto: atribuicao_ou_procedimento T_BEGIN comandos T_END
            | atribuicao_ou_procedimento T_BEGIN T_END
            | T_BEGIN T_END
            | T_BEGIN comandos T_END
            {
            }
;


comandos: atribuicao_ou_procedimento PONTO_E_VIRGULA comandos
            | repeticao PONTO_E_VIRGULA comandos
            | condicao PONTO_E_VIRGULA comandos
            | atribuicao_ou_procedimento PONTO_E_VIRGULA
            | repeticao PONTO_E_VIRGULA
            | condicao PONTO_E_VIRGULA
;


comando_sem_ponto_e_virgula: atribuicao_ou_procedimento
            | repeticao
            | condicao
;


atribuicao_ou_procedimento: PROCEDIMENTO IDENT procedimento PONTO_E_VIRGULA
            | IDENT
            {
            procura_simb( token, &x, &y );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro( dados );
                exit(1);
            }
            } atribuicao
;


procedimento: ABRE_PARENTESES FECHA_PARENTESES PONTO_E_VIRGULA procedimento_2
            | PONTO_E_VIRGULA procedimento_2
;


procedimento_2: bloco
;


atribuicao: ATRIBUICAO expressao_aritmetica
            {
            sprintf( dados, "ARMZ %d, %d", x, y);
            geraCodigo( NULL, dados );
            }
;


repeticao: ENQUANTO
            {
            gera_Proximo_Rotulo( &rotulo1 );
            empilha_Rotulo( rotulo1 );
            geraCodigo( rotulo1, "NADA");
            } repeticao_2
;

repeticao_2: ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES FACA
            {
            gera_Proximo_Rotulo( &rotulo2 );
            empilha_Rotulo( rotulo2 );
            sprintf( dados, "DSVF %s", rotulo2 );
            geraCodigo( NULL, dados);
            } repeticao_3
            | expressao_booleana_geral FACA
            {
            gera_Proximo_Rotulo( &rotulo2 );
            empilha_Rotulo( rotulo2 );
            sprintf( dados, "DSVF %s", rotulo2 );
            geraCodigo( NULL, dados);
            } repeticao_3
;


repeticao_3: comando_sem_ponto_e_virgula
            {
            desempilha_Rotulo( &rotulo2 );
            desempilha_Rotulo( &rotulo1 );
            sprintf( dados, "DSVS %s", rotulo1 );
            geraCodigo( NULL, dados);
            geraCodigo( rotulo2, "NADA");
            }
            | comando_composto
            {
            desempilha_Rotulo( &rotulo2 );
            desempilha_Rotulo( &rotulo1 );
            sprintf( dados, "DSVS %s", rotulo1 );
            geraCodigo( NULL, dados);
            geraCodigo( rotulo2, "NADA");
            }
;


condicao: SE condicao_se_entao
            {
            desempilha_Rotulo( &rotulo2 );
            geraCodigo( rotulo2, "NADA");
            }
            | SE condicao_se_entao condicao_senao
            {
            desempilha_Rotulo( &rotulo2 );
            geraCodigo( rotulo2, "NADA");
            }
;


condicao_se_entao: ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES ENTAO
            {
            gera_Proximo_Rotulo( &rotulo1 );
            empilha_Rotulo( rotulo1 );
            sprintf( dados, "DSVF %s", rotulo1 );
            geraCodigo( NULL, dados);
            } condicao_se_entao_2
            | expressao_booleana_geral ENTAO
            {
            gera_Proximo_Rotulo( &rotulo1 );
            empilha_Rotulo( rotulo1 );
            sprintf( dados, "DSVF %s", rotulo1 );
            geraCodigo( NULL, dados);
            } condicao_se_entao_2
;


condicao_se_entao_2: comando_sem_ponto_e_virgula
            | comando_composto
;


condicao_senao: SENAO
            {
            desempilha_Rotulo( &rotulo1 );

            gera_Proximo_Rotulo( &rotulo2 );
            empilha_Rotulo( rotulo2 );
            sprintf( dados, "DSVS %s", rotulo2 );
            geraCodigo( NULL, dados);

            geraCodigo( rotulo1, "NADA");
            } condicao_senao_2
            | %prec LOWER_THEN_ELSE
;


condicao_senao_2: comando_sem_ponto_e_virgula
            | comando_composto
;


expressao_aritmetica: expressao_aritmetica SOMA expressao_termo
            {
            geraCodigo (NULL, "SOMA");
            }
            | expressao_aritmetica SUBTRACAO expressao_termo
            {
            geraCodigo (NULL, "SUBT");
            }
            | expressao_termo
;


expressao_termo: expressao_termo MULTIPLICACAO expressao_fator
            {
            geraCodigo (NULL, "MULT");
            }
            | expressao_termo DIVISAO expressao_fator
            {
            geraCodigo (NULL, "DIVI");
            }
            | expressao_fator
;


expressao_fator: IDENT
            {
            procura_simb( token, &x, &y );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro( dados );
                exit(1);
            }
            sprintf( dados, "CRVL %d, %d", x, y);
            geraCodigo (NULL, dados);
            }
            | NUMERO
            {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo (NULL, dados);
            }
            | ABRE_PARENTESES expressao_aritmetica FECHA_PARENTESES
;


expressao_booleana_geral: expressao_booleana
            | NAO expressao_booleana
            {
            geraCodigo (NULL, "INVR");
            }
;


expressao_booleana: expressao_booleana IGUAL expressao_fator2
            {
            geraCodigo (NULL, "CMIG");
            }
            | expressao_booleana DIFERENTE expressao_fator2
            {
            geraCodigo (NULL, "CMDG");
            }
            | expressao_booleana MAIOR expressao_fator2
            {
            geraCodigo (NULL, "CMMA");
            }
            | expressao_booleana MAIOR IGUAL expressao_fator2
            {
            geraCodigo (NULL, "CMAG");
            }
            | expressao_booleana MENOR expressao_fator2
            {
            geraCodigo (NULL, "CMME");
            }
            | expressao_booleana MENOR IGUAL expressao_fator2
            {
            geraCodigo (NULL, "CMEG");
            }
            | expressao_booleana E expressao_fator2
            {
            geraCodigo (NULL, "CONJ");
            }
            | expressao_booleana OU expressao_fator2
            {
            geraCodigo (NULL, "DISJ");
            }
            | expressao_booleana E NAO expressao_fator2
            {
            geraCodigo (NULL, "INVR");
            geraCodigo (NULL, "CONJ");
            }
            | expressao_fator2
;


expressao_fator2: IDENT
            {
            procura_simb( token, &x, &y );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro( dados );
                exit(1);
            }
            sprintf( dados, "CRVL %d, %d", x, y);
            geraCodigo (NULL, dados);
            }
            | NUMERO
            {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo (NULL, dados);
            }
            | ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES
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
  tb_simb = malloc( sizeof( tabela_simbolos) * TAM_TB_SIMB);
  inicia_pilha();

   yyin=fp;
   yyparse();

/* Impressão da tabela de simbolos */
    int i;
    printf("\n\nTABELA DE SIMBOLOS\n\n");
    for( i = 0; i < TAM_TB_SIMB ; i++ ){
        printf( "| %s | %s | %d | %d | %s |\n", tb_simb[i].simbolo, tb_simb[i].categoria, tb_simb[i].nivel_lexico, tb_simb[i].desloc, tb_simb[i].tipo);
    }

   return 0;
}
