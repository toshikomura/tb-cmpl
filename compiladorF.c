
/* -------------------------------------------------------------------
 *            Aquivo: compilador.c
 * -------------------------------------------------------------------
 *              Autor: Bruno Muller Junior
 *               Data: 08/2007
 *      Atualizado em: [15/03/2012, 08h:22m]
 *
 * -------------------------------------------------------------------
 *
 * Funções auxiliares ao compilador
 *
 * ------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"


/* -------------------------------------------------------------------
 *  variáveis globais
 * ------------------------------------------------------------------- */

/* Arquivo MEPA */
FILE* fp;

/* Indica qual é o rotulo */
int valor_rotulo;

void inicia_variaveis_globais () {

    dados = malloc ( sizeof (char)*TAM_TOKEN);
    categoria = malloc ( sizeof (char)*TAM_TOKEN);
    categoria_procedimento = malloc ( sizeof (char)*TAM_TOKEN);
    categoria_funcao = malloc ( sizeof (char)*TAM_TOKEN);
    categoria_parametro_formal = malloc ( sizeof (char)*TAM_TOKEN);
    categoria_var_simples = malloc ( sizeof (char)*TAM_TOKEN);
    categoria_parametro_valor = malloc ( sizeof (char)*TAM_TOKEN);
    tipo = malloc ( sizeof (char)*TAM_TOKEN);
    parametro_valor_referencia = malloc ( sizeof (char)*TAM_TOKEN);
    tipo_retorno = malloc ( sizeof (char)*TAM_TOKEN);
    nome_var_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
    tipo_inteiro = malloc ( sizeof (char)*TAM_TOKEN);

    fp = NULL;
    valor_rotulo = 0;
    num_vars = 0;
    nivel_lexico = 0;
    deslocamento = 0;

    sprintf ( tipo_inteiro, "integer");
    sprintf ( categoria_procedimento, "procedimento");
    sprintf ( categoria_funcao, "funcao");
    sprintf ( categoria_parametro_formal, "parametro_formal");
    sprintf ( categoria_var_simples, "var_simples");
    sprintf ( categoria_parametro_valor, "var_valor");
}

/* Função que gera código MEPA */
void geraCodigo (char* rot, char* comando) {

  if (fp == NULL) {
    fp = fopen ("MEPA", "w");
  }

  if ( rot == NULL ) {
    fprintf(fp, "     %s\n", comando); fflush(fp);
  } else {
    fprintf(fp, "%s: %s \n", rot, comando); fflush(fp);
  }
}

/* Função que imprime erros de compilação */
int imprimeErro ( char* erro ) {
  fprintf (stderr, "Erro na linha %d - %s\n", nl, erro);
  exit(-1);
}

/* Inicia pilha da tabela de simbolos */
void inicia_pilha_tabela_simbolos () {

    p_tb_simb = malloc( sizeof (pilha_tb_simb));
    p_tb_simb->primeiro = NULL;
    p_tb_simb->tam = 0;
}

/* Função que impreime pilha da tabela de simbolos */
void imprime_Simbolo_TB_SIMB () {

    printf ( "\n\nTABELA DE SIMBOLOS\n\n");

    printf ( "|| simb | tipo | categ | rotu | tip_param | tip_retor | niv lex | desloc | qtd_param\n");

    tipos_parametros_l *tip_para_aux;
    no_tabela_simbolos_p *slot_tb_simb_aux = p_tb_simb->primeiro;

    while ( slot_tb_simb_aux != NULL) {
        printf ( "|| %s | %s | %s | %s | %s | %s | %d | %d | %d ", slot_tb_simb_aux->simbolo, slot_tb_simb_aux->tipo, slot_tb_simb_aux->categoria, slot_tb_simb_aux->rotulo, slot_tb_simb_aux->parametro_valor_referencia, slot_tb_simb_aux->tipo_retorno, slot_tb_simb_aux->nivel_lexico, slot_tb_simb_aux->deslocamento, slot_tb_simb_aux->qtd_parametros);

        tip_para_aux = slot_tb_simb_aux->primeiro_tipo_parametro;

        while ( tip_para_aux != NULL) {
            printf ( "|- %s | %s ", tip_para_aux->valor_referencia, tip_para_aux->tipo);
            tip_para_aux = tip_para_aux->prox;
        }

        printf ( "||\n");

        slot_tb_simb_aux = slot_tb_simb_aux->prox;
    }

}

/* Função que insere um simbolo na tabela de simbolos */
void empilha_Simbolo_TB_SIMB ( char *simb, char *ca, char *pa_va_re, char *rot, int nivel_l, int des) {

    char *simbol = malloc ( sizeof ( char)*TAM_TOKEN);
    char *cate = malloc ( sizeof ( char)*TAM_TOKEN);
    char *para_valo_refe = malloc ( sizeof ( char)*TAM_TOKEN);

    strcpy( simbol, simb);
    strcpy( cate, ca);
    strcpy( para_valo_refe, pa_va_re);

    no_tabela_simbolos_p *novo_slot_tb_simb = malloc( sizeof ( no_tabela_simbolos_p ));

    novo_slot_tb_simb->simbolo = simbol;
    novo_slot_tb_simb->categoria = cate;
    novo_slot_tb_simb->rotulo = rot;
    novo_slot_tb_simb->parametro_valor_referencia = para_valo_refe;

    novo_slot_tb_simb->nivel_lexico = nivel_l;
    novo_slot_tb_simb->deslocamento = des;
    novo_slot_tb_simb->qtd_parametros = 0;

    novo_slot_tb_simb->prox = p_tb_simb->primeiro;

    p_tb_simb->primeiro = novo_slot_tb_simb;
    p_tb_simb->tam++;

    imprime_Simbolo_TB_SIMB ();

}

/* Função que insere tipo do simbolo na tabela de simbolos */
void insere_tipo_Simbolo_TB_SIMB ( char *ti, int qtd_vars) {

    char *tip = malloc ( sizeof ( char)*TAM_TOKEN);
    int i;

    strcpy( tip, ti);

    no_tabela_simbolos_p *slot_tb_simb_aux = p_tb_simb->primeiro;

    for ( i = 0; i < qtd_vars; i++) {
        slot_tb_simb_aux->tipo = tip;
        slot_tb_simb_aux = slot_tb_simb_aux->prox;
    }

    imprime_Simbolo_TB_SIMB ();

}

/* Função que insere tipo de parametro da função ou procedimento na tabela de simbolos */
/* Além disso a função insere a quantidade de parametros */
void insere_tipo_parametro_Simbolo_TB_SIMB ( char *simb, char *va_re, char *ti, int qtd_param) {

    char *tip = malloc ( sizeof ( char)*TAM_TOKEN);
    char *var_refer = malloc ( sizeof ( char)*TAM_TOKEN);
    int i, j;
    tipos_parametros_l *tip_para_aux;
    no_tabela_simbolos_p *slot_tb_simb_aux;

    strcpy ( tip, ti);
    strcpy ( var_refer, va_re);

    for ( j = 0; j < qtd_param; j++) {

        tipos_parametros_l *tip_para = malloc ( sizeof ( tipos_parametros_l ));
        slot_tb_simb_aux = p_tb_simb->primeiro;

        tip_para->valor_referencia = var_refer;
        tip_para->tipo = tip;
        tip_para->prox = NULL;

        while ( slot_tb_simb_aux != NULL && strcmp( slot_tb_simb_aux->simbolo, simb)) {
            slot_tb_simb_aux->tipo = tip;
            slot_tb_simb_aux = slot_tb_simb_aux->prox;
        }

        if ( slot_tb_simb_aux != NULL) {

            if ( slot_tb_simb_aux->qtd_parametros == 0) {
                slot_tb_simb_aux->primeiro_tipo_parametro = tip_para;
                slot_tb_simb_aux->qtd_parametros = 1;
            }
            else {

                tip_para_aux = slot_tb_simb_aux->primeiro_tipo_parametro;

                for ( i = 1; i < slot_tb_simb_aux->qtd_parametros; i++)
                    tip_para_aux = tip_para_aux->prox;

                tip_para_aux->prox = tip_para;
                slot_tb_simb_aux->qtd_parametros++;
            }
        }
    }

    imprime_Simbolo_TB_SIMB ();

}

/* Função que insere tipo de retorno de uma função ou procedimento na tabela de simbolos */
void insere_tipo_retorno_Simbolo_TB_SIMB ( char *simb, char *ti) {

    char *tip = malloc ( sizeof ( char)*TAM_TOKEN);

    strcpy ( tip, ti);

    no_tabela_simbolos_p *slot_tb_simb_aux = p_tb_simb->primeiro;

    while ( slot_tb_simb_aux != NULL && strcmp( slot_tb_simb_aux->simbolo, simb))
        slot_tb_simb_aux = slot_tb_simb_aux->prox;

    if ( slot_tb_simb_aux != NULL)
        slot_tb_simb_aux->tipo_retorno = tip;

    imprime_Simbolo_TB_SIMB ();

}

/* Função que retira um simbolo da tabela de simbolos */
void desempilha_Simbolo_TB_SIMB ( char **simb) {

    no_tabela_simbolos_p *slot_tb_simb_retirado;

    if ( p_tb_simb->tam == 0){

        *simb = NULL;
    }
    else
    {
        slot_tb_simb_retirado = p_tb_simb->primeiro;
        p_tb_simb->primeiro = slot_tb_simb_retirado->prox;
        p_tb_simb->tam--;

        *simb = slot_tb_simb_retirado->simbolo;

    }

    imprime_Simbolo_TB_SIMB ();

}

/* Função que procura um simbolo na tabela de simbolos */
/* Se encontra retorna o nivel e deslocamento pelo parametros */
/* Se não encontra retorna -99 */
void procura_simb ( char *simb, int *nivel_lexico, int *desloc, char **tip, no_tabela_simbolos_p **slot_tb_simb_retorno) {

    *nivel_lexico = -99; // valor nao muda se nao encontrar simb na tabela
    *desloc = -99;

    no_tabela_simbolos_p *slot_tb_simb_aux = p_tb_simb->primeiro;

    while ( slot_tb_simb_aux != NULL && strcmp( slot_tb_simb_aux->simbolo, simb ) )
        slot_tb_simb_aux = slot_tb_simb_aux->prox;

    if ( slot_tb_simb_aux != NULL){
        *nivel_lexico = slot_tb_simb_aux->nivel_lexico;
        *desloc = slot_tb_simb_aux->deslocamento;
        *tip = slot_tb_simb_aux->tipo;

        *slot_tb_simb_retorno =  slot_tb_simb_aux;

    }
    else
        *slot_tb_simb_retorno = NULL;

}

/* Função que gera próximo rotulo */
void gera_Proximo_Rotulo ( char **new_rotulo) {

    char *rotulo = malloc( sizeof (char) * TAM_ROTULO);

    sprintf( rotulo, "R%d", valor_rotulo);
    valor_rotulo++;

    *new_rotulo = rotulo;

}

/* Inicia pilha para strings */
void inicia_pilha_strings () {

    p_rotulos = malloc( sizeof (pilha_s));
    p_rotulos->primeiro = NULL;
    p_rotulos->tam = 0;

    p_nomes = malloc( sizeof (pilha_s));
    p_nomes->primeiro = NULL;
    p_nomes->tam = 0;

}

/* Função que empilha strings */
void empilha_String ( pilha_s *p, char *str ) {

    strings_p *nova_string = malloc( sizeof ( strings_p ));

    nova_string->string = str;
    nova_string->prox = p->primeiro;
    p->primeiro = nova_string;
    p->tam++;
}

/* Função que desempilha strings */
void desempilha_String ( pilha_s *p, char **str) {

    strings_p *string_retirada;

    if ( p->tam == 0){

        printf ( "Pilha de strings esta vazia\n");
        exit ( 1);
    }
    else
    {

        string_retirada = p->primeiro;
        p->primeiro = string_retirada->prox;
        p->tam--;

        *str = string_retirada->string;

    }
}

/* Inicia pilha de pilha de strings */
void inicia_pilha_pilhas_strings () {

    p_p_tipos = malloc( sizeof (pilha_pilhas_s));
    p_p_tipos->primeiro = NULL;
    p_p_tipos->tam = 0;

}

/* Função que empilha pilhas de strings */
void empilha_pilhas_String ( pilha_pilhas_s *p, pilha_s *str ) {

    strings_pilhas_p *nova_pilha = malloc( sizeof ( strings_pilhas_p ));

    nova_pilha->local_pilha = str;
    nova_pilha->prox = p->primeiro;
    p->primeiro = nova_pilha;
    p->tam++;
}

/* Função que desempilha pilhas de strings */
void desempilha_pilhas_String ( pilha_pilhas_s *p, pilha_s **str) {

    strings_pilhas_p *pilha_retirada;

    if ( p->tam == 0){

        printf ( "Pilha de pilhas de strings esta vazia\n");
        exit ( 1);
    }
    else
    {

        pilha_retirada = p->primeiro;
        p->primeiro = pilha_retirada->prox;
        p->tam--;

        *str = pilha_retirada->local_pilha;

    }
}

/* Inicia pilha para deslocamentos */
void inicia_pilha_inteiros () {

    p_deslocamentos = malloc ( sizeof ( pilha_i));
    p_deslocamentos->primeiro = NULL;
    p_deslocamentos->tam = 0;

    p_num_vars = malloc ( sizeof ( pilha_i));
    p_num_vars->primeiro = NULL;
    p_num_vars->tam = 0;

    p_num_parametros = malloc ( sizeof ( pilha_i));
    p_num_parametros->primeiro = NULL;
    p_num_parametros->tam = 0;

    p_eh_parametro_formal = malloc ( sizeof ( pilha_i));
    p_eh_parametro_formal->primeiro = NULL;
    p_eh_parametro_formal->tam = 0;

    p_num_termos = malloc ( sizeof ( pilha_i));
    p_num_termos->primeiro = NULL;
    p_num_termos->tam = 0;
}

/* Função que empilha deslocamento */
void empilha_Inteiro ( pilha_i *p, int inteiro) {

    inteiros_p *novo_inteiro = malloc( sizeof ( inteiros_p ));

    novo_inteiro->inteiro = inteiro;
    novo_inteiro->prox = p->primeiro;
    p->primeiro = novo_inteiro;
    p->tam++;
}

/* Função que desempilha deslocamentos */
int desempilha_Inteiro ( pilha_i *p) {

    inteiros_p *inteiro_retirado;

    if ( p->tam == 0){

        printf ( "Pilha de Inteiros esta vazia\n");
        exit ( 1);
    }
    else
    {
        inteiro_retirado = p->primeiro;
        p->primeiro = inteiro_retirado->prox;
        p->tam--;

        return inteiro_retirado->inteiro;

    }
}

/* Função que verifica se tipo do parametro declarado na chamada corresponde ao tipo do parametro */
/* da função que está na tabela de simbolos */
int chaca_tipo_parametro ( no_tabela_simbolos_p *slot_tb_simb_aux, char *ti, int parametro_n, int qtd_term) {

    int j = 1;
    tipos_parametros_l *tip_para_aux = slot_tb_simb_aux->primeiro_tipo_parametro;

    while ( tip_para_aux != NULL && j < parametro_n) {
        tip_para_aux = tip_para_aux->prox;
        j++;
    }

    /* Se o tipo do parametro não existe na tabela de simbolos */
    if ( tip_para_aux == NULL)

        return -99;

    else {

        /* Se o tipo não corresponde com o parametro */
        if ( strcmp ( tip_para_aux->tipo, ti) != 0 )

            return -99;

        else {

            /* Caso o parametro seja um valor mas na declaração recebe um endereço */
            if ( strcmp ( tip_para_aux->valor_referencia, categoria_parametro_valor) != 0 && qtd_term > 1)

                return 99;

            else

                return 1;

        }
    }
}

/* Função que deleta itens que não podem mais ser usados */
void deleta_itens_Tabela_Simbolos ( no_tabela_simbolos_p *slot_tb_simb_proc_func, no_tabela_simbolos_p **slot_tb_simb_return) {

    no_tabela_simbolos_p *slot_tb_simb_aux = p_tb_simb->primeiro;

    while ( slot_tb_simb_aux != NULL && slot_tb_simb_aux != slot_tb_simb_proc_func) {
        slot_tb_simb_aux = slot_tb_simb_aux->prox;
    }

    if ( slot_tb_simb_aux == NULL) {

        printf ( "Não encontrou procedimento ou função para deleta_Itens_Tabela_Simbolos\n");
        exit ( 1);
    }
    else {
        p_tb_simb->primeiro = slot_tb_simb_aux;

        *slot_tb_simb_return = p_tb_simb->primeiro;

    }

}

/* Função que procura o tipo (valor/referencia) de passagem do parametro */
void procura_Tipo_Passagem ( no_tabela_simbolos_p *slot_tb_simb_proc_func, char **tip_val_ref, int parametro_n) {

    int j = 1;
    tipos_parametros_l *tip_para_aux = slot_tb_simb_proc_func->primeiro_tipo_parametro;

    while ( tip_para_aux != NULL && j < parametro_n) {
        tip_para_aux = tip_para_aux->prox;
        j++;
    }

    if ( tip_para_aux == NULL) {

        printf ( "Não encontrou o tipo de passagem (valor/referencia) em procura_tipo_passagem\n");
        exit ( 1);
    }
    else
        *tip_val_ref = tip_para_aux->valor_referencia;
}

/* Função que insere os enderços de deslocamento dos parametros procedimentou ou função */
void insere_Endereco_parametro ( no_tabela_simbolos_p *slot_tb_simb_proc_func) {

    int j = -4;
    int i = 0;
    no_tabela_simbolos_p *slot_tb_simb_aux = p_tb_simb->primeiro;

    while ( i < slot_tb_simb_proc_func->qtd_parametros) {
        slot_tb_simb_aux->deslocamento = j;
        j--;
        slot_tb_simb_aux = slot_tb_simb_aux->prox;
        i++;
    }

    if ( slot_tb_simb_aux == NULL) {
        printf ( "Não encontrou procedimento ou função em insere_Endereco_parametro\n");
        exit ( 1);
    }

}
