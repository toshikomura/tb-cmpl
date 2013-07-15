
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
char *categoria_funcao;
char *categoria_parametro_formal;
char *tipo;
char *tipo_valor_referencia;
char *tipo_retorno;
char *nome_var_proc_func;
char *nome_proc_func;

char *tipo_fator;
char *tipo_expressao;

int num_vars;
int num_parametros;
int num_parametros_aux;
int num_vars_inicial;
int eh_parametro_formal;

int nivel_lexico;
int desloc;

int x, y;
int percorre_vars;

pilha_s *p_tipos;
no_tabela_simbolos_p *dados_simbolo1;
no_tabela_simbolos_p *dados_simbolo2;

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


tipo: IDENT
            {
            sprintf ( dados, "integer");
            if ( strcmp ( dados, token) != 0) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_vars - num_vars_inicial;
            insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
;

tipo_parametro: IDENT
            {
            sprintf ( dados, "integer");
            if ( strcmp ( dados, token) != 0) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_var_proc_func, tipo_valor_referencia, token, percorre_vars);
            }
;


tipo_retorno_func: IDENT
            {
            sprintf ( dados, "integer");
            if ( strcmp ( dados, token) != 0) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
;


lista_id_var: lista_id_var VIRGULA IDENT
            {
            /* insere última variável na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como %s", token, dados_simbolo1->categoria);
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
            { /* insere variáveis na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como %s", token, dados_simbolo1->categoria);
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
            /* Caso encontre um procedimento */
            /* Empilha número de variávei para não perder */
            /* a quantidade depois de ler todo o procedimento */
            empilha_Inteiro ( p_num_vars, num_vars);

            /* Gera rótulo para desviar do procedimento */
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
            procedimento_ou_funcao
            {
            /* Recupera o número de variáveis */
            num_vars = desempilha_Inteiro ( p_num_vars);
            if ( num_vars == -99) {
                printf ( "Pilha p_num_vars esta vazia\n");
                exit ( 1);
            }

            /* Retoma com o rótulo */
            desempilha_String ( p_rotulos, &rotulo1);
            if ( rotulo1 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

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
            /* Depois de ler todo a declaração do procedimento */
            /* Empilha deslocamento para não perder ele depois */
            /* que sair do procedimento e inicia um novo */
            /* Aumento nivel léxico por causa da entrada no procedimento */
            empilha_Inteiro ( p_deslocamentos, desloc);
            desloc = 0;
            nivel_lexico++;

            geraCodigo ( rotulo1, "NADA");
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            } bloco PONTO_E_VIRGULA
            {
            /* Ao terminar de ler todo o procedimento retoma o deslocamento */
            /* Diminui o nivel lexico por causa do fim do procedimento */

            desloc = desempilha_Inteiro ( p_deslocamentos);
            if ( desloc == -99) {
                printf ( "Pilha p_deslocamentos esta vazia\n");
                exit ( 1);
            }
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
            /* Os parametros obrigatoriamente não podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro não pode ser '%s' já foi delcarado como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
            | IDENT
            {
            /* Os parametros obrigatoriamente não podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro não pode ser '%s' já foi delcarado como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

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
            /* Caso não seja atribuição então só pde ser procedimento ou função */
            /* Indica que não é parametro formal e indica com 2 */
            /* dizendo que vem de chamada de procedimento ou função */

            sprintf ( categoria, "procedimento");
            empilha_Inteiro ( p_eh_parametro_formal, 2);
            } var_chama_proc_func
            {
            if ( desempilha_Inteiro ( p_eh_parametro_formal) == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em atribuicao\n");
                exit ( 1);
            }
            }
;


atribuicao: {
            sprintf ( categoria, "var_simples");
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || strcmp ( categoria, dados_simbolo1->categoria) != 0) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Variável '%s' não foi declarada", nome_var_proc_func);
                else
                    sprintf ( dados, "'%s' foi declarado como %s e não como variável", nome_var_proc_func, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }
            } ATRIBUICAO
            {
            /* Indica que não é parametro formal e que está indica com '0' */
            /* que esta indo de atribuição */
            empilha_Inteiro ( p_eh_parametro_formal, 0);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            } expressao_aritmetica
            {
            if ( desempilha_Inteiro ( p_eh_parametro_formal) == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em atribuicao\n");
                exit ( 1);
            }

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            if ( p_tipos == NULL) {
                printf ( "Pilha p_p_tipos esta vazia em atribuição\n");
                exit ( 1);
            }

            /* Checa se o tipo do resultado da expressão corresponde a variável que vai receber a expressão */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                if ( tipo_expressao == NULL ) {
                    printf ( "Pilha p_tipos esta vazia\n");
                    exit ( 1);
                }

                if ( strcmp ( dados_simbolo1->tipo, tipo_expressao) != 0) {
                    sprintf ( dados, "Tipo do receptor é incopativel com um elemento da expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
;


var_chama_proc_func: {
            /* 1 - Caso venha de atribuição->expressao cateoria1 = var_simples */
            /* 2 - Caso venha de procedimento ou função cateoria1 = procedimento */
            /* 3 - Caso venha de lita de parametros->expressao pode ser var_simples, parametro_formal ou funcao */
            /* Para os 2 casos o outro parametro pode ser função */

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);
            if ( eh_parametro_formal == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em var_chama_proc_func\n");
                exit ( 1);
            }

            if ( eh_parametro_formal != 1) {
                procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);

                /* Se não encontrar o simbolos como var_simples/procedimento ou funcao e não é parametro_formal */
                if ( dados_simbolo1 == NULL || ( strcmp ( categoria, dados_simbolo1->categoria) != 0 && strcmp ( categoria_funcao, dados_simbolo1->categoria) != 0)) {
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
            }
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);

            /* Se o simbolo é uma função gera o código de retorno antes de empilhar os parametros */
            if ( dados_simbolo1 != NULL && strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0) {
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            num_parametros = 0;
            }
            passagem
;


passagem: ABRE_PARENTESES
            {
            /* Salva o nome da função antes de iniciar leitura dos parametros */
            /* Também salva a quantidade de parametros */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);

            } lista_id_var_parametro FECHA_PARENTESES
            {
            desempilha_String ( p_nomes, &nome_proc_func);
            if ( nome_proc_func == NULL ) {
                printf ( "Pilha p_nomes esta vazia\n");
                exit ( 1);
            }

            num_parametros = desempilha_Inteiro ( p_num_parametros);
            if ( num_parametros == -99) {
                printf ( "Pilha p_num_parametros esta vazia\n");
                exit ( 1);
            }

            strcpy ( nome_var_proc_func, nome_proc_func);
            } var_chama_proc_func_2
            | var_chama_proc_func_2
;


var_chama_proc_func_2: {

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);
            if ( eh_parametro_formal == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em var_chama_proc_func2\n");
                exit ( 1);
            }

            /* Se simbolo é procedimento ou var_simples */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL && (strcmp ( categoria, dados_simbolo1->categoria) == 0 || strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0)) {
                printf ( "entrou como procedimento, var_simples ou parametro_formal\n");

                if ( eh_parametro_formal == 1) {
                    printf ( "Determinou como parametro_formal\n");
                    if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0) {
                        /* é parametro_formal */
                        desempilha_pilhas_String ( p_p_tipos, &p_tipos);
                        if ( p_tipos == NULL) {
                            printf ( "Pilha p_eh_parametro_formal esta vazia em parmetro_formal\n");
                            exit ( 1);
                        }

                        /* Salva o tipo do parametro */
                        tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                        strcpy (tipo_fator, dados_simbolo1->tipo);
                        empilha_String ( p_tipos, tipo_fator);

                        empilha_pilhas_String ( p_p_tipos, p_tipos);

                        sprintf ( dados, "CRVL %d %d", x, y);
                        geraCodigo ( NULL, dados);
                    }
                }
                else {
                    sprintf ( dados, "procedimento");

                    /* Se é procedimento */
                    if ( strcmp( categoria, dados) == 0) {
                        sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                        geraCodigo ( NULL, dados );
                    }
                    else {
                        /* Senão é var_simples */
                        desempilha_pilhas_String ( p_p_tipos, &p_tipos);
                        if ( p_tipos == NULL) {
                            printf ( "Pilha p_p_tipos esta vazia em var_chama_proc_func2 var_simples\n");
                            exit ( 1);
                        }

                        /* Salva o tipo variável */
                        tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                        strcpy (tipo_fator, dados_simbolo1->tipo);
                        empilha_String ( p_tipos, tipo_fator);

                        empilha_pilhas_String ( p_p_tipos, p_tipos);

                        sprintf ( dados, "CRVL %d %d", x, y);
                        geraCodigo ( NULL, dados);
                    }
                }

            }
            else {

                /* Senão é funcao */
                procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
                if ( dados_simbolo1 != NULL && strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0) {
                    if ( dados_simbolo1->qtd_parametros != num_parametros) {
                        sprintf ( dados, "Para função '%s' numero de parametros incorreto", nome_var_proc_func);
                        imprimeErro ( dados);
                        exit ( 1);
                    }

                    /* Se a função não faz parte de uma expressão da atribuição */
                    /* No caso ele não faz parte disso ' a := funcao ' */
                    if ( eh_parametro_formal != 2) {
                        desempilha_pilhas_String ( p_p_tipos, &p_tipos);
                        if ( p_tipos == NULL) {
                            printf ( "Pilha p_p_tipos esta vazia em var_chama_proc_func2 função\n");
                            exit ( 1);
                        }

                        /* Salva o tipo de retorno da função */
                        tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                        strcpy (tipo_fator, dados_simbolo1->tipo_retorno);
                        empilha_String ( p_tipos, tipo_fator);

                        empilha_pilhas_String ( p_p_tipos, p_tipos);
                    }

                    sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
            }

            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
;


lista_id_var_parametro: lista_id_var_parametro VIRGULA
            {
            empilha_Inteiro ( p_eh_parametro_formal, 1);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            } expressao_aritmetica
            {
            if ( desempilha_Inteiro ( p_eh_parametro_formal) == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em lista_id_var_parametro 1\n");
                exit ( 1);
            }

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            if ( p_tipos == NULL) {
                printf ( "Pilha p_p_tipos esta vazia em lista_id_parametro\n");
                exit ( 1);
            }

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            if ( num_parametros_aux == -99) {
                printf ( "Pilha p_num_parametros esta vazia\n");
                exit ( 1);
            }

            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            printf ( "NUMERO DE PARAMETROS f= %d\n", num_parametros_aux);

            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            desempilha_String ( p_nomes, &nome_proc_func);
            if ( nome_proc_func == NULL ) {
                printf ( "Pilha p_nomes esta vazia\n");
                exit ( 1);
            }

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);
            printf ( "Nome da função é %s\n", dados_simbolo2->simbolo);
            sprintf ( dados, "integer");
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                if ( tipo_expressao == NULL ) {
                    printf ( "Pilha p_tipos esta vazia\n");
                    exit ( 1);
                }

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux) != 1) {
                    sprintf ( dados, "Tipo do receptor é incopativel com um elemento da expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_String ( p_nomes, nome_proc_func);
            }
            |
            {
            empilha_Inteiro ( p_eh_parametro_formal, 1);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            } expressao_aritmetica
            {
            if ( desempilha_Inteiro ( p_eh_parametro_formal) == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em lista_id_var_parametro 2\n");
                exit ( 1);
            }

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            if ( p_tipos == NULL) {
                printf ( "Pilha p_p_tipos esta vazia em lista_id_parametro 2\n");
                exit ( 1);
            }

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            if ( num_parametros_aux == -99) {
                printf ( "Pilha p_num_parametros esta vazia\n");
                exit ( 1);
            }

            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            printf ( "NUMERO DE PARAMETROS = %d\n", num_parametros_aux);

            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            desempilha_String ( p_nomes, &nome_proc_func);
            if ( nome_proc_func == NULL ) {
                printf ( "Pilha p_nomes esta vazia\n");
                exit ( 1);
            }

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);
            printf ( "Nome da função é %s\n", dados_simbolo2->simbolo);
            sprintf ( dados, "integer");
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                if ( tipo_expressao == NULL ) {
                    printf ( "Pilha p_tipos esta vazia\n");
                    exit ( 1);
                }

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux) != 1) {
                    sprintf ( dados, "Tipo do receptor é incopativel com um elemento da expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_String ( p_nomes, nome_proc_func);
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
            if ( rotulo2 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            desempilha_String ( p_rotulos, &rotulo1);
            if ( rotulo1 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
            | comando_composto_2_rep_cond
            {
            desempilha_String ( p_rotulos, &rotulo2);
            if ( rotulo2 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            desempilha_String ( p_rotulos, &rotulo1);
            if ( rotulo1 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
;


condicao: SE condicao_se_entao
            {
            desempilha_String ( p_rotulos, &rotulo2);
            if ( rotulo2 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            geraCodigo ( rotulo2, "NADA");
            }
            | SE condicao_se_entao condicao_senao
            {
            desempilha_String ( p_rotulos, &rotulo2);
            if ( rotulo2 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

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
            if ( rotulo1 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

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

            sprintf ( dados, "integer");
            strcpy ( tipo_fator, dados);
            empilha_String ( p_tipos, tipo_fator);
            }
            | ABRE_PARENTESES expressao_aritmetica FECHA_PARENTESES
            {
            sprintf ( dados, "integer");
            strcpy ( tipo_fator, dados);
            empilha_String ( p_tipos, tipo_fator);
            }
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
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL ){ // numero -99 indica que nao encontrou simb na tabela
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
    inicia_pilha_pilhas_strings ();
    inicia_pilha_inteiros ();
    inicia_pilha_inteiros ();

    yyin = fp;
    yyparse ();

    return 0;
}
