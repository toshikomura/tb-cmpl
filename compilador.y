
// Testar se funciona corretamente o empilhamento de par�metros
// passados por valor ou por refer�ncia.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"

/* Vari�veis globais incluidas */
char *dados;
char *categoria;
char *tipo;
char *tipo_parametro;
char *tipo_retorno;
char *nome_proc_func;

int num_vars;
int num_vars_inicial;

int eh_parametro_referencia;
int eh_vars_proc_func;

int nivel_lexico;
int desloc;
int qtd_parametros;

int x, y;
int percorre_vars;

/* Fun��o para corrigir erro de vers�es */
void yyerror (char const *);

%}

%token PROGRAM ABRE_PARENTESES FECHA_PARENTESES
%token VIRGULA PONTO_E_VIRGULA DOIS_PONTOS PONTO
%token T_BEGIN T_END VAR IDENT ATRIBUICAO
%token NUMERO
%token SOMA SUBTRACAO MULTIPLICACAO DIVISAO
%token IGUAL DIFERENTE MAIOR MENOR NAO E OU
%token ENQUANTO PARA FACA REPITA ATE SE ENTAO SENAO
%token PROCEDIMENTO FUNCAO
%token TIPO_INTEIRO

%nonassoc LOWER_THEN_ELSE
%nonassoc SENAO

%%


programa: {
             geraCodigo (NULL, "INPP");
             }
             PROGRAM sem_tipo
             ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
;


sem_tipo: IDENT
            {
            sprintf ( categoria, "nome_programa");
            sprintf ( tipo, "sem_tipo");
            sprintf ( tipo_parametro, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, tipo_parametro, tipo_retorno, 0, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( tipo, 1);
            }
;


bloco:
              parte_declara_vars
              {
              }
              comando_composto
;


parte_declara_vars: var
;


var: {
            eh_vars_proc_func = 0;
            eh_parametro_referencia = 0;
            } VAR declara_vars
            |
;


declara_vars: declara_vars declara_var
            | declara_var
;


declara_var: {
              num_vars_inicial = num_vars;
              }
              lista_id_var DOIS_PONTOS
              tipo
              { /* AMEM */
              sprintf ( dados, "AMEM %d", num_vars);
              geraCodigo ( NULL, dados);
              }
              PONTO_E_VIRGULA
;


tipo: TIPO_INTEIRO
            {
                percorre_vars = num_vars - num_vars_inicial;
                insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
;


tipo_retorno_func: TIPO_INTEIRO
            {
            sprintf ( tipo_retorno, "%s", token);
            }
;


lista_id_var: lista_id_var VIRGULA IDENT
            { /* insere �ltima vars na tabela de s�mbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_parametro, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, tipo_parametro, tipo_retorno, nivel_lexico, desloc, 0);
            desloc++;
            num_vars++;
            }
            | IDENT
            { /* insere vars na tabela de s�mbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_parametro, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, tipo_parametro, tipo_retorno, nivel_lexico, desloc, 0);
            desloc++;
            num_vars++;
            }
;


lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;


comando_composto: IDENT atribuicao bloco
            | procedimento_ou_funcao bloco
            | comando_composto_2
;


comando_composto_2: T_BEGIN comandos T_END
;


comandos: atrib_proc_func PONTO_E_VIRGULA comandos
            | repeticao PONTO_E_VIRGULA comandos
            | condicao PONTO_E_VIRGULA comandos
            | atrib_proc_func PONTO_E_VIRGULA
            | repeticao PONTO_E_VIRGULA
            | condicao PONTO_E_VIRGULA
            |
;


comando_sem_ponto_e_virgula: atrib_proc_func
            | repeticao
            | condicao
;


procedimento_ou_funcao: PROCEDIMENTO IDENT
            {
            sprintf ( nome_proc_func, "%s", token);
            sprintf ( categoria, "procedimento");
            sprintf ( tipo_parametro, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            qtd_parametros = 0;
            } procedimento_ou_funcao_2 PONTO_E_VIRGULA
            {
            empilha_Simbolo_TB_SIMB ( nome_proc_func, categoria, rotulo1, tipo_parametro, tipo_retorno, nivel_lexico, desloc, qtd_parametros);
            } procedimento_ou_funcao_3
            | FUNCAO IDENT
            {
            sprintf ( nome_proc_func, "%s", token);
            sprintf ( categoria, "funcao");
            sprintf ( tipo_parametro, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            qtd_parametros = 0;
            } procedimento_ou_funcao_2 DOIS_PONTOS tipo_retorno_func PONTO_E_VIRGULA
            {
            empilha_Simbolo_TB_SIMB ( nome_proc_func, categoria, rotulo1, tipo_parametro, tipo_retorno, nivel_lexico, desloc, qtd_parametros);
            } procedimento_ou_funcao_3
;


procedimento_ou_funcao_2: ABRE_PARENTESES parametros_vars_proc_ou_func FECHA_PARENTESES
            |
;


procedimento_ou_funcao_3:
            {
            empilha_Deslocamento ( desloc);
            desloc = 0;
            nivel_lexico++;
            } bloco PONTO_E_VIRGULA
            {
            desloc = desempilha_Deslocamento ();
            nivel_lexico--;
            }
;


parametros_vars_proc_ou_func:{
            eh_vars_proc_func = 1;
            } vars_proc_ou_func
            |
;


vars_proc_ou_func: VAR
            {
                eh_parametro_referencia = 1;
            } vars_proc_ou_func_2
            |
            {
                eh_parametro_referencia = 0;
            } vars_proc_ou_func_2


vars_proc_ou_func_2: var_proc_ou_func PONTO_E_VIRGULA vars_proc_ou_func
            | var_proc_ou_func
;


var_proc_ou_func: {
            num_vars_inicial = num_vars;
            }
            lista_id_var_proc_ou_func DOIS_PONTOS
            tipo
            { /* AMEM */
            sprintf ( dados, "AMEM %d", num_vars);
            geraCodigo ( NULL, dados);
            }
;


lista_id_var_proc_ou_func: lista_id_var_proc_ou_func VIRGULA IDENT
            {
            procura_simb ( token, &x, &y, &tipo);
            if ( x == -99 ) { // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            if ( eh_parametro_referencia == 1)
                sprintf ( tipo_parametro, "var_referencia");
            else
                sprintf ( tipo_parametro, "var_valor");

            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, tipo_parametro, tipo_retorno, nivel_lexico, desloc, 0);
            num_vars++;
            qtd_parametros++;
            }
            | IDENT
            {
            procura_simb ( token, &x, &y, &tipo);
            if ( x == -99 ) { // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            if ( eh_parametro_referencia == 1)
                sprintf ( tipo_parametro, "var_referencia");
            else
                sprintf ( tipo_parametro, "var_valor");

            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, tipo_parametro, tipo_retorno, nivel_lexico, desloc, 0);
            num_vars++;
            qtd_parametros++;
            }
;


atrib_proc_func: IDENT
            {
            procura_simb ( token, &x, &y, &tipo );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados );
                exit ( 1);
            }
            sprintf ( dados, "%s", token);
            } atrib_proc_func_2
;


atrib_proc_func_2: atribuicao
            | chama_procedimento
            | chama_funcao
;


atribuicao: ATRIBUICAO expressao_aritmetica
            {
            sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
;


chama_procedimento: {
            sprintf ( categoria, "procedimento");
            if ( procura_cat ( dados, categoria, &rotulo1) == -99 ) {
                sprintf ( dados, "Procedimento '%s' nao foi declarada", dados);
                imprimeErro ( dados);
                exit ( 1);
            }
            } chama_proc_func
;


chama_funcao: {
            sprintf ( categoria, "funcao");
            if ( procura_cat ( dados, categoria, &rotulo1) == -99 ) {
                sprintf ( dados, "Funcao '%s' nao foi declarada", dados);
                imprimeErro ( dados);
                exit ( 1);
            }
            sprintf ( dados, "AMEN 1");
            geraCodigo ( NULL, dados );
            } chama_proc_func
;


chama_proc_func: ABRE_PARENTESES lista_id_var_parametro FECHA_PARENTESES PONTO_E_VIRGULA chama_proc_func_2
            | PONTO_E_VIRGULA chama_proc_func_2
;


chama_proc_func_2:
            {
            sprintf ( dados, "CHPR %s, %d", rotulo1, nivel_lexico);
            geraCodigo ( NULL, dados );
            }
;


lista_id_var_parametro: lista_id_var_parametro VIRGULA IDENT
            | IDENT
            |
;


repeticao: ENQUANTO
            {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            geraCodigo ( rotulo1, "NADA");
            } repeticao_2
;

repeticao_2: ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES FACA
            {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            } repeticao_3
            | expressao_booleana_geral FACA
            {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            } repeticao_3
;


repeticao_3: comando_sem_ponto_e_virgula
            {
            desempilha_Rotulo ( &rotulo2);
            desempilha_Rotulo ( &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
            | comando_composto_2
            {
            desempilha_Rotulo ( &rotulo2);
            desempilha_Rotulo ( &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
;


condicao: SE condicao_se_entao
            {
            desempilha_Rotulo ( &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
            | SE condicao_se_entao condicao_senao
            {
            desempilha_Rotulo ( &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
;


condicao_se_entao: ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES ENTAO
            {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            } condicao_se_entao_2
            | expressao_booleana_geral ENTAO
            {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            } condicao_se_entao_2
;


condicao_se_entao_2: comando_sem_ponto_e_virgula
            | comando_composto_2
;


condicao_senao: SENAO
            {
            desempilha_Rotulo ( &rotulo1);

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVS %s", rotulo2);
            geraCodigo ( NULL, dados);

            geraCodigo ( rotulo1, "NADA");
            } condicao_senao_2
            | %prec LOWER_THEN_ELSE
;


condicao_senao_2: comando_sem_ponto_e_virgula
            | comando_composto_2
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
            procura_simb( token, &x, &y, &tipo );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados);
                exit ( 1);
            }
            sprintf ( dados, "CRVL %d, %d", x, y);
            geraCodigo ( NULL, dados);
            }
            | NUMERO
            {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
            | ABRE_PARENTESES expressao_aritmetica FECHA_PARENTESES
;


expressao_booleana_geral: expressao_booleana
            | NAO expressao_booleana
            {
            geraCodigo ( NULL, "INVR");
            }
;


expressao_booleana: expressao_booleana IGUAL expressao_fator2
            {
            geraCodigo ( NULL, "CMIG");
            }
            | expressao_booleana DIFERENTE expressao_fator2
            {
            geraCodigo ( NULL, "CMDG");
            }
            | expressao_booleana MAIOR expressao_fator2
            {
            geraCodigo ( NULL, "CMMA");
            }
            | expressao_booleana MAIOR IGUAL expressao_fator2
            {
            geraCodigo ( NULL, "CMAG");
            }
            | expressao_booleana MENOR expressao_fator2
            {
            geraCodigo ( NULL, "CMME");
            }
            | expressao_booleana MENOR IGUAL expressao_fator2
            {
            geraCodigo ( NULL, "CMEG");
            }
            | expressao_booleana E expressao_fator2
            {
            geraCodigo ( NULL, "CONJ");
            }
            | expressao_booleana OU expressao_fator2
            {
            geraCodigo ( NULL, "DISJ");
            }
            | expressao_booleana E NAO expressao_fator2
            {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
            | expressao_fator2
;


expressao_fator2: IDENT
            {
            procura_simb ( token, &x, &y, &tipo );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados );
                exit ( 1);
            }
            sprintf ( dados, "CRVL %d, %d", x, y);
            geraCodigo ( NULL, dados);
            }
            | NUMERO
            {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
            | ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES
;


%%

void yyerror ( char const *message)
{
    fputs ( message, stderr);
    fputc ( '\n', stderr);
}

main ( int argc, char** argv) {
    FILE* fp;
    extern FILE* yyin;

    if ( argc < 2 || argc > 2) {
        printf ( "usage compilador <arq>a %d\n", argc);

        return ( -1);

    }

    fp = fopen ( argv [ 1], "r");
    if ( fp == NULL) {
        printf ( "usage compilador <arq>b\n");

        return ( -1);

    }


/* -------------------------------------------------------------------
 *  Inicia a Tabela de S�mbolos
 * ------------------------------------------------------------------- */

    inicia_variaveis_globais ();
    inicia_pilha_tabela_simbolos ();
    inicia_pilha_rotulos ();
    inicia_pilha_deslocamentos ();

    yyin = fp;
    yyparse ();

    return 0;
}
