%{


#include<stdio.h>
#include<string.h>

#include "compilador.h"
#include "compilador.tab.h"

//#define IMPRIME(STR) {};
#define IMPRIME(STR) printf("%s    # %s \n", STR, token);

int nl = 1;

%}

pulo_linha [\n]

igual [=]

diferente [!=]

maior [>]

menor [<]

nao [NOT]

e [AND]

ou [OR]

descarte [\t ]+

ident [a-zAZ][a-zAZ1-9]*

numero [0-9]+

comentario "(*".*"*)"

%%

{pulo_linha} {nl++;}

{descarte}

{comentario}

program { simbolo  = simb_program;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME("program ");
          return PROGRAM;
 }

var      { simbolo = simb_var;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME("var  ");
          return VAR;
 }

begin { simbolo = simb_begin;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME("begin ");
          return T_BEGIN;
 }

end { simbolo = simb_end;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME("end  ");
          return T_END;
 }

:= { simbolo = simb_atribuicao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" atribuicao  ");
          return ATRIBUICAO;
 }

\; { simbolo = simb_ponto_e_virgula;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" pt_virgula  ");
          return PONTO_E_VIRGULA;
 }

\: { simbolo = simb_dois_pontos;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" dois pontos ");
          return DOIS_PONTOS;
 }

\, { simbolo = simb_virgula;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" virgula  ");
          return VIRGULA;
 }


\. { simbolo = simb_ponto;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" ponto  ");
          return PONTO;
    }

\(  { simbolo = simb_abre_parenteses;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" abre_parenteses  ");
          return ABRE_PARENTESES;
    }

\)  { simbolo = simb_fecha_parenteses;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" fecha_parenteses ");
          return FECHA_PARENTESES;
 }

{igual} { simbolo = simb_igual;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" igual ");
          return IGUAL;
 }

{diferente} { simbolo = simb_diferente;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" diferente ");
          return DIFERENTE;
 }

{maior} { simbolo = simb_maior;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" maior ");
          return MAIOR;
 }

{menor} { simbolo = simb_menor;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" menor ");
          return MENOR;
 }

{nao} { simbolo = simb_nao;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" nao ");
          return NAO;
 }

{e} { simbolo = simb_e;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" e ");
          return E;
 }

{ou} { simbolo = simb_ou;
          strncpy ( token , yytext, TAM_TOKEN);
          IMPRIME(" ou ");
          return OU;
 }

{numero} { simbolo = simb_numero;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" numero  ");
          return NUMERO;
        }

\+  { simbolo = simb_soma;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" soma ");
          return SOMA;
 }

\-  { simbolo = simb_subtracao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" subtracao ");
          return SUBTRACAO;
 }

\*  { simbolo = simb_multiplicacao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" multiplicacao ");
          return MULTIPLICACAO;
 }

\/  { simbolo = simb_divisao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" divisao ");
          return DIVISAO;
 }

while  { simbolo = simb_enquanto;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" enquanto ");
          return ENQUANTO;
 }

for  { simbolo = simb_para;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" para ");
          return PARA;
 }

do  { simbolo = simb_faca;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" faca ");
          return FACA;
 }

repeat  { simbolo = simb_repita;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" repita ");
          return REPITA;
 }

until  { simbolo = simb_ate;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" ate ");
          return ATE;
 }

if  { simbolo = simb_se;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" se ");
          return SE;
 }

then  { simbolo = simb_entao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" entao ");
          return ENTAO;
 }

else  { simbolo = simb_senao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" senao ");
          return SENAO;
 }

procedure { simbolo = simb_procedimento;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" procedimento ");
          return PROCEDIMENTO;
 }

function { simbolo = simb_funcao;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" funcao ");
          return FUNCAO;
 }

integer { simbolo = simb_tipo_integer;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" tipo_inteiro ");
          return TIPO_INTEIRO;
 }

{ident} { simbolo = simb_identificador;
          strncpy (token, yytext, TAM_TOKEN);
          IMPRIME(" ident  ");
          return IDENT;
}

%%
