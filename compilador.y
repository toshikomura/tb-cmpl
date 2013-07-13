
// Testar se funciona corretamente o empilhamento de parâmetros
// passados por valor ou por referência.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"

/* Variáveis globais incluidas */
char *dados;
char *categoria;
char *categoria2;
char *tipo;
char *tipo_valor_referencia;
char *tipo_retorno;
char *nome_var_proc_func;
char *nome_proc_func;

int num_vars;
int num_parametros;
int num_parametros_aux;
int num_vars_inicial;

int nivel_lexico;
int desloc;

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
%token PROCEDIMENTO FUNCAO
%token TIPO_INTEIRO
%token LEITURA IMPRESSAO

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
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( tipo, 1);
            }
;


bloco: parte_declara_vars comando_composto
;


parte_declara_vars: var
;


var: VAR declara_vars
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
            sprintf ( dados, "AMEM %d", percorre_vars);
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

tipo_parametro: TIPO_INTEIRO
            {
            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_var_proc_func, tipo_valor_referencia, token, percorre_vars);
            }
;


tipo_retorno_func: TIPO_INTEIRO
            {
            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
;


lista_id_var: lista_id_var VIRGULA IDENT
            { /* insere última vars na tabela de símbolos */
            if ( procura_simb ( token, &x, &y, &tipo ) != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
            | IDENT
            { /* insere vars na tabela de símbolos */
            if ( procura_simb ( token, &x, &y, &tipo ) != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
;


lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;


comando_composto: {
            empilha_Inteiro ( p_num_vars, num_vars);

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
            procedimento_ou_funcao
            {
            num_vars = desempilha_Inteiro ( p_num_vars);

            desempilha_String ( p_rotulos, &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
            bloco
            | comando_composto_2
;


comando_composto_2: T_BEGIN comandos T_END
;


comando_composto_2_rep_cond: T_BEGIN comandos T_END
;


comandos: atrib_proc_func PONTO_E_VIRGULA comandos
            | repeticao PONTO_E_VIRGULA comandos
            | condicao PONTO_E_VIRGULA comandos
            | leitura PONTO_E_VIRGULA comandos
            | impressao PONTO_E_VIRGULA comandos
            | atrib_proc_func PONTO_E_VIRGULA
            | repeticao PONTO_E_VIRGULA
            | condicao PONTO_E_VIRGULA
            | leitura PONTO_E_VIRGULA
            | impressao PONTO_E_VIRGULA
            |
;


comando_sem_ponto_e_virgula: atrib_proc_func
            | repeticao
            | condicao
;


procedimento_ou_funcao: PROCEDIMENTO IDENT
            {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria, "procedimento");
            sprintf ( tipo_retorno, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria, rotulo1, nivel_lexico, 0);
            } procedimento_ou_funcao_2 PONTO_E_VIRGULA
            {
            } procedimento_ou_funcao_3
            | FUNCAO IDENT
            {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria, "funcao");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria, rotulo1, nivel_lexico, 0);
            } procedimento_ou_funcao_2 DOIS_PONTOS tipo_retorno_func PONTO_E_VIRGULA
            {
            } procedimento_ou_funcao_3
;


procedimento_ou_funcao_2: ABRE_PARENTESES parametros_vars_proc_ou_func FECHA_PARENTESES
            |
;


procedimento_ou_funcao_3:
            {
            empilha_Inteiro ( p_deslocamentos, desloc);
            desloc = 0;
            nivel_lexico++;

            geraCodigo ( rotulo1, "NADA");
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            } bloco PONTO_E_VIRGULA
            {
            desloc = desempilha_Inteiro ( p_deslocamentos);
            nivel_lexico--;
            }
;


parametros_vars_proc_ou_func:{
            num_parametros = 0;
            } vars_proc_ou_func
            |
;


vars_proc_ou_func: VAR
            {
            sprintf ( tipo_valor_referencia, "var_referencia");
            } vars_proc_ou_func_2
            |
            {
            sprintf ( tipo_valor_referencia, "var_valor");
            } vars_proc_ou_func_2


vars_proc_ou_func_2: var_proc_ou_func PONTO_E_VIRGULA vars_proc_ou_func
            | var_proc_ou_func
;


var_proc_ou_func: {
            num_vars_inicial = num_parametros;
            }
            lista_id_var_proc_ou_func DOIS_PONTOS
            tipo_parametro
;


lista_id_var_proc_ou_func: lista_id_var_proc_ou_func VIRGULA IDENT
            {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
            | IDENT
            {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
;


atrib_proc_func: IDENT
            {
            sprintf ( nome_var_proc_func, "%s", token);
            } atrib_proc_func_2
;


atrib_proc_func_2: atribuicao
            |
            {
            sprintf ( categoria, "procedimento");
            } var_chama_proc_func
;


atribuicao: {
            sprintf ( categoria, "var_simples");
            if ( procura_cat ( nome_var_proc_func, categoria, &rotulo1, &tipo, &x, &y) == NULL ) {
                sprintf ( dados, "Variável '%s' não foi declarada", nome_var_proc_func);
                imprimeErro ( dados );
                exit ( 1);
            }
            } ATRIBUICAO expressao_aritmetica
            {
            sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
;


var_chama_proc_func: {
            sprintf ( categoria2, "funcao");
            if ( procura_cat ( nome_var_proc_func, categoria, &rotulo1, &tipo, &x, &y) == NULL && procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y) == NULL ) {
                sprintf ( dados, "var_simples");
                if ( strcmp ( categoria, dados) == 0){
                    sprintf ( dados, "Variavel ou Funcao '%s' nao foi declarada", nome_var_proc_func);
                    imprimeErro ( dados);
                }
                else {
                    sprintf ( dados, "Procedimento ou Funcao '%s' nao foi declarada", nome_var_proc_func);
                    imprimeErro ( dados);
                }
                exit ( 1);
            }
            if ( procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y) != NULL) {
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            num_parametros = 0;
            }
            passagem
;


passagem: ABRE_PARENTESES
            {
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);
            } lista_id_var_parametro FECHA_PARENTESES
            {
            desempilha_String ( p_nomes, &nome_proc_func);
            num_parametros = desempilha_Inteiro ( p_num_parametros);
            strcpy ( nome_var_proc_func, nome_proc_func);
            } var_chama_proc_func_2
            | var_chama_proc_func_2
;


var_chama_proc_func_2: {
            if ( procura_cat ( nome_var_proc_func, categoria, &rotulo1, &tipo, &x, &y) != NULL) {
                sprintf ( dados, "procedimento");
                if ( strcmp( categoria, dados) == 0) {
                    sprintf ( dados, "CHPR %s, %d", rotulo1, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
                else {
                    sprintf ( dados, "CRVL %d %d", x, y);
                    geraCodigo ( NULL, dados);
                }
            }
            else {
                if ( procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y) != NULL) {
                    if ( compara_parametros_proc_func ( nome_var_proc_func, num_parametros) != 1) {
                        sprintf ( dados, "Para função '%s' numero de parametros incorreto", nome_var_proc_func);
                        imprimeErro ( dados);
                        exit ( 1);
                    }
                    sprintf ( dados, "CHPR %s, %d", rotulo2, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
            }
            }
;


lista_id_var_parametro: lista_id_var_parametro VIRGULA expressao_aritmetica
            {
            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            }
            | expressao_aritmetica
            {
            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            }
            |
;


repeticao: ENQUANTO
            {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            geraCodigo ( rotulo1, "NADA");
            } repeticao_2
;

repeticao_2: ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES FACA
            {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            } repeticao_3
            | expressao_booleana_geral FACA
            {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            } repeticao_3
;


repeticao_3: comando_sem_ponto_e_virgula
            {
            desempilha_String ( p_rotulos, &rotulo2);
            desempilha_String ( p_rotulos, &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
            | comando_composto_2_rep_cond
            {
            desempilha_String ( p_rotulos, &rotulo2);
            desempilha_String ( p_rotulos, &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
;


condicao: SE condicao_se_entao
            {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
            | SE condicao_se_entao condicao_senao
            {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
;


condicao_se_entao: ABRE_PARENTESES expressao_booleana_geral FECHA_PARENTESES ENTAO
            {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            } condicao_se_entao_2
            | expressao_booleana_geral ENTAO
            {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            } condicao_se_entao_2
;


condicao_se_entao_2: comando_sem_ponto_e_virgula
            | comando_composto_2_rep_cond
;


condicao_senao: SENAO
            {
            desempilha_String ( p_rotulos, &rotulo1);

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVS %s", rotulo2);
            geraCodigo ( NULL, dados);

            geraCodigo ( rotulo1, "NADA");
            } condicao_senao_2
            | %prec LOWER_THEN_ELSE
;


condicao_senao_2: comando_sem_ponto_e_virgula
            | comando_composto_2_rep_cond
;


leitura: LEITURA IDENT
            | LEITURA passagem
;


impressao: IMPRESSAO IDENT
            | IMPRESSAO passagem
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
            sprintf ( categoria, "var_simples");
            sprintf ( nome_var_proc_func, "%s", token);
            } var_chama_proc_func
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
            if ( procura_simb ( token, &x, &y, &tipo ) == NULL ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Variável '%s' não foi declarada", token);
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
 *  Inicia a Tabela de Símbolos
 * ------------------------------------------------------------------- */

    inicia_variaveis_globais ();
    inicia_pilha_tabela_simbolos ();
    inicia_pilha_strings ();
    inicia_pilha_inteiros ();
    inicia_pilha_inteiros ();

    yyin = fp;
    yyparse ();

    return 0;
}
