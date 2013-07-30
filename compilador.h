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
  simb_procedimento, simb_funcao,
  simb_leitura, simb_impressao,
  simb_rotulo, simb_vai_para,
  simb_div_int
} simbolos;


/* -------------------------------------------------------------------
 * Tabela de simbolos
 * ------------------------------------------------------------------- */
/* -------------------------------------------------------------------
 * Pilha da Tabeka de simbolos
 * ------------------------------------------------------------------- */

typedef struct tipos_parametros {
    char *tipo;
    char *valor_referencia;
    struct tipos_parametros *prox;
} tipos_parametros_l;


typedef struct no_tabela_simbolos {
    char *simbolo;
    char *tipo;
    char *categoria;
    char *tipo_retorno;
    char *rotulo;
    char *parametro_valor_referencia;
    int qtd_parametros;
    int nivel_lexico;
    int deslocamento;
    struct no_tabela_simbolos *prox;
    tipos_parametros_l *primeiro_tipo_parametro;
} no_tabela_simbolos_p;

typedef struct pilha_tabela_simb {
    no_tabela_simbolos_p *primeiro;
    int tam;
} pilha_tb_simb;

/* -------------------------------------------------------------------
 * Pilha de strings
 * ------------------------------------------------------------------- */
typedef struct strings_pilha {
    char *string;
    struct strings_pilha *prox;
} strings_p;

typedef struct pilha_strings {
    strings_p *primeiro;
    int tam;
} pilha_s;


/* -------------------------------------------------------------------
 * Pilha de pilhas de strings
 * ------------------------------------------------------------------- */
typedef struct strings_pilhas_pilha {
    pilha_s *local_pilha;
    struct strings_pilhas_pilha *prox;
} strings_pilhas_p;

typedef struct pilha_pilhas_strings {
    strings_pilhas_p *primeiro;
    int tam;
} pilha_pilhas_s;

/* -------------------------------------------------------------------
 * Pilha de inteiros
 * ------------------------------------------------------------------- */
typedef struct inteiros_pilha {
    int inteiro;
    struct inteiros_pilha *prox;
} inteiros_p;

typedef struct pilha_inteiros {
    inteiros_p *primeiro;
    int tam;
} pilha_i;

/* -------------------------------------------------------------------
 * variáveis globais
 * ------------------------------------------------------------------- */

extern simbolos simbolo, relacao;
extern char token[TAM_TOKEN];
extern char *dados;
extern char *categoria;
extern char *categoria_procedimento;
extern char *categoria_funcao;
extern char *categoria_parametro_formal;
extern char *categoria_var_simples;
extern char *categoria_parametro_valor;
extern char *categoria_rotulo;
extern char *tipo;
extern char *parametro_valor_referencia;
extern char *tipo_retorno;
extern char *nome_var_proc_func;
extern char *tipo_inteiro;
extern char *tipo_booleano;

extern int nivel_lexico;
extern int deslocamento;

extern int nl;
extern int num_vars;

simbolos simbolo, relacao;
char token[TAM_TOKEN];

pilha_tb_simb *p_tb_simb;
pilha_s *p_rotulos;
pilha_s *p_nomes;
pilha_i *p_deslocamentos;
pilha_i *p_num_vars;
pilha_i *p_num_parametros;
pilha_i *p_eh_parametro_formal;
pilha_i *p_num_termos;
pilha_pilhas_s *p_p_tipos;
char *rotulo1, *rotulo2; // rotulos
