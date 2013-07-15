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
int num_termos;

int nivel_lexico;
int desloc;

int x, y;
int percorre_vars;

pilha_s *p_tipos;
no_tabela_simbolos_p *dados_simbolo1;
no_tabela_simbolos_p *dados_simbolo2;

/* Função para corrigir erro de versões */
void yyerror (char const *);



/* Line 268 of yacc.c  */
#line 115 "compilador.tab.c"

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
     LOWER_THEN_ELSE = 294
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
#line 196 "compilador.tab.c"

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
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  212

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    14,    16,    19,    21,    24,    25,
      28,    30,    31,    32,    39,    41,    43,    45,    49,    51,
      55,    57,    58,    59,    64,    66,    70,    74,    78,    82,
      86,    90,    94,    97,   100,   103,   106,   109,   110,   112,
     114,   116,   117,   118,   126,   127,   128,   138,   142,   143,
     144,   148,   149,   152,   153,   154,   158,   159,   162,   166,
     168,   169,   174,   178,   180,   181,   185,   187,   188,   191,
     192,   193,   198,   199,   202,   203,   204,   211,   213,   214,
     215,   220,   221,   224,   225,   226,   230,   231,   238,   239,
     244,   246,   248,   251,   255,   256,   263,   264,   269,   271,
     273,   274,   278,   279,   281,   283,   286,   289,   292,   295,
     299,   303,   305,   309,   313,   315,   316,   320,   322,   326,
     328,   331,   335,   339,   343,   348,   352,   357,   361,   365,
     370,   372,   374,   376
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    -1,    42,     3,    43,     4,    55,     5,
       7,    44,     9,    -1,    13,    -1,    45,    56,    -1,    46,
      -1,    12,    47,    -1,    -1,    47,    48,    -1,    48,    -1,
      -1,    -1,    49,    54,     8,    51,    50,     7,    -1,    13,
      -1,    13,    -1,    13,    -1,    54,     6,    13,    -1,    13,
      -1,    55,     6,    13,    -1,    13,    -1,    -1,    -1,    57,
      63,    58,    44,    -1,    59,    -1,    10,    61,    11,    -1,
      10,    61,    11,    -1,    80,     7,    61,    -1,    96,     7,
      61,    -1,   102,     7,    61,    -1,   110,     7,    61,    -1,
     111,     7,    61,    -1,    80,     7,    -1,    96,     7,    -1,
     102,     7,    -1,   110,     7,    -1,   111,     7,    -1,    -1,
      80,    -1,    96,    -1,   102,    -1,    -1,    -1,    35,    13,
      64,    68,     7,    65,    69,    -1,    -1,    -1,    36,    13,
      66,    68,     8,    53,     7,    67,    69,    -1,     4,    71,
       5,    -1,    -1,    -1,    70,    44,     7,    -1,    -1,    72,
      73,    -1,    -1,    -1,    12,    74,    76,    -1,    -1,    75,
      76,    -1,    77,     7,    73,    -1,    77,    -1,    -1,    78,
      79,     8,    52,    -1,    79,     6,    13,    -1,    13,    -1,
      -1,    13,    81,    82,    -1,    84,    -1,    -1,    83,    87,
      -1,    -1,    -1,    85,    14,    86,   112,    -1,    -1,    88,
      89,    -1,    -1,    -1,     4,    90,    93,     5,    91,    92,
      -1,    92,    -1,    -1,    -1,    93,     6,    94,   112,    -1,
      -1,    95,   112,    -1,    -1,    -1,    27,    97,    98,    -1,
      -1,     4,   116,     5,    29,    99,   101,    -1,    -1,   116,
      29,   100,   101,    -1,    62,    -1,    60,    -1,    32,   103,
      -1,    32,   103,   107,    -1,    -1,     4,   116,     5,    33,
     104,   106,    -1,    -1,   116,    33,   105,   106,    -1,    62,
      -1,    60,    -1,    -1,    34,   108,   109,    -1,    -1,    62,
      -1,    60,    -1,    37,    13,    -1,    37,    89,    -1,    38,
      13,    -1,    38,    89,    -1,   112,    16,   113,    -1,   112,
      17,   113,    -1,   113,    -1,   113,    18,   114,    -1,   113,
      19,   114,    -1,   114,    -1,    -1,    13,   115,    87,    -1,
      15,    -1,     4,   112,     5,    -1,   117,    -1,    24,   117,
      -1,   117,    20,   118,    -1,   117,    21,   118,    -1,   117,
      22,   118,    -1,   117,    22,    20,   118,    -1,   117,    23,
     118,    -1,   117,    23,    20,   118,    -1,   117,    25,   118,
      -1,   117,    26,   118,    -1,   117,    25,    24,   118,    -1,
     118,    -1,    13,    -1,    15,    -1,     4,   116,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    65,    78,    89,    93,    97,    98,   102,
     103,   107,   112,   107,   120,   134,   149,   163,   179,   197,
     198,   202,   215,   202,   233,   237,   241,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   259,   260,
     261,   266,   273,   265,   276,   282,   275,   287,   288,   293,
     293,   320,   320,   323,   328,   327,   332,   332,   337,   338,
     342,   342,   350,   366,   386,   385,   392,   394,   394,   411,
     424,   411,   481,   481,   524,   533,   523,   548,   552,   652,
     651,   723,   723,   793,   798,   797,   806,   805,   813,   812,
     822,   840,   861,   871,   885,   884,   892,   891,   901,   902,
     907,   906,   921,   925,   926,   930,   931,   935,   936,   940,
     944,   948,   952,   956,   960,   965,   964,   978,   999,  1008,
    1009,  1016,  1020,  1024,  1028,  1032,  1036,  1040,  1044,  1048,
    1053,  1057,  1068,  1073
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
  "LOWER_THEN_ELSE", "$accept", "programa", "$@1", "sem_tipo", "bloco",
  "parte_declara_vars", "var", "declara_vars", "declara_var", "$@2", "$@3",
  "tipo", "tipo_parametro", "tipo_retorno_func", "lista_id_var",
  "lista_idents", "comando_composto", "$@4", "$@5", "comando_composto_2",
  "comando_composto_2_rep_cond", "comandos", "comando_sem_ponto_e_virgula",
  "procedimento_ou_funcao", "$@6", "$@7", "$@8", "$@9",
  "procedimento_ou_funcao_2", "procedimento_ou_funcao_3", "$@10",
  "parametros_vars_proc_ou_func", "$@11", "vars_proc_ou_func", "$@12",
  "$@13", "vars_proc_ou_func_2", "var_proc_ou_func", "$@14",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    42,    41,    43,    44,    45,    46,    46,    47,
      47,    49,    50,    48,    51,    52,    53,    54,    54,    55,
      55,    57,    58,    56,    56,    59,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      62,    64,    65,    63,    66,    67,    63,    68,    68,    70,
      69,    72,    71,    71,    74,    73,    75,    73,    76,    76,
      78,    77,    79,    79,    81,    80,    82,    83,    82,    85,
      86,    84,    88,    87,    90,    91,    89,    89,    92,    94,
      93,    95,    93,    93,    97,    96,    99,    98,   100,    98,
     101,   101,   102,   102,   104,   103,   105,   103,   106,   106,
     108,   107,   107,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   113,   115,   114,   114,   114,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     2,     1,     2,     0,     2,
       1,     0,     0,     6,     1,     1,     1,     3,     1,     3,
       1,     0,     0,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     0,     1,     1,
       1,     0,     0,     7,     0,     0,     9,     3,     0,     0,
       3,     0,     2,     0,     0,     3,     0,     2,     3,     1,
       0,     4,     3,     1,     0,     3,     1,     0,     2,     0,
       0,     4,     0,     2,     0,     0,     6,     1,     0,     0,
       4,     0,     2,     0,     0,     3,     0,     6,     0,     4,
       1,     1,     2,     3,     0,     6,     0,     4,     1,     1,
       0,     3,     0,     1,     1,     2,     2,     2,     2,     3,
       3,     1,     3,     3,     1,     0,     3,     1,     3,     1,
       2,     3,     3,     3,     4,     3,     4,     3,     3,     4,
       1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    20,     0,
       0,     0,     8,    19,    11,     0,    21,     6,     7,    10,
       0,     3,    37,     5,     0,    24,     9,    18,     0,    64,
      84,     0,    78,    78,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,    67,     0,     0,   131,   132,
       0,    92,     0,   119,   130,    74,   105,   106,    77,   107,
     108,    25,    32,    33,    34,    35,    36,    41,    44,     8,
      17,    14,    12,    65,    72,    66,     0,     0,    85,     0,
       0,     0,   120,   100,    93,    96,     0,     0,     0,     0,
       0,     0,    81,    27,    28,    29,    30,    31,    48,    48,
      23,     0,    68,    78,    70,     0,    88,     0,   133,     0,
       0,   121,   122,     0,   123,     0,   125,     0,   127,   128,
       0,     0,    51,     0,     0,    13,    73,     0,   133,     0,
     133,    94,    37,   104,   103,    38,    39,    40,   101,    99,
      98,    97,   124,   126,   129,    75,    79,     0,   115,   117,
      82,   111,   114,     0,    56,    42,     0,    71,    86,    91,
      90,    89,     0,     0,    78,     0,     0,    72,     0,     0,
       0,     0,    47,    54,    52,    60,    49,    16,     0,     0,
      95,    26,    76,    80,   118,   116,   109,   110,   112,   113,
      60,    57,    59,     0,    43,     8,    45,    87,    55,    56,
      63,     0,     0,    49,    58,     0,     0,    50,    46,    62,
      15,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    15,    16,    17,    18,    19,    20,
     101,    72,   211,   178,    28,     9,    23,    24,    69,    25,
     139,    34,   140,    42,    98,   176,    99,   203,   123,   194,
     195,   153,   154,   174,   190,   175,   191,   192,   193,   201,
      35,    45,    73,    74,    75,    76,   127,   102,   103,    57,
      92,   164,    58,   120,   165,   121,    36,    46,    78,   179,
     129,   161,    37,    51,   162,   110,   141,    84,   109,   138,
      38,    39,   150,   151,   152,   167,    52,    53,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -113
static const yytype_int16 yypact[] =
{
    -113,    20,    48,  -113,    44,  -113,    65,    74,  -113,    69,
      82,    80,   101,  -113,  -113,   116,   110,  -113,   117,  -113,
     118,  -113,    35,  -113,   -12,  -113,  -113,  -113,    13,  -113,
    -113,    21,    18,    45,   121,   122,   126,   127,   128,   129,
     124,   125,  -113,   130,   131,   132,    66,    73,  -113,  -113,
      14,   105,   107,    89,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,    35,    35,    35,    35,    35,  -113,  -113,   101,
    -113,  -113,  -113,  -113,  -113,  -113,   133,    73,  -113,   112,
      73,   137,    89,  -113,  -113,  -113,    14,    14,    87,    88,
      81,    14,    93,  -113,  -113,  -113,  -113,  -113,   141,   141,
    -113,   142,  -113,   144,  -113,   145,  -113,   146,   119,    33,
      33,  -113,  -113,    14,  -113,    14,  -113,    14,  -113,  -113,
     111,    91,   148,   147,   149,  -113,  -113,    91,   134,    33,
    -113,  -113,    35,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,    91,  -113,  -113,
     102,   103,  -113,   150,   152,  -113,   143,   102,  -113,  -113,
    -113,  -113,    33,   151,  -113,    91,    39,  -113,    91,    91,
      91,    91,  -113,  -113,  -113,  -113,  -113,  -113,   153,    33,
    -113,  -113,  -113,   102,  -113,  -113,   103,   103,  -113,  -113,
    -113,  -113,   154,   155,  -113,   101,  -113,  -113,  -113,   152,
    -113,    46,   158,  -113,  -113,   156,   157,  -113,  -113,  -113,
    -113,  -113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,  -113,   -69,  -113,  -113,  -113,   140,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
     -97,   -61,   -96,  -113,  -113,  -113,  -113,  -113,    60,   -37,
    -113,  -113,  -113,   -32,  -113,  -113,   -18,  -113,  -113,  -113,
    -103,  -113,  -113,  -113,  -113,  -113,  -113,     4,  -113,   -19,
    -113,  -113,     9,  -113,  -113,  -113,  -101,  -113,  -113,  -113,
    -113,    -5,   -99,  -113,  -113,  -113,    15,  -113,  -113,  -113,
    -113,  -113,  -112,   -45,   -43,  -113,   -30,   135,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
     100,    93,    94,    95,    96,    97,   135,   135,   136,   136,
     137,   137,   133,   134,    60,   157,    79,    81,    80,    43,
       3,    44,    55,    40,    41,    47,   135,    48,   136,    49,
     137,    56,   159,   160,    48,   166,    49,   111,   112,   114,
     116,   118,   119,   132,   184,    50,    29,   105,    29,    55,
     107,     4,   205,   183,   206,   168,   169,     5,    59,   135,
      30,   136,    30,   137,   142,    31,   143,    31,   144,     7,
      77,   163,    32,    33,    10,    11,   135,    80,   136,    48,
     137,    49,   159,   160,   126,    80,    48,     8,    49,    12,
      50,    80,    80,    13,    48,   147,    49,    50,   -83,   -83,
      48,    48,    49,    49,   148,   117,   149,   113,   115,    86,
      87,    88,    89,    14,    90,    91,   145,   146,   168,   169,
      22,   170,   171,   186,   187,    21,   202,   188,   189,    62,
     -11,    27,    61,    63,    64,    65,    66,    67,    68,    83,
      85,   106,   108,    70,    71,   122,   -69,   104,    55,   125,
     128,   130,   131,   -53,   155,   172,   177,   156,    26,   124,
     196,   199,   181,   158,   173,   207,   208,   204,   200,   209,
     210,   185,   198,   182,   197,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,    82
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-113))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      69,    62,    63,    64,    65,    66,   109,   110,   109,   110,
     109,   110,   109,   109,    33,   127,    46,    47,     4,     6,
       0,     8,     4,    35,    36,     4,   129,    13,   129,    15,
     129,    13,   129,   129,    13,   147,    15,    86,    87,    88,
      89,    90,    91,    10,     5,    24,    13,    77,    13,     4,
      80,     3,     6,   165,     8,    16,    17,    13,    13,   162,
      27,   162,    27,   162,   113,    32,   115,    32,   117,     4,
       4,   132,    37,    38,     5,     6,   179,     4,   179,    13,
     179,    15,   179,   179,   103,     4,    13,    13,    15,     7,
      24,     4,     4,    13,    13,     4,    15,    24,     5,     6,
      13,    13,    15,    15,    13,    24,    15,    20,    20,    20,
      21,    22,    23,    12,    25,    26,     5,     6,    16,    17,
      10,    18,    19,   168,   169,     9,   195,   170,   171,     7,
      13,    13,    11,     7,     7,     7,     7,    13,    13,    34,
      33,    29,     5,    13,    13,     4,    14,    14,     4,     7,
       5,     5,    33,     5,     7,     5,    13,     8,    18,    99,
       7,     7,    11,    29,    12,     7,   203,   199,    13,    13,
      13,   167,   190,   164,   179,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     3,    13,    43,     4,    13,    55,
       5,     6,     7,    13,    12,    44,    45,    46,    47,    48,
      49,     9,    10,    56,    57,    59,    48,    13,    54,    13,
      27,    32,    37,    38,    61,    80,    96,   102,   110,   111,
      35,    36,    63,     6,     8,    81,    97,     4,    13,    15,
      24,   103,   116,   117,   118,     4,    13,    89,    92,    13,
      89,    11,     7,     7,     7,     7,     7,    13,    13,    58,
      13,    13,    51,    82,    83,    84,    85,     4,    98,   116,
       4,   116,   117,    34,   107,    33,    20,    21,    22,    23,
      25,    26,    90,    61,    61,    61,    61,    61,    64,    66,
      44,    50,    87,    88,    14,   116,    29,   116,     5,   108,
     105,   118,   118,    20,   118,    20,   118,    24,   118,   118,
      93,    95,     4,    68,    68,     7,    89,    86,     5,   100,
       5,    33,    10,    60,    62,    80,    96,   102,   109,    60,
      62,   106,   118,   118,   118,     5,     6,     4,    13,    15,
     112,   113,   114,    71,    72,     7,     8,   112,    29,    60,
      62,   101,   104,    61,    91,    94,   112,   115,    16,    17,
      18,    19,     5,    12,    73,    75,    65,    13,    53,    99,
     106,    11,    92,   112,     5,    87,   113,   113,   114,   114,
      74,    76,    77,    78,    69,    70,     7,   101,    76,     7,
      13,    79,    44,    67,    73,     6,     8,     7,    69,    13,
      13,    52
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
#line 65 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 70 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 79 "compilador.y"
    {
            sprintf ( categoria, "nome_programa");
            sprintf ( tipo, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( tipo, 1);
            }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 107 "compilador.y"
    {
            num_vars_inicial = num_vars;
            }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 112 "compilador.y"
    { /* AMEM */
            sprintf ( dados, "AMEM %d", percorre_vars);
            geraCodigo ( NULL, dados);
            }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 121 "compilador.y"
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
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 135 "compilador.y"
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
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 150 "compilador.y"
    {
            sprintf ( dados, "integer");
            if ( strcmp ( dados, token) != 0) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 164 "compilador.y"
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
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 180 "compilador.y"
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
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 202 "compilador.y"
    {
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
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 215 "compilador.y"
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
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 266 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria, "procedimento");
            sprintf ( tipo_retorno, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 273 "compilador.y"
    {
            }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 276 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria, "funcao");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 282 "compilador.y"
    {
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 293 "compilador.y"
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
            }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 306 "compilador.y"
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
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 320 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 328 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_referencia");
            }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 332 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_valor");
            }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 342 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 351 "compilador.y"
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
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 367 "compilador.y"
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
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 386 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 394 "compilador.y"
    {
            /* Caso não seja atribuição então só pde ser procedimento ou função */
            /* Indica que não é parametro formal e indica com 2 */
            /* dizendo que vem de chamada de procedimento ou função */

            sprintf ( categoria, "procedimento");
            empilha_Inteiro ( p_eh_parametro_formal, 2);
            }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 402 "compilador.y"
    {
            if ( desempilha_Inteiro ( p_eh_parametro_formal) == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em atribuicao\n");
                exit ( 1);
            }
            }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 411 "compilador.y"
    {
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
            }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 424 "compilador.y"
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

            empilha_Inteiro ( p_num_termos, 0);

            }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 441 "compilador.y"
    {

            num_termos = desempilha_Inteiro ( p_num_termos);
            if ( num_termos == -99) {
                printf ( "Pilha p_num_termos esta vazia em atribuição\n");
                exit ( 1);
            }

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
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 481 "compilador.y"
    {
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
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 524 "compilador.y"
    {
            /* Salva o nome da função antes de iniciar leitura dos parametros */
            /* Também salva a quantidade de parametros */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);

            }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 533 "compilador.y"
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
            }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 552 "compilador.y"
    {

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);
            if ( eh_parametro_formal == -99) {
                printf ( "Pilha p_eh_parametro_formal esta vazia em var_chama_proc_func2\n");
                exit ( 1);
            }

            /* Se simbolo é procedimento ou var_simples */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL && (strcmp ( categoria, dados_simbolo1->categoria) == 0 || strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0)) {

                if ( eh_parametro_formal == 1) {
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
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 652 "compilador.y"
    {
            empilha_Inteiro ( p_eh_parametro_formal, 1);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_num_termos, 0);

            }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 667 "compilador.y"
    {

            num_termos = desempilha_Inteiro ( p_num_termos);
            if ( num_termos == -99) {
                printf ( "Pilha p_num_termos esta vazia\n");
                exit ( 1);
            }

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

            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            desempilha_String ( p_nomes, &nome_proc_func);
            if ( nome_proc_func == NULL ) {
                printf ( "Pilha p_nomes esta vazia\n");
                exit ( 1);
            }

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);

            /* Para cada tipo de variavel da expressao */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                if ( tipo_expressao == NULL ) {
                    printf ( "Pilha p_tipos esta vazia\n");
                    exit ( 1);
                }

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux, num_termos) != 1) {
                    sprintf ( dados, "Tipo do parametro %d do procedimento ou função %s incompativel com declaração", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 723 "compilador.y"
    {
            empilha_Inteiro ( p_eh_parametro_formal, 1);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_num_termos, 0);

            }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 738 "compilador.y"
    {

            num_termos = desempilha_Inteiro ( p_num_termos);
            if ( num_termos == -99) {
                printf ( "Pilha p_num_termos esta vazia\n");
                exit ( 1);
            }

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

            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            desempilha_String ( p_nomes, &nome_proc_func);
            if ( nome_proc_func == NULL ) {
                printf ( "Pilha p_nomes esta vazia\n");
                exit ( 1);
            }

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);

            /* Para cada tipo de variavel da expressao */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                if ( tipo_expressao == NULL ) {
                    printf ( "Pilha p_tipos esta vazia\n");
                    exit ( 1);
                }

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux, num_termos) != 1) {
                    sprintf ( dados, "Tipo do parametro %d do procedimento ou função %s incompativel com declaração", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 798 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 806 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 813 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 823 "compilador.y"
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
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 841 "compilador.y"
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
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 862 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            if ( rotulo2 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 872 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            if ( rotulo2 == NULL ) {
                printf ( "Pilha p_rotulos esta vazia\n");
                exit ( 1);
            }

            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 885 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 892 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 907 "compilador.y"
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
            }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 941 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 945 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 953 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 957 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 965 "compilador.y"
    {
            sprintf ( categoria, "var_simples");
            sprintf ( nome_var_proc_func, "%s", token);

            num_termos = desempilha_Inteiro ( p_num_termos);
            if ( num_termos == -99) {
                printf ( "Pilha p_num_termos esta vazia em fator 1\n");
                exit ( 1);
            }

            num_termos++;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 979 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);

            sprintf ( dados, "integer");
            strcpy ( tipo_fator, dados);
            empilha_String ( p_tipos, tipo_fator);

            num_termos = desempilha_Inteiro ( p_num_termos);
            if ( num_termos == -99) {
                printf ( "Pilha p_num_termos esta vazia em fator 2\n");
                exit ( 1);
            }

            /* Soma 2 para caso seja expressao de parametro */
            /* com número ou mais de uma variável na expressao ser incompativel */
            /* com passagem por referência */
            num_termos = num_termos + 2;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 1000 "compilador.y"
    {
            sprintf ( dados, "integer");
            strcpy ( tipo_fator, dados);
            empilha_String ( p_tipos, tipo_fator);
            }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 1010 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 1017 "compilador.y"
    {
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1021 "compilador.y"
    {
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1025 "compilador.y"
    {
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1029 "compilador.y"
    {
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1033 "compilador.y"
    {
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1037 "compilador.y"
    {
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1041 "compilador.y"
    {
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1045 "compilador.y"
    {
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1049 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1058 "compilador.y"
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
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1069 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2805 "compilador.tab.c"
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
#line 1077 "compilador.y"


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

