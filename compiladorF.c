
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
FILE* fp=NULL;

/* Indica qual é o rotulo */
int valor_rotulo = 0;

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

/* Função que procura um simbolo na tabela de simbolos */
/* Se encontra retorna o nivel e deslocamento */
/* Se não encontra retorna NULL */
procura_simb ( char *simb, int *nivel_lexico, int *desloc ) {

    int i;
    *nivel_lexico = -99; // valor nao muda se nao encontrar simb na tabela
    *desloc = -99;

    for ( i = 0; i < 100; i++){
        if ( !strcmp( tb_simb[i].simbolo, simb )){
            *nivel_lexico = tb_simb[i].nivel_lexico;
            *desloc = tb_simb[i].desloc;
            break;
        }
    }

}

/* Função que gera próximo rotulo */
char *gera_Proximo_Rotulo () {

    char *rotulo = (char *) malloc( sizeof (char) * TAM_ROTULO);

    sprintf( rotulo, "R%d", valor_rotulo);
    valor_rotulo++;

    return rotulo;

}

void inicia_pilha () {

    p_rotulos = malloc( sizeof (pilha_r));
    p_rotulos->primeiro = NULL;
    p_rotulos->tam = 0;
}

/* Função que empilha rotulos */
void empilha_Rotulo ( char *rot ) {

    rotulos_p *novo_rotulo = malloc( sizeof ( rotulos_p ));

    novo_rotulo->rotulo = rot;
    novo_rotulo->prox = p_rotulos->primeiro;
    p_rotulos->primeiro = novo_rotulo;
    p_rotulos->tam++;

}

/* Função que desempilha rotulos */
char *desempilha_Rotulo () {

    rotulos_p *rotulo_retirado;
    char *rot;

    if ( p_rotulos->tam == 0){

        return NULL;
    }
    else
    {
        rotulo_retirado = p_rotulos->primeiro;
        p_rotulos->primeiro = rotulo_retirado->prox;
        p_rotulos->tam--;

        rot = rotulo_retirado->rotulo;

        return rot;
    }
}
