
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
char *categoria_procedimento;
char *categoria_funcao;
char *categoria_parametro_formal;
char *categoria_var_simples;
char *categoria_parametro_valor;
char *categoria_rotulo;
char *tipo;
char *tipo_proc_func;
char *parametro_valor_referencia;
char *tipo_retorno;
char *nome_var_proc_func;
char *nome_proc_func;
char *nome_var;
char *tipo_inteiro;

char *tipo_fator;
char *tipo_expressao;

int num_vars;
int num_vars_aux;
int num_parametros;
int num_parametros_aux;
int num_vars_inicial;
int eh_parametro_formal;
int num_termos;

int nivel_lexico;
int deslocamento;

int x, y;
int x_proc_func, y_proc_func;
int percorre_vars;

pilha_s *p_tipos;
no_tabela_simbolos_p *dados_simbolo1;
no_tabela_simbolos_p *dados_simbolo2;

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
%token LEITURA IMPRESSAO
%token ROTULO VAI_PARA

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
            sprintf ( parametro_valor_referencia, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( tipo, 1);
            }
;


bloco: parte_declara_vars comando_composto
;


parte_declara_vars: var
;


var: VAR
            {
            /* Se for uma declara��o de vari�vel */
            sprintf ( categoria, "%s", categoria_var_simples);
            } declara_vars parte_declara_vars
            | ROTULO
            {
            /* Se for uma declara��o de rotulo */
            sprintf ( categoria, "%s", categoria_rotulo);
            } lista_id_var PONTO_E_VIRGULA parte_declara_vars
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
            if ( strcmp ( tipo_inteiro, token) != 0) {
                sprintf ( dados, "Tipo '%s' n�o suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_vars - num_vars_inicial;
            insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
;

tipo_parametro: IDENT
            {
            if ( strcmp ( tipo_inteiro, token) != 0) {
                sprintf ( dados, "Tipo '%s' n�o suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_var_proc_func, parametro_valor_referencia, token, percorre_vars);
            }
;


tipo_retorno_func: IDENT
            {
            if ( strcmp ( tipo_inteiro, token) != 0) {
                sprintf ( dados, "Tipo '%s' n�o suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
;


lista_id_var: lista_id_var VIRGULA IDENT
            {
            /* insere �ltima vari�vel na tabela de s�mbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Vari�vel '%s' j� foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            /* Se � um label */
            if ( strcmp ( categoria, categoria_rotulo) == 0) {
                gera_Proximo_Rotulo ( &rotulo1);
                empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, rotulo1, nivel_lexico, deslocamento);
            }
            /* Sen�o � uma vari�vel */
            else {
                empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
                deslocamento++;
                num_vars++;
            }
            }
            | IDENT
            { /* insere vari�veis na tabela de s�mbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Vari�vel '%s' j� foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            /* Se for um label */
            if ( strcmp ( categoria, categoria_rotulo) == 0) {
                gera_Proximo_Rotulo ( &rotulo1);
                empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, rotulo1, nivel_lexico, deslocamento);
            }
            /* Sen�o � uma vari�vel */
            else {
                empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
                deslocamento++;
                num_vars++;
            }
            }
;


lista_idents: lista_idents VIRGULA IDENT
            | IDENT
;


comando_composto: {
            /* Caso encontre um procedimento */
            /* Empilha n�mero de vari�vei para n�o perder */
            /* a quantidade depois de ler todo o procedimento */
            empilha_Inteiro ( p_num_vars, num_vars);
            num_vars = 0;

            /* Gera r�tulo para desviar do procedimento */
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);

            /* Empilha deslocamento para n�o perder ele depois */
            /* que sair do procedimento e inicia um novo */
            /* Aumento nivel l�xico por causa da entrada no procedimento */
            empilha_Inteiro ( p_deslocamentos, deslocamento);
            deslocamento = 0;
            nivel_lexico++;
            }
            procedimento_ou_funcao
            {
            /* Ao terminar de ler todo o procedimento retoma o deslocamento */
            /* Diminui o nivel lexico por causa do fim do procedimento */

            deslocamento = desempilha_Inteiro ( p_deslocamentos);

            nivel_lexico--;

            /* Recupera o n�mero de vari�veis */
            num_vars = desempilha_Inteiro ( p_num_vars);

            /* Retoma com o r�tulo */
            desempilha_String ( p_rotulos, &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
            bloco
            | comando_composto_2
;


procedimento_ou_funcao: PROCEDIMENTO IDENT
            {
            sprintf ( nome_var_proc_func, "%s", token);

            /* Empilha o nome do procedimento para o retorno */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria_procedimento, parametro_valor_referencia, rotulo1, nivel_lexico, 0);
            } procedimento_ou_funcao_2 PONTO_E_VIRGULA procedimento_ou_funcao_3
            {
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s n�o foi encontrado em procura_simb procedimento_ou_funcao\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            /* Deleta itens que n�o podem mais ser usados na tabela de simbolos */
            deleta_itens_Tabela_Simbolos ( dados_simbolo1, &dados_simbolo2);

            sprintf ( dados, "RTPR %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo1->qtd_parametros);
            geraCodigo ( NULL, dados);
            }
            | FUNCAO IDENT
            {
            sprintf ( nome_var_proc_func, "%s", token);

            /* Empilha o nome da fun��o para o retorno */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);

            sprintf ( parametro_valor_referencia, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria_funcao, parametro_valor_referencia, rotulo1, nivel_lexico, 0);
            } procedimento_ou_funcao_2 DOIS_PONTOS tipo_retorno_func PONTO_E_VIRGULA procedimento_ou_funcao_3
            {
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s n�o foi encontrado em procura_simb procedimento_ou_funcao\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            /* Deleta itens que n�o podem mais ser usados na tabela de simbolos */
            deleta_itens_Tabela_Simbolos ( dados_simbolo1, &dados_simbolo2);
            if ( dados_simbolo2  == NULL ) {
                printf ( "O simbolo %s n�o conseguiu deletar itens em procedimento_ou_funcao\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            sprintf ( dados, "RTPR %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo1->qtd_parametros);
            geraCodigo ( NULL, dados);
            }
;


procedimento_ou_funcao_2: ABRE_PARENTESES parametros_vars_proc_ou_func FECHA_PARENTESES
            {
            /* Insere endere�os dos parametros formais procedimentou/fun��o */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s n�o foi encontrado em procura_simb procedimento_ou_funcao_2\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            insere_Endereco_parametro ( dados_simbolo1);

            empilha_String ( p_nomes, nome_proc_func);
            }
            |
;


procedimento_ou_funcao_3:
            {
            /* Depois de ler todo a declara��o do procedimento/fun��o */
            geraCodigo ( rotulo1, "NADA");
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            } bloco PONTO_E_VIRGULA
;


parametros_vars_proc_ou_func:{
            num_parametros = 0;
            } vars_proc_ou_func
            |
;


vars_proc_ou_func: VAR
            {
            sprintf ( parametro_valor_referencia, "var_referencia");
            } vars_proc_ou_func_2
            |
            {
            sprintf ( parametro_valor_referencia, "var_valor");
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
            /* Os parametros obrigatoriamente n�o podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro n�o pode ser '%s' j� foi delcarado como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria_parametro_formal, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            num_parametros++;
            }
            | IDENT
            {
            /* Os parametros obrigatoriamente n�o podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro n�o pode ser '%s' j� foi delcarado como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria_parametro_formal, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            num_parametros++;
            }
;


comando_composto_2: T_BEGIN comandos T_END
;


comandos: atrib_proc_func_rotu PONTO_E_VIRGULA comandos
            | repeticao PONTO_E_VIRGULA comandos
            | condicao PONTO_E_VIRGULA comandos
            | leitura PONTO_E_VIRGULA comandos
            | impressao PONTO_E_VIRGULA comandos
            | goto PONTO_E_VIRGULA comandos
            | atrib_proc_func_rotu PONTO_E_VIRGULA
            | repeticao PONTO_E_VIRGULA
            | condicao PONTO_E_VIRGULA
            | leitura PONTO_E_VIRGULA
            | impressao PONTO_E_VIRGULA
            | goto PONTO_E_VIRGULA
            |
;


comando_sem_ponto_e_virgula: atrib_proc_func_rotu
            | repeticao
            | condicao
            | leitura
            | impressao
            | goto
;


atrib_proc_func_rotu: IDENT
            {
            sprintf ( nome_var_proc_func, "%s", token);
            } atrib_proc_func_rotu_2
;


atrib_proc_func_rotu_2: rotulo_para_goto
            | atribuicao
            |
            {
            /* Caso n�o seja atribui��o ent�o s� pde ser procedimento ou fun��o */
            /* Indica que n�o � parametro formal e indica com 2 */
            /* dizendo que vem de chamada de procedimento ou fun��o */

            empilha_Inteiro ( p_eh_parametro_formal, 2);
            } var_chama_proc_func
            {
            desempilha_Inteiro ( p_eh_parametro_formal);
            }
;


rotulo_para_goto: DOIS_PONTOS
            {
            /* Verifica se o label foi declarado */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_rotulo, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Rotulo '%s' n�o foi declarada", nome_var_proc_func);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e n�o como 'rotulo'", nome_var_proc_func, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            /* Atribui o nivel lexico ao rotulo */
            dados_simbolo1->nivel_lexico = nivel_lexico;


            sprintf ( dados, "ENRT %d, %d", nivel_lexico, num_vars);
            geraCodigo ( dados_simbolo1->rotulo, dados);
            } comando_sem_ponto_e_virgula
;


atribuicao: ATRIBUICAO
            {
            /* Verifica se a vari�vel foi declarada */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_var_simples, dados_simbolo1->categoria) != 0 &&  strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) != 0 && strcmp ( categoria_funcao, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Vari�vel '%s' n�o foi declarada", nome_var_proc_func);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e n�o como 'vari�vel'", nome_var_proc_func, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            /* Indica que n�o � passagem de parametro e que est� indica com '0' */
            /* que esta indo de atribui��o */
            empilha_Inteiro ( p_eh_parametro_formal, 0);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para n�o perder na recurs�o */
            /* A pilha de tipos pode mudar caso haja uma chamada de fun��o com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_num_termos, 0);

            /* Guarda o nome da vari�vel */
            nome_var = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_var, nome_var_proc_func);
            empilha_String ( p_nomes, nome_var);

            } expressao_aritmetica
            {
            /* Reccupera vari�vel de atribui��o */
            desempilha_String ( p_nomes, &nome_var);
            strcpy ( nome_var_proc_func, nome_var);

            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "Problema o tentar encontrar a variavel de atribui��o em atribui��o\n");
                exit ( 1);
            }

            num_termos = desempilha_Inteiro ( p_num_termos);

            desempilha_Inteiro ( p_eh_parametro_formal);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

            /* Checa se o tipo do resultado da express�o corresponde a vari�vel que vai receber a express�o */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                /* Se � fun��o */
                if ( strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0) {
                    if ( strcmp ( dados_simbolo1->tipo_retorno, tipo_expressao) != 0) {
                        sprintf ( dados, "Tipo para retorno da fun��o '%s' � incopativel com um elemento da expressao", dados_simbolo1->simbolo);
                        imprimeErro ( dados );
                        exit ( 1);
                    }
                }
                /* Sen�o � uma vari�vel ou parametro por refer�ncia */
                else {
                    if ( strcmp ( dados_simbolo1->tipo, tipo_expressao) != 0) {
                        sprintf ( dados, "Tipo do receptor '%s' � incopativel com um elemento da expressao", dados_simbolo1->simbolo);
                        imprimeErro ( dados );
                        exit ( 1);
                    }
                }
            }

            /* Se � parametro passado por valor, ele n�o pode receber um valor */
            if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0 && strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) == 0) {
                sprintf ( dados, "Vari�vel '%s' foi passada como valor e n�o pode receber atribui��o", dados_simbolo1->simbolo);
                imprimeErro ( dados);
                exit ( 1);
            }
            /* Sen�o ou ele � uma v�riavel simples, retorno da fun��o ou passado por refer�ncia*/
            else {

                /* Se � um retorno de fun��o ou passado por refer�ncia */
                if ( strcmp ( categoria_var_simples, dados_simbolo1->categoria) != 0 && strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) != 0 ) {
                    /* Se � retorno de fun��o */
                    if ( strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0 ) {
                        procura_prox_simb ( dados_simbolo1, &dados_simbolo2);

                        /* Se a fun��o n�o tem parametros */
                        if ( dados_simbolo2 == NULL ) {
                            sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                        }
                        else {

                            if ( strcmp ( categoria_parametro_formal, dados_simbolo2->categoria) != 0) {

                                sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                            }
                            /* Sen�o se tem parametros */
                            else {

                                sprintf ( dados, "ARMZ %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo2->deslocamento - 1);
                            }
                        }
                    }
                    /* Sen�o foi passado por refer�ncia */
                    else {
                        sprintf ( dados, "ARMI %d, %d", x, y);
                    }
                }
                /* Sen�o � uma vari�vel local */
                else {
                    sprintf ( dados, "ARMZ %d, %d", x, y);
                }
            }
            geraCodigo ( NULL, dados );
            }
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
            | comando_composto_2
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
            | comando_composto_2
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
            | comando_composto_2
;


leitura: LEITURA
            {
            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para n�o perder na recurs�o */
            /* A pilha de tipos pode mudar caso haja uma chamada de fun��o com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_eh_parametro_formal, 3);
            empilha_Inteiro ( p_num_termos, 0);
            } passagem_leitura_impressao
            {
            desempilha_Inteiro ( p_eh_parametro_formal);
            desempilha_Inteiro ( p_num_termos);
            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            }
;


impressao: IMPRESSAO
            {
            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para n�o perder na recurs�o */
            /* A pilha de tipos pode mudar caso haja uma chamada de fun��o com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_eh_parametro_formal, 4);
            empilha_Inteiro ( p_num_termos, 0);
            } passagem_leitura_impressao
            {
            desempilha_Inteiro ( p_eh_parametro_formal);
            desempilha_Inteiro ( p_num_termos);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            }
;


passagem_leitura_impressao: lista_var_leitura_impressao
            | ABRE_PARENTESES lista_var_leitura_impressao FECHA_PARENTESES
;


lista_var_leitura_impressao: lista_var_leitura_impressao VIRGULA
            {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se � leitura */
            if ( eh_parametro_formal == 3) {
                sprintf ( dados, "LEIT");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            } expressao_aritmetica
            {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se � leitura */
            if ( eh_parametro_formal == 3) {
                num_termos = desempilha_Inteiro ( p_num_termos);

                /* Se a expressao tem mais de um elemento na leitura */
                if ( num_termos > 1) {
                    sprintf ( dados, "Leitura n�o pode possuir uma express�o com mais de um elemento");
                    imprimeErro ( dados);
                    exit ( 1);
                }
            }
            /* Sen�o � impress�o */
            else {
                sprintf ( dados, "IMPR");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_num_termos, 0);
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
            |
            {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se � leitura */
            if ( eh_parametro_formal == 3) {
                sprintf ( dados, "LEIT");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            } expressao_aritmetica
            {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se � leitura */
            if ( eh_parametro_formal == 3) {
                num_termos = desempilha_Inteiro ( p_num_termos);

                /* Se a expressao tem mais de um elemento na leitura */
                if ( num_termos > 1) {
                    sprintf ( dados, "Leitura n�o pode possuir uma express�o com mais de um elemento");
                    imprimeErro ( dados);
                    exit ( 1);
                }
            }
            /* Sen�o � impress�o */
            else {
                sprintf ( dados, "IMPR");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_num_termos, 0);
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
;


goto: VAI_PARA IDENT
            {
            /* Verifica se o label foi declarado */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_rotulo, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Rotulo '%s' n�o foi declarada", token);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e n�o como 'rotulo'", token, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            sprintf ( dados, "DSVR %s, %d, %d", dados_simbolo1->rotulo, dados_simbolo1->nivel_lexico, nivel_lexico);
            geraCodigo ( NULL, dados);
            }
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
            sprintf ( nome_var_proc_func, "%s", token);

            num_termos = desempilha_Inteiro ( p_num_termos);

            num_termos++;
            empilha_Inteiro ( p_num_termos, num_termos);
            } var_chama_proc_func
            | NUMERO
            {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);

            /* Salva o tipo do termo */
            tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( tipo_fator, tipo_inteiro);

            empilha_String ( p_tipos, tipo_fator);

            num_termos = desempilha_Inteiro ( p_num_termos);

            /* Soma 2 para caso seja expressao de parametro */
            /* com n�mero ou mais de uma vari�vel na expressao ser incompativel */
            /* com passagem por refer�ncia */
            num_termos = num_termos + 2;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
            | ABRE_PARENTESES expressao_aritmetica FECHA_PARENTESES
            {
            /* Salva o tipo do termo */
//            tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
//            strcpy ( tipo_fator, tipo_inteiro);
//            empilha_String ( p_tipos, tipo_fator);
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
                sprintf ( dados, "Vari�vel '%s' n�o foi declarada", token);
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


var_chama_proc_func: {
            /* 1 - Caso venha de atribui��o->expressao cateoria1 = var_simples */
            /* 2 - Caso venha de procedimento ou fun��o cateoria1 = procedimento */
            /* 3 - Caso venha de lita de parametros->expressao pode ser var_simples, parametro_formal ou funcao */
            /* Para os 2 casos o outro parametro pode ser fun��o */

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            /* Se n�o encontrar o simbolos como var_simples/procedimento ou funcao e n�o � parametro_formal */
            if ( dados_simbolo1 == NULL) {
                if ( eh_parametro_formal == 0 || eh_parametro_formal == 1 || eh_parametro_formal == 3 || eh_parametro_formal == 4){
                    sprintf ( dados, "Variavel ou Funcao '%s' nao foi declarada", nome_var_proc_func);
                    imprimeErro ( dados);
                }
                else {
                    sprintf ( dados, "Procedimento ou Funcao '%s' nao foi declarada", nome_var_proc_func);
                    imprimeErro ( dados);
                }
                exit ( 1);
            }
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);

            /* Se o simbolo � uma fun��o mas n�o � na leitura gera o c�digo de retorno antes de empilhar os parametros */
            if ( dados_simbolo1 != NULL && strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0 && eh_parametro_formal != 3) {
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            num_parametros = 0;
            }
            passagem
;


passagem: ABRE_PARENTESES
            {
            /* Salva o nome da fun��o antes de iniciar leitura dos parametros */
            /* Tamb�m salva a quantidade de parametros */
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

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);
            /* Se simbolo � passagem de parametro, procedimento ou var_simples */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);

            /* Se � passagem de parametro de chamada de procedimento ou fun��o */
            if ( eh_parametro_formal == 1) {
                desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                /* Salva o tipo do parametro */
                tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                strcpy (tipo_fator, dados_simbolo1->tipo);
                empilha_String ( p_tipos, tipo_fator);

                empilha_pilhas_String ( p_p_tipos, p_tipos);

                /* Bsuca a fun��o para checar os parametros */
                desempilha_String ( p_nomes, &nome_proc_func);

                procura_simb ( nome_proc_func, &x_proc_func, &y_proc_func, &tipo_proc_func, &dados_simbolo2);
                if ( dados_simbolo2 == NULL){
                    printf ( "O simbolo %s n�o foi encontrado em procura_simb var_chama_proc_func_2\n", dados_simbolo1->simbolo);
                    exit ( 1);
                }

                num_parametros_aux = desempilha_Inteiro ( p_num_parametros);

                /* Precisa somar +1 pois a vari�vel ainda n�o foi incluida procedimento/fun��o */
                procura_Tipo_Passagem ( dados_simbolo2, &parametro_valor_referencia, num_parametros_aux + 1);

                empilha_Inteiro ( p_num_parametros, num_parametros_aux);
                empilha_String ( p_nomes, nome_proc_func);
                /* Fim da Bsuca a fun��o para checar os parametros */

                /* Se � a vari�vel foi passada como parametro */
                if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0) {

                    /* Se a pssagem foi por valor */
                    if ( strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) == 0) {
                        /* Se procedimento/fun��o chamada recebe valor */
                        if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0) {
                            sprintf ( dados, "CRVL %d, %d", x, y);
                        }
                        /* Sen�o chamada recebe referencia */
                        else {
                            sprintf ( dados, "Vari�vel '%s' que possui valor n�o pode ser passada para uma procedimento/fun��o como refer�ncia", dados_simbolo1->simbolo);
                            imprimeErro ( dados);
                            exit ( 1);
                        }
                    }
                    /* Sen�o a passagem foi por refer�ncia */
                    else {
                        /* Se procedimento/fun��o chamada recebe valor */
                        if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0)
                            sprintf ( dados, "CRVI %d, %d", x, y);
                        /* Sen�o chamada recebe referencia */
                        else
                            sprintf ( dados, "CRVL %d, %d", x, y);
                    }
                    geraCodigo ( NULL, dados);
                }
                /* Sen�o � uma vari�vel */
                else {
                    /* Se procedimento/fun��o chamada recebe valor */
                    if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0) {
                        sprintf ( dados, "CRVL %d, %d", x, y);
                        geraCodigo ( NULL, dados);
                    }
                    /* Sen�o chamada recebe referencia */
                    else {
                        sprintf ( dados, "CREN %d %d", x, y);
                        geraCodigo ( NULL, dados);
                    }
                }
            }
            /* Sen�o passagem por parametro � procedimento, fun��o ou atribui��o */
            else {
                /* Se � procedimento */
                if ( strcmp( categoria_procedimento, dados_simbolo1->categoria) == 0) {
                    /* Se foi chamado fora da atribui��o */
                    if ( eh_parametro_formal == 2) {
                        sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                        geraCodigo ( NULL, dados );
                    }
                    /* Sen�o se foi chamado dentro da atribui��o */
                    else {
                        sprintf ( dados, "O '%s' � um procedimento e procedimentos n�o podem ser passado em atrbui�oes", dados_simbolo1->simbolo);
                        imprimeErro ( dados);
                        exit ( 1);
                    }
                }
                /* Sen�o � procedimento � fun��o ou atribui��o */
                else {

                    /* Se � fun��o e n�o � da leitura */
                    if ( strcmp( categoria_funcao, dados_simbolo1->categoria) == 0 && eh_parametro_formal != 3) {

                        if ( dados_simbolo1->qtd_parametros != num_parametros) {
                            sprintf ( dados, "Para fun��o '%s' numero de parametros incorreto", nome_var_proc_func);
                            imprimeErro ( dados);
                            exit ( 1);
                        }

                        sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                        geraCodigo ( NULL, dados );

                        /* Se a fun��o n�o faz parte de uma express�o da atribui��o */
                        /* No caso ele n�o faz parte disso ' a := funcao ' */
                        /* Empilha o tipo do vari�vel de retorno */
                        if ( eh_parametro_formal != 2) {
                            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                            /* Salva o tipo de retorno da fun��o */
                            tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                            strcpy (tipo_fator, dados_simbolo1->tipo_retorno);
                            empilha_String ( p_tipos, tipo_fator);

                            empilha_pilhas_String ( p_p_tipos, p_tipos);
                        }
                        /* Sen�o foi chamado uma fun��o sem atribui��o */
                        else {
                            sprintf ( dados, "DMEN 1");
                            geraCodigo ( NULL, dados);
                        }
                    }
                    /* Sen�o � uma express�o de atribui��o */
                    else {

                        desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                        /* Salva o tipo vari�vel */
                        tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);

                        /* Se � fun��o */
                        if ( dados_simbolo1->tipo_retorno != NULL)
                            strcpy (tipo_fator, dados_simbolo1->tipo_retorno);
                        /* Sen�o � vari�vel */
                        else
                            strcpy (tipo_fator, dados_simbolo1->tipo);

                        empilha_String ( p_tipos, tipo_fator);

                        empilha_pilhas_String ( p_p_tipos, p_tipos);

                        /* Se � retorno de fun��o */
                        if ( strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0 ) {
                            procura_prox_simb ( dados_simbolo1, &dados_simbolo2);

                            /* Se a fun��o n�o tem parametros */
                            if ( dados_simbolo2 == NULL ) {
                                sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                            }
                            else {

                                if ( strcmp ( categoria_parametro_formal, dados_simbolo2->categoria) != 0) {

                                    sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                                }
                                /* Sen�o se tem parametros */
                                else {

                                    sprintf ( dados, "ARMZ %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo2->deslocamento - 1);
                                }
                            }
                        }
                        /* Sen�o � uma vari�vel */
                        else {
                            /* Se � a vari�vel foi passada como parametro */
                            if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0) {
                                /* Se a pssagem foi por valor */
                                if ( strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) == 0) {
                                /* Se � parametro de leitura */
                                    if ( eh_parametro_formal == 3) {
                                        sprintf ( dados, "Vari�vel '%s' foi passada como valor e n�o pode receber atribui��o", dados_simbolo1->simbolo);
                                        imprimeErro ( dados);
                                        exit ( 1);
                                    }
                                    else {
                                        sprintf ( dados, "CRVL %d, %d", x, y);
                                    }
                                }
                                /* Sen�o a passagem foi por refer�ncia */
                                else {
                                    /* Se � parametro de leitura */
                                    if ( eh_parametro_formal == 3)
                                        sprintf ( dados, "ARMI %d, %d", x, y);
                                    else
                                        sprintf ( dados, "CRVI %d, %d", x, y);
                                }
                            }
                            /* Sen�o � uma vari�vel */
                            else {
                                if ( eh_parametro_formal == 3)
                                    sprintf ( dados, "ARMZ %d, %d", x, y);
                                else
                                    sprintf ( dados, "CRVL %d, %d", x, y);
                            }
                        }
                        /* Fim do if Se retorno de fun��o */
                        geraCodigo ( NULL, dados);
                    }
                    /* Fim do if Se � fun��o e n�o � da leitura */
                }
                /* Fim do if Se � procedimento */
            }
            /* Fim do if Se � passagem parametro */
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

            /* Empilha a pilha de tipos para n�o perder na recurs�o */
            /* A pilha de tipos pode mudar caso haja uma chamada de fun��o com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_num_termos, 0);

            } expressao_aritmetica
            {

            num_termos = desempilha_Inteiro ( p_num_termos);

            desempilha_Inteiro ( p_eh_parametro_formal);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);

            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);

            /* Checar se o tipo do resultado da express�o corresponde ao parametro do procedimento ou fun��o */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);

            /* Para cada tipo de variavel da expressao */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux, num_termos) != 1) {
                    sprintf ( dados, "Tipo do parametro '%d' do procedimento ou fun��o '%s' incompativel com declara��o", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
            |
            {
            empilha_Inteiro ( p_eh_parametro_formal, 1);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para n�o perder na recurs�o */
            /* A pilha de tipos pode mudar caso haja uma chamada de fun��o com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_num_termos, 0);

            } expressao_aritmetica
            {

            num_termos = desempilha_Inteiro ( p_num_termos);

            desempilha_Inteiro ( p_eh_parametro_formal);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);

            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);

            /* Checar se o tipo do resultado da express�o corresponde ao parametro do procedimento ou fun��o */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);

            /* Para cada tipo de variavel da expressao */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux, num_termos) != 1) {
                    sprintf ( dados, "Tipo do parametro '%d' do procedimento ou fun��o '%s' incompativel com declara��o", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
            |
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
    inicia_pilha_strings ();
    inicia_pilha_pilhas_strings ();
    inicia_pilha_inteiros ();
    inicia_pilha_inteiros ();

    yyin = fp;
    yyparse ();

    return 0;
}
