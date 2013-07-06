/* -------------------------------------------------------------------
 *            Arquivo: compilaodr.h
 * -------------------------------------------------------------------
 *              Autor: Bruno Muller Junior
 *               Data: 08/2007
 *      Atualizado em: [15/03/2012, 08h:22m]
 *
 * -------------------------------------------------------------------
 *
 * Tipos, protótipos e vaiáveis globais do compilador
 *
 * ------------------------------------------------------------------- */

#define TAM_TOKEN 100
#define TAM_TB_SIMB 10
#define TAM_ROTULO 100
#define TAM_DADOS 100

typedef enum simbolos {
  simb_program, simb_var, simb_begin, simb_end,
  simb_identificador, simb_numero,
  simb_ponto, simb_virgula, simb_ponto_e_virgula, simb_dois_pontos,
  simb_atribuicao, simb_abre_parenteses, simb_fecha_parenteses,
  simb_soma, simb_subtracao, simb_multiplicacao, simb_divisao,
  simb_igual, simb_diferente, simb_maior, simb_menor, simb_nao, simb_e, simb_ou,
  simb_enquanto, simb_para, simb_faca, simb_repita, simb_ate, simb_se, simb_entao, simb_senao,
  simb_procedimento, simb_funcao
} simbolos;


/* -------------------------------------------------------------------
 * Tabela de simbolos
 * ------------------------------------------------------------------- */

typedef struct tabela_simbolos {
    char simbolo[50];
    char tipo[20];
    char categoria[20];
    int qtd_parametros;
    int nivel_lexico;
    int desloc;
} tabela_simbolos;

/* -------------------------------------------------------------------
 * Pilha de rotulos
 * ------------------------------------------------------------------- */
typedef struct rotulos_pilha {
    char *rotulo;
    struct rotulos_pilha *prox;
} rotulos_p;

typedef struct pilha_rotulos {
    rotulos_p *primeiro;
    int tam;
} pilha_r;

/* -------------------------------------------------------------------
 * variáveis globais
 * ------------------------------------------------------------------- */

extern simbolos simbolo, relacao;
extern char token[TAM_TOKEN];
extern int nivel_lexico;
extern int desloc;
extern int nl;

simbolos simbolo, relacao;
char token[TAM_TOKEN];

tabela_simbolos *tb_simb;

pilha_r *p_rotulos;
char *rotulo1, *rotulo2; // rotulos
