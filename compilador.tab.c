/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 6 "compilador.y"

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



/* Line 268 of yacc.c  */
#line 123 "compilador.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     ABRE_PARENTESES = 259,
     FECHA_PARENTESES = 260,
     VIRGULA = 261,
     PONTO_E_VIRGULA = 262,
     DOIS_PONTOS = 263,
     PONTO = 264,
     T_BEGIN = 265,
     T_END = 266,
     VAR = 267,
     IDENT = 268,
     ATRIBUICAO = 269,
     NUMERO = 270,
     SOMA = 271,
     SUBTRACAO = 272,
     MULTIPLICACAO = 273,
     DIVISAO = 274,
     IGUAL = 275,
     DIFERENTE = 276,
     MAIOR = 277,
     MENOR = 278,
     NAO = 279,
     E = 280,
     OU = 281,
     ENQUANTO = 282,
     PARA = 283,
     FACA = 284,
     REPITA = 285,
     ATE = 286,
     SE = 287,
     ENTAO = 288,
     SENAO = 289,
     PROCEDIMENTO = 290,
     FUNCAO = 291,
     LEITURA = 292,
     IMPRESSAO = 293,
     ROTULO = 294,
     VAI_PARA = 295,
     LOWER_THEN_ELSE = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 206 "compilador.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    14,    16,    19,    21,    22,    27,
      28,    34,    35,    38,    40,    41,    42,    49,    51,    53,
      55,    59,    61,    65,    67,    68,    69,    74,    76,    80,
      84,    88,    92,    96,   100,   104,   107,   110,   113,   116,
     119,   120,   122,   124,   126,   127,   134,   135,   144,   148,
     149,   150,   154,   155,   158,   159,   160,   164,   165,   168,
     172,   174,   175,   180,   184,   186,   187,   191,   193,   194,
     197,   198,   199,   204,   205,   208,   209,   210,   217,   219,
     220,   221,   226,   227,   230,   231,   232,   236,   237,   244,
     245,   250,   252,   254,   257,   261,   262,   269,   270,   275,
     277,   279,   280,   284,   285,   287,   289,   292,   295,   298,
     301,   305,   309,   311,   315,   319,   321,   322,   326,   328,
     332,   334,   337,   341,   345,   349,   354,   358,   363,   367,
     371,   376,   378,   380,   382
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    44,     3,    45,     4,    59,     5,
       7,    46,     9,    -1,    13,    -1,    47,    60,    -1,    48,
      -1,    -1,    12,    49,    51,    47,    -1,    -1,    39,    50,
      58,     7,    47,    -1,    -1,    51,    52,    -1,    52,    -1,
      -1,    -1,    53,    58,     8,    55,    54,     7,    -1,    13,
      -1,    13,    -1,    13,    -1,    58,     6,    13,    -1,    13,
      -1,    59,     6,    13,    -1,    13,    -1,    -1,    -1,    61,
      67,    62,    46,    -1,    63,    -1,    10,    65,    11,    -1,
      10,    65,    11,    -1,    82,     7,    65,    -1,    98,     7,
      65,    -1,   104,     7,    65,    -1,   112,     7,    65,    -1,
     113,     7,    65,    -1,    82,     7,    -1,    98,     7,    -1,
     104,     7,    -1,   112,     7,    -1,   113,     7,    -1,    -1,
      82,    -1,    98,    -1,   104,    -1,    -1,    35,    13,    68,
      70,     7,    71,    -1,    -1,    36,    13,    69,    70,     8,
      57,     7,    71,    -1,     4,    73,     5,    -1,    -1,    -1,
      72,    46,     7,    -1,    -1,    74,    75,    -1,    -1,    -1,
      12,    76,    78,    -1,    -1,    77,    78,    -1,    79,     7,
      75,    -1,    79,    -1,    -1,    80,    81,     8,    56,    -1,
      81,     6,    13,    -1,    13,    -1,    -1,    13,    83,    84,
      -1,    86,    -1,    -1,    85,    89,    -1,    -1,    -1,    87,
      14,    88,   114,    -1,    -1,    90,    91,    -1,    -1,    -1,
       4,    92,    95,     5,    93,    94,    -1,    94,    -1,    -1,
      -1,    95,     6,    96,   114,    -1,    -1,    97,   114,    -1,
      -1,    -1,    27,    99,   100,    -1,    -1,     4,   118,     5,
      29,   101,   103,    -1,    -1,   118,    29,   102,   103,    -1,
      66,    -1,    64,    -1,    32,   105,    -1,    32,   105,   109,
      -1,    -1,     4,   118,     5,    33,   106,   108,    -1,    -1,
     118,    33,   107,   108,    -1,    66,    -1,    64,    -1,    -1,
      34,   110,   111,    -1,    -1,    66,    -1,    64,    -1,    37,
      13,    -1,    37,    91,    -1,    38,    13,    -1,    38,    91,
      -1,   114,    16,   115,    -1,   114,    17,   115,    -1,   115,
      -1,   115,    18,   116,    -1,   115,    19,   116,    -1,   116,
      -1,    -1,    13,   117,    89,    -1,    15,    -1,     4,   114,
       5,    -1,   119,    -1,    24,   119,    -1,   119,    20,   120,
      -1,   119,    21,   120,    -1,   119,    22,   120,    -1,   119,
      22,    20,   120,    -1,   119,    23,   120,    -1,   119,    23,
      20,   120,    -1,   119,    25,   120,    -1,   119,    26,   120,
      -1,   119,    25,    24,   120,    -1,   120,    -1,    13,    -1,
      15,    -1,     4,   118,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    74,    87,    99,   103,   108,   107,   113,
     112,   117,   121,   122,   126,   131,   126,   139,   152,   166,
     179,   195,   213,   214,   218,   231,   218,   240,   244,   248,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   266,   267,   268,   273,   272,   302,   301,   336,   351,
     356,   356,   380,   380,   383,   388,   387,   392,   392,   397,
     398,   402,   402,   410,   425,   444,   443,   450,   452,   452,
     465,   478,   465,   537,   537,   572,   581,   571,   588,   592,
     765,   764,   813,   813,   860,   865,   864,   873,   872,   880,
     879,   889,   898,   910,   915,   924,   923,   931,   930,   940,
     941,   946,   945,   956,   960,   961,   965,   966,   970,   971,
     975,   979,   983,   987,   991,   995,  1000,   999,  1008,  1024,
    1032,  1033,  1040,  1044,  1048,  1052,  1056,  1060,  1064,  1068,
    1072,  1077,  1081,  1092,  1097
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "ABRE_PARENTESES",
  "FECHA_PARENTESES", "VIRGULA", "PONTO_E_VIRGULA", "DOIS_PONTOS", "PONTO",
  "T_BEGIN", "T_END", "VAR", "IDENT", "ATRIBUICAO", "NUMERO", "SOMA",
  "SUBTRACAO", "MULTIPLICACAO", "DIVISAO", "IGUAL", "DIFERENTE", "MAIOR",
  "MENOR", "NAO", "E", "OU", "ENQUANTO", "PARA", "FACA", "REPITA", "ATE",
  "SE", "ENTAO", "SENAO", "PROCEDIMENTO", "FUNCAO", "LEITURA", "IMPRESSAO",
  "ROTULO", "VAI_PARA", "LOWER_THEN_ELSE", "$accept", "programa", "$@1",
  "sem_tipo", "bloco", "parte_declara_vars", "var", "$@2", "$@3",
  "declara_vars", "declara_var", "$@4", "$@5", "tipo", "tipo_parametro",
  "tipo_retorno_func", "lista_id_var", "lista_idents", "comando_composto",
  "$@6", "$@7", "comando_composto_2", "comando_composto_2_rep_cond",
  "comandos", "comando_sem_ponto_e_virgula", "procedimento_ou_funcao",
  "$@8", "$@9", "procedimento_ou_funcao_2", "procedimento_ou_funcao_3",
  "$@10", "parametros_vars_proc_ou_func", "$@11", "vars_proc_ou_func",
  "$@12", "$@13", "vars_proc_ou_func_2", "var_proc_ou_func", "$@14",
  "lista_id_var_proc_ou_func", "atrib_proc_func", "$@15",
  "atrib_proc_func_2", "$@16", "atribuicao", "$@17", "$@18",
  "var_chama_proc_func", "$@19", "passagem", "$@20", "$@21",
  "var_chama_proc_func_2", "lista_id_var_parametro", "$@22", "$@23",
  "repeticao", "$@24", "repeticao_2", "$@25", "$@26", "repeticao_3",
  "condicao", "condicao_se_entao", "$@27", "$@28", "condicao_se_entao_2",
  "condicao_senao", "$@29", "condicao_senao_2", "leitura", "impressao",
  "expressao_aritmetica", "expressao_termo", "expressao_fator", "$@30",
  "expressao_booleana_geral", "expressao_booleana", "expressao_fator2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    43,    45,    46,    47,    49,    48,    50,
      48,    48,    51,    51,    53,    54,    52,    55,    56,    57,
      58,    58,    59,    59,    61,    62,    60,    60,    63,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    68,    67,    69,    67,    70,    70,
      72,    71,    74,    73,    73,    76,    75,    77,    75,    78,
      78,    80,    79,    81,    81,    83,    82,    84,    85,    84,
      87,    88,    86,    90,    89,    92,    93,    91,    91,    94,
      96,    95,    97,    95,    95,    99,    98,   101,   100,   102,
     100,   103,   103,   104,   104,   106,   105,   107,   105,   108,
     108,   110,   109,   109,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   115,   115,   115,   117,   116,   116,   116,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     2,     1,     0,     4,     0,
       5,     0,     2,     1,     0,     0,     6,     1,     1,     1,
       3,     1,     3,     1,     0,     0,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       0,     1,     1,     1,     0,     6,     0,     8,     3,     0,
       0,     3,     0,     2,     0,     0,     3,     0,     2,     3,
       1,     0,     4,     3,     1,     0,     3,     1,     0,     2,
       0,     0,     4,     0,     2,     0,     0,     6,     1,     0,
       0,     4,     0,     2,     0,     0,     3,     0,     6,     0,
       4,     1,     1,     2,     3,     0,     6,     0,     4,     1,
       1,     0,     3,     0,     1,     1,     2,     2,     2,     2,
       3,     3,     1,     3,     3,     1,     0,     3,     1,     3,
       1,     2,     3,     3,     3,     4,     3,     4,     3,     3,
       4,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    23,     0,
       0,     0,    11,    22,     7,     9,     0,    24,     6,    14,
       0,     3,    40,     5,     0,    27,    11,    13,     0,    21,
       0,    65,    85,     0,    79,    79,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     8,    12,     0,     0,    11,
      68,     0,     0,   132,   133,     0,    93,     0,   120,   131,
      75,   106,   107,    78,   108,   109,    28,    35,    36,    37,
      38,    39,    44,    46,    11,     0,    20,    10,    66,    73,
      67,     0,     0,    86,     0,     0,     0,   121,   101,    94,
      97,     0,     0,     0,     0,     0,     0,    82,    30,    31,
      32,    33,    34,    49,    49,    26,    17,    15,    69,    79,
      71,     0,    89,     0,   134,     0,     0,   122,   123,     0,
     124,     0,   126,     0,   128,   129,     0,     0,    52,     0,
       0,     0,    74,     0,   134,     0,   134,    95,    40,   105,
     104,    41,    42,    43,   102,   100,    99,    98,   125,   127,
     130,    76,    80,     0,   116,   118,    83,   112,   115,     0,
      57,    50,     0,    16,    72,    87,    92,    91,    90,     0,
       0,    79,     0,     0,    73,     0,     0,     0,     0,    48,
      55,    53,    61,    45,    11,    19,     0,     0,    96,    29,
      77,    81,   119,   117,   110,   111,   113,   114,    61,    58,
      60,     0,     0,    50,    88,    56,    57,    64,     0,    51,
      47,    59,     0,     0,    63,    18,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    16,    17,    18,    19,    20,    26,
      27,    28,   131,   107,   216,   186,    30,     9,    23,    24,
      74,    25,   145,    36,   146,    44,   103,   104,   129,   183,
     184,   159,   160,   181,   198,   182,   199,   200,   201,   208,
      37,    50,    78,    79,    80,    81,   133,   108,   109,    62,
      97,   171,    63,   126,   172,   127,    38,    51,    83,   187,
     135,   168,    39,    56,   169,   116,   147,    89,   115,   144,
      40,    41,   156,   157,   158,   174,    57,    58,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
    -124,    38,    37,  -124,    29,  -124,    50,    54,  -124,    64,
      66,    72,     9,  -124,  -124,  -124,   106,   103,  -124,  -124,
      78,  -124,    14,  -124,    36,  -124,     6,  -124,    78,  -124,
      81,  -124,  -124,    40,   108,   110,   117,   126,   131,   134,
     135,   136,   132,   133,  -124,  -124,  -124,    17,   137,     9,
     130,    53,    79,  -124,  -124,    86,   114,   118,   104,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,    14,    14,    14,
      14,    14,  -124,  -124,     9,   139,  -124,  -124,  -124,  -124,
    -124,   140,    79,  -124,   120,    79,   142,   104,  -124,  -124,
    -124,    86,    86,    85,    89,    82,    86,   111,  -124,  -124,
    -124,  -124,  -124,   149,   149,  -124,  -124,  -124,  -124,   151,
    -124,   152,  -124,   153,   123,    52,    52,  -124,  -124,    86,
    -124,    86,  -124,    86,  -124,  -124,   113,   107,   154,   155,
     156,   158,  -124,   107,   138,    52,  -124,  -124,    14,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,   107,  -124,  -124,   115,   116,  -124,   161,
     148,  -124,   150,  -124,   115,  -124,  -124,  -124,  -124,    52,
     157,  -124,   107,    91,  -124,   107,   107,   107,   107,  -124,
    -124,  -124,  -124,  -124,     9,  -124,   162,    52,  -124,  -124,
    -124,   115,  -124,  -124,   116,   116,  -124,  -124,  -124,  -124,
     163,   159,   164,  -124,  -124,  -124,   148,  -124,    31,  -124,
    -124,  -124,   160,   165,  -124,  -124,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,   -74,    -6,  -124,  -124,  -124,  -124,
     166,  -124,  -124,  -124,  -124,  -124,   146,  -124,  -124,  -124,
    -124,  -124,  -107,   -56,  -106,  -124,  -124,  -124,    57,   -28,
    -124,  -124,  -124,   -30,  -124,  -124,   -21,  -124,  -124,  -124,
    -113,  -124,  -124,  -124,  -124,  -124,  -124,     5,  -124,   -34,
    -124,  -124,    10,  -124,  -124,  -124,  -111,  -124,  -124,  -124,
    -124,    -7,  -109,  -124,  -124,  -124,    13,  -124,  -124,  -124,
    -124,  -124,  -123,   -39,   -38,  -124,   -35,   128,   -60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -85
static const yytype_int16 yytable[] =
{
     105,    65,   141,   141,   142,   142,   143,   143,   139,   140,
     164,    98,    99,   100,   101,   102,    84,    86,    14,   -14,
      45,    14,   141,    48,   142,    75,   143,    31,   166,   167,
     173,   117,   118,   120,   122,   124,   125,   212,     3,   213,
       4,    32,     5,    77,    52,    15,    33,   111,    15,   191,
     113,    34,    35,    53,     7,    54,   141,    82,   142,   148,
     143,   149,   138,   150,    55,    31,    53,     8,    54,    10,
      11,    42,    43,    12,   141,   132,   142,    55,   143,    32,
     166,   167,   170,    85,    33,    13,    85,    48,    49,    85,
      85,    29,    53,    85,    54,    53,   192,    54,    53,    53,
      54,    54,    53,    55,    54,   119,   123,   175,   176,   121,
     202,   153,    60,    22,    60,    21,   -84,   -84,   151,   152,
     154,    61,   155,    64,    91,    92,    93,    94,    66,    95,
      96,   175,   176,    67,   177,   178,   194,   195,    68,   196,
     197,    69,    70,    71,   -70,    72,    73,   114,    88,   112,
      76,    90,   106,   128,   110,    60,   137,   134,   136,   -54,
     180,   130,   161,   185,   162,   163,   179,   165,   189,   203,
     206,   209,   207,   214,    47,   210,   211,   205,   215,   193,
     204,   190,   188,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    46
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-124))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      74,    35,   115,   116,   115,   116,   115,   116,   115,   115,
     133,    67,    68,    69,    70,    71,    51,    52,    12,    13,
      26,    12,   135,     6,   135,     8,   135,    13,   135,   135,
     153,    91,    92,    93,    94,    95,    96,     6,     0,     8,
       3,    27,    13,    49,     4,    39,    32,    82,    39,   172,
      85,    37,    38,    13,     4,    15,   169,     4,   169,   119,
     169,   121,    10,   123,    24,    13,    13,    13,    15,     5,
       6,    35,    36,     7,   187,   109,   187,    24,   187,    27,
     187,   187,   138,     4,    32,    13,     4,     6,     7,     4,
       4,    13,    13,     4,    15,    13,     5,    15,    13,    13,
      15,    15,    13,    24,    15,    20,    24,    16,    17,    20,
     184,     4,     4,    10,     4,     9,     5,     6,     5,     6,
      13,    13,    15,    13,    20,    21,    22,    23,    11,    25,
      26,    16,    17,     7,    18,    19,   175,   176,     7,   177,
     178,     7,     7,     7,    14,    13,    13,     5,    34,    29,
      13,    33,    13,     4,    14,     4,    33,     5,     5,     5,
      12,   104,     7,    13,     8,     7,     5,    29,    11,     7,
       7,     7,    13,    13,    28,   203,   206,   198,    13,   174,
     187,   171,   169,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,     0,     3,    13,    45,     4,    13,    59,
       5,     6,     7,    13,    12,    39,    46,    47,    48,    49,
      50,     9,    10,    60,    61,    63,    51,    52,    53,    13,
      58,    13,    27,    32,    37,    38,    65,    82,    98,   104,
     112,   113,    35,    36,    67,    47,    52,    58,     6,     7,
      83,    99,     4,    13,    15,    24,   105,   118,   119,   120,
       4,    13,    91,    94,    13,    91,    11,     7,     7,     7,
       7,     7,    13,    13,    62,     8,    13,    47,    84,    85,
      86,    87,     4,   100,   118,     4,   118,   119,    34,   109,
      33,    20,    21,    22,    23,    25,    26,    92,    65,    65,
      65,    65,    65,    68,    69,    46,    13,    55,    89,    90,
      14,   118,    29,   118,     5,   110,   107,   120,   120,    20,
     120,    20,   120,    24,   120,   120,    95,    97,     4,    70,
      70,    54,    91,    88,     5,   102,     5,    33,    10,    64,
      66,    82,    98,   104,   111,    64,    66,   108,   120,   120,
     120,     5,     6,     4,    13,    15,   114,   115,   116,    73,
      74,     7,     8,     7,   114,    29,    64,    66,   103,   106,
      65,    93,    96,   114,   117,    16,    17,    18,    19,     5,
      12,    75,    77,    71,    72,    13,    57,   101,   108,    11,
      94,   114,     5,    89,   115,   115,   116,   116,    76,    78,
      79,    80,    46,     7,   103,    78,     7,    13,    81,     7,
      71,    75,     6,     8,    13,    13,    56
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 74 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 79 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 88 "compilador.y"
    {
            sprintf ( categoria, "nome_programa");
            sprintf ( tipo, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( tipo, 1);
            }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 108 "compilador.y"
    {
            /* Se for uma declara��o de vari�vel */
            sprintf ( categoria, "%s", categoria_var_simples);
            }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 113 "compilador.y"
    {
            /* Se for uma declara��o de rotulo */
            sprintf ( categoria, "%s", categoria_rotulo);
            }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 126 "compilador.y"
    {
            num_vars_inicial = num_vars;
            }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 131 "compilador.y"
    { /* AMEM */
            sprintf ( dados, "AMEM %d", percorre_vars);
            geraCodigo ( NULL, dados);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 140 "compilador.y"
    {
            if ( strcmp ( tipo_inteiro, token) != 0) {
                sprintf ( dados, "Tipo '%s' n�o suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_vars - num_vars_inicial;
            insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 153 "compilador.y"
    {
            if ( strcmp ( tipo_inteiro, token) != 0) {
                sprintf ( dados, "Tipo '%s' n�o suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_var_proc_func, parametro_valor_referencia, token, percorre_vars);
            }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 167 "compilador.y"
    {
            if ( strcmp ( tipo_inteiro, token) != 0) {
                sprintf ( dados, "Tipo '%s' n�o suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 180 "compilador.y"
    {
            /* insere �ltima vari�vel na tabela de s�mbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Vari�vel '%s' j� foi delcarada como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            deslocamento++;
            num_vars++;
            }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 196 "compilador.y"
    { /* insere vari�veis na tabela de s�mbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Vari�vel '%s' j� foi delcarada como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            deslocamento++;
            num_vars++;
            }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 218 "compilador.y"
    {
            /* Caso encontre um procedimento */
            /* Empilha n�mero de vari�vei para n�o perder */
            /* a quantidade depois de ler todo o procedimento */
            empilha_Inteiro ( p_num_vars, num_vars);

            /* Gera r�tulo para desviar do procedimento */
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 231 "compilador.y"
    {
            /* Recupera o n�mero de vari�veis */
            num_vars = desempilha_Inteiro ( p_num_vars);

            /* Retoma com o r�tulo */
            desempilha_String ( p_rotulos, &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 273 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);

            /* Empilha o nome do procedimento para o retorno */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria_procedimento, parametro_valor_referencia, rotulo1, nivel_lexico + 1, 0);
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 286 "compilador.y"
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
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 302 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);

            /* Empilha o nome do procedimento para o retorno */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);

            sprintf ( parametro_valor_referencia, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria_funcao, parametro_valor_referencia, rotulo1, nivel_lexico + 1, 0);
            }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 314 "compilador.y"
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
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 337 "compilador.y"
    {
            /* Insere endere�os dos parametros formais procedimentou ou fun��o */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s n�o foi encontrado em procura_simb procedimento_ou_funcao_2\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            insere_Endereco_parametro ( dados_simbolo1);

            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 356 "compilador.y"
    {
            /* Depois de ler todo a declara��o do procedimento */
            /* Empilha deslocamento para n�o perder ele depois */
            /* que sair do procedimento e inicia um novo */
            /* Aumento nivel l�xico por causa da entrada no procedimento */
            empilha_Inteiro ( p_deslocamentos, deslocamento);
            deslocamento = 0;
            nivel_lexico++;

            geraCodigo ( rotulo1, "NADA");
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 369 "compilador.y"
    {
            /* Ao terminar de ler todo o procedimento retoma o deslocamento */
            /* Diminui o nivel lexico por causa do fim do procedimento */

            deslocamento = desempilha_Inteiro ( p_deslocamentos);

            nivel_lexico--;
            }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 380 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 388 "compilador.y"
    {
            sprintf ( parametro_valor_referencia, "var_referencia");
            }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 392 "compilador.y"
    {
            sprintf ( parametro_valor_referencia, "var_valor");
            }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 402 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 411 "compilador.y"
    {
            /* Os parametros obrigatoriamente n�o podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro n�o pode ser '%s' j� foi delcarado como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria_parametro_formal, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            num_parametros++;
            }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 426 "compilador.y"
    {
            /* Os parametros obrigatoriamente n�o podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro n�o pode ser '%s' j� foi delcarado como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria_parametro_formal, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            num_parametros++;
            }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 444 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 452 "compilador.y"
    {
            /* Caso n�o seja atribui��o ent�o s� pde ser procedimento ou fun��o */
            /* Indica que n�o � parametro formal e indica com 2 */
            /* dizendo que vem de chamada de procedimento ou fun��o */

            empilha_Inteiro ( p_eh_parametro_formal, 2);
            }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 459 "compilador.y"
    {
            desempilha_Inteiro ( p_eh_parametro_formal);
            }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 465 "compilador.y"
    {
            /* Verifica se a vari�vel foi declarada */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_var_simples, dados_simbolo1->categoria) != 0 &&  strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) != 0 )) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Vari�vel '%s' n�o foi declarada", nome_var_proc_func);
                else
                    sprintf ( dados, "'%s' foi declarado como %s e n�o como vari�vel", nome_var_proc_func, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }
            }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 478 "compilador.y"
    {
            /* Indica que n�o � parametro formal e que est� indica com '0' */
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

            }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 500 "compilador.y"
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

                if ( strcmp ( dados_simbolo1->tipo, tipo_expressao) != 0) {
                    sprintf ( dados, "Tipo do receptor � incopativel com um elemento da expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            if ( strcmp ( categoria_var_simples, dados_simbolo1->categoria) != 0 && strcmp ( categoria_parametro_valor, dados_simbolo1->categoria) != 0 )
                sprintf ( dados, "ARMI %d, %d", x, y);
            else
                sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 537 "compilador.y"
    {
            /* 1 - Caso venha de atribui��o->expressao cateoria1 = var_simples */
            /* 2 - Caso venha de procedimento ou fun��o cateoria1 = procedimento */
            /* 3 - Caso venha de lita de parametros->expressao pode ser var_simples, parametro_formal ou funcao */
            /* Para os 2 casos o outro parametro pode ser fun��o */

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            /* Se n�o encontrar o simbolos como var_simples/procedimento ou funcao e n�o � parametro_formal */
            if ( dados_simbolo1 == NULL) {
                if ( eh_parametro_formal == 1 || eh_parametro_formal == 0){
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

            /* Se o simbolo � uma fun��o gera o c�digo de retorno antes de empilhar os parametros */
            if ( dados_simbolo1 != NULL && strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0) {
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            num_parametros = 0;
            }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 572 "compilador.y"
    {
            /* Salva o nome da fun��o antes de iniciar leitura dos parametros */
            /* Tamb�m salva a quantidade de parametros */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);

            }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 581 "compilador.y"
    {
            desempilha_String ( p_nomes, &nome_proc_func);

            num_parametros = desempilha_Inteiro ( p_num_parametros);

            strcpy ( nome_var_proc_func, nome_proc_func);
            }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 592 "compilador.y"
    {

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);
            /* Se simbolo � passagem de parametro, procedimento ou var_simples */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL && (strcmp ( categoria_procedimento, dados_simbolo1->categoria) == 0 || strcmp ( categoria_var_simples, dados_simbolo1->categoria) == 0 || strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0)) {

                /* Se � parametro de chamada de procedimento ou fun��o */
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
                                sprintf ( dados, "CRVL %d %d", x, y);
                                geraCodigo ( NULL, dados);
                            }
                            /* Sen�o chamada recebe referencia */
                            else {
                                sprintf ( dados, "CREN %d %d", x, y);
                                geraCodigo ( NULL, dados);
                            }
                        }
                        /* Sen�o a passagem foi por refer�ncia */
                        else {
                            /* Se procedimento/fun��o chamada recebe valor */
                            if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0) {
                                sprintf ( dados, "CRVI %d %d", x, y);
                                geraCodigo ( NULL, dados);
                            }
                            /* Sen�o chamada recebe referencia */
                            else {
                                sprintf ( dados, "CRVL %d %d", x, y);
                                geraCodigo ( NULL, dados);
                            }
                        }
                    }
                    /* Sen�o � uma vari�vel */
                    else {
                        /* Se procedimento/fun��o chamada recebe valor */
                        if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0) {
                            sprintf ( dados, "CRVL %d %d", x, y);
                            geraCodigo ( NULL, dados);
                        }
                        /* Sen�o chamada recebe referencia */
                        else {
                            sprintf ( dados, "CREN %d %d", x, y);
                            geraCodigo ( NULL, dados);
                        }
                    }
                }
                /* Sen�o passagem por parametro � procedimento, vari�vel ou fun��o */
                else {
                    /* Se � procedimento */
                    if ( strcmp( categoria_procedimento, dados_simbolo1->categoria) == 0) {
                        if ( eh_parametro_formal == 2) {
                            sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                            geraCodigo ( NULL, dados );
                        }
                        else {
                            sprintf ( dados, "O %s � um procedimento e procedimentos n�o podem ser passado em atrbui�oes", dados_simbolo1->simbolo);
                            imprimeErro ( dados);
                            exit ( 1);
                        }
                    }

                    /* Sen�o � var_simples */
                    else {
                        desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                        /* Salva o tipo vari�vel */
                        tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                        strcpy (tipo_fator, dados_simbolo1->tipo);
                        empilha_String ( p_tipos, tipo_fator);

                        empilha_pilhas_String ( p_p_tipos, p_tipos);


                        /* Se � a vari�vel foi passada como parametro */
                        if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0) {
                            /* Se a pssagem foi por valor */
                            if ( strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) == 0) {
                                sprintf ( dados, "CRVL %d %d", x, y);
                                geraCodigo ( NULL, dados);
                            }
                            /* Sen�o a passagem foi por refer�ncia */
                            else {
                                sprintf ( dados, "CRVI %d %d", x, y);
                                geraCodigo ( NULL, dados);
                            }
                        }
                       /* Sen�o � uma vari�vel */
                        else {
                            sprintf ( dados, "CRVL %d %d", x, y);
                            geraCodigo ( NULL, dados);
                        }
                    }
                    /* Fim do sen�o � var_simples */

                }

            }
            /* Sen�o passagem parametro, procedimentou ou var simeples */
            /* Ent�o � fun��o */
            else {
                //procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
                if ( dados_simbolo1 != NULL && strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0) {
                    if ( dados_simbolo1->qtd_parametros != num_parametros) {
                        sprintf ( dados, "Para fun��o '%s' numero de parametros incorreto", nome_var_proc_func);
                        imprimeErro ( dados);
                        exit ( 1);
                    }

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

                    sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                    geraCodigo ( NULL, dados );

                    /* Se foi chamado uma fun��o sem atribui��o */
                    if ( eh_parametro_formal == 2) {
                        sprintf ( dados, "DMEN 1");
                        geraCodigo ( NULL, dados);
                    }
                }
            }

            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 765 "compilador.y"
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

            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 780 "compilador.y"
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
                    sprintf ( dados, "Tipo do parametro %d do procedimento ou fun��o %s incompativel com declara��o", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 813 "compilador.y"
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

            }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 828 "compilador.y"
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
                    sprintf ( dados, "Tipo do parametro %d do procedimento ou fun��o %s incompativel com declara��o", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 865 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 873 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 880 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 890 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            desempilha_String ( p_rotulos, &rotulo1);

            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 899 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            desempilha_String ( p_rotulos, &rotulo1);

            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 911 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 916 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 924 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 931 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 946 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo1);

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVS %s", rotulo2);
            geraCodigo ( NULL, dados);

            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 976 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 980 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 988 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 992 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 1000 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);

            num_termos = desempilha_Inteiro ( p_num_termos);

            num_termos++;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 1009 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);

            strcpy ( tipo_fator, tipo_inteiro);
            empilha_String ( p_tipos, tipo_fator);

            num_termos = desempilha_Inteiro ( p_num_termos);

            /* Soma 2 para caso seja expressao de parametro */
            /* com n�mero ou mais de uma vari�vel na expressao ser incompativel */
            /* com passagem por refer�ncia */
            num_termos = num_termos + 2;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1025 "compilador.y"
    {
            strcpy ( tipo_fator, tipo_inteiro);
            empilha_String ( p_tipos, tipo_fator);
            }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 1034 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1041 "compilador.y"
    {
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1045 "compilador.y"
    {
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1049 "compilador.y"
    {
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1053 "compilador.y"
    {
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1057 "compilador.y"
    {
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1061 "compilador.y"
    {
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1065 "compilador.y"
    {
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1069 "compilador.y"
    {
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1073 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1082 "compilador.y"
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
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1093 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2851 "compilador.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1101 "compilador.y"


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

