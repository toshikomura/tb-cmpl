
/* -------------------------------------------------------------------
 *            Aquivo: compilador.c
 * -------------------------------------------------------------------
 *              Autor: Bruno Muller Junior
 *               Data: 08/2007
 *      Atualizado em: [15/03/2012, 08h:22m]
 *
 * -------------------------------------------------------------------
 *
 * Fun��es auxiliares ao compilador
 *
 * ------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"


/* -------------------------------------------------------------------
 *  vari�veis globais
 * ------------------------------------------------------------------- */

/* Arquivo MEPA */
FILE* fp=NULL;

char *rotulo;
char *rotulo2;

/* Indica qual � o rotulo */
int valor_rotulo;

/* Fun��o que gera c�digo MEPA */
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

/* Fun��o que imprime erros de compila��o */
int imprimeErro ( char* erro ) {
  fprintf (stderr, "Erro na linha %d - %s\n", nl, erro);
  exit(-1);
}

/* Fun��o que procura um simbolo na tabela de simbolos */
/* Se encontra retorna o nivel e deslocamento */
/* Se n�o encontra retorna NULL */
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

/* Fun��o que gera pr�ximo rotulo */
void gera_Proximo_Rotulo () {

    if ( rotulo == NULL){
        rotulo = malloc( sizeof (char) * TAM_ROTULO);
        rotulo2 = malloc( sizeof (char) * TAM_ROTULO);
        valor_rotulo = 0;
    }
    sprintf( rotulo, "R%d", valor_rotulo);
    valor_rotulo++;
}
