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
char *categoria1;
char *categoria2;
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

int nivel_lexico;
int desloc;

int x, y;
int percorre_vars;

no_tabela_simbolos_p *dados_simbolo1;
no_tabela_simbolos_p *dados_simbolo2;

/* Função para corrigir erro de versões */
void yyerror (char const *);



/* Line 268 of yacc.c  */
#line 111 "compilador.tab.c"

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
#line 192 "compilador.tab.c"

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
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

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
     192,   196,   197,   200,   201,   202,   209,   211,   212,   216,
     218,   219,   220,   224,   225,   232,   233,   238,   240,   242,
     245,   249,   250,   257,   258,   263,   265,   267,   268,   272,
     273,   275,   277,   280,   283,   286,   289,   293,   297,   299,
     303,   307,   309,   310,   314,   316,   320,   322,   325,   329,
     333,   337,   342,   346,   351,   355,   359,   364,   366,   368,
     370
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
      10,    61,    11,    -1,    80,     7,    61,    -1,    93,     7,
      61,    -1,    99,     7,    61,    -1,   107,     7,    61,    -1,
     108,     7,    61,    -1,    80,     7,    -1,    93,     7,    -1,
      99,     7,    -1,   107,     7,    -1,   108,     7,    -1,    -1,
      80,    -1,    93,    -1,    99,    -1,    -1,    -1,    35,    13,
      64,    68,     7,    65,    69,    -1,    -1,    -1,    36,    13,
      66,    68,     8,    53,     7,    67,    69,    -1,     4,    71,
       5,    -1,    -1,    -1,    70,    44,     7,    -1,    -1,    72,
      73,    -1,    -1,    -1,    12,    74,    76,    -1,    -1,    75,
      76,    -1,    77,     7,    73,    -1,    77,    -1,    -1,    78,
      79,     8,    52,    -1,    79,     6,    13,    -1,    13,    -1,
      -1,    13,    81,    82,    -1,    84,    -1,    -1,    83,    86,
      -1,    -1,    85,    14,   109,    -1,    -1,    87,    88,    -1,
      -1,    -1,     4,    89,    92,     5,    90,    91,    -1,    91,
      -1,    -1,    92,     6,   109,    -1,   109,    -1,    -1,    -1,
      27,    94,    95,    -1,    -1,     4,   113,     5,    29,    96,
      98,    -1,    -1,   113,    29,    97,    98,    -1,    62,    -1,
      60,    -1,    32,   100,    -1,    32,   100,   104,    -1,    -1,
       4,   113,     5,    33,   101,   103,    -1,    -1,   113,    33,
     102,   103,    -1,    62,    -1,    60,    -1,    -1,    34,   105,
     106,    -1,    -1,    62,    -1,    60,    -1,    37,    13,    -1,
      37,    88,    -1,    38,    13,    -1,    38,    88,    -1,   109,
      16,   110,    -1,   109,    17,   110,    -1,   110,    -1,   110,
      18,   111,    -1,   110,    19,   111,    -1,   111,    -1,    -1,
      13,   112,    86,    -1,    15,    -1,     4,   109,     5,    -1,
     114,    -1,    24,   114,    -1,   114,    20,   115,    -1,   114,
      21,   115,    -1,   114,    22,   115,    -1,   114,    22,    20,
     115,    -1,   114,    23,   115,    -1,   114,    23,    20,   115,
      -1,   114,    25,   115,    -1,   114,    26,   115,    -1,   114,
      25,    24,   115,    -1,   115,    -1,    13,    -1,    15,    -1,
       4,   113,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    61,    74,    85,    89,    93,    94,    98,
      99,   103,   108,   103,   116,   130,   145,   159,   174,   192,
     193,   197,   206,   197,   213,   217,   221,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   239,   240,
     241,   246,   253,   245,   256,   262,   255,   267,   268,   273,
     273,   289,   289,   292,   297,   296,   301,   301,   306,   307,
     311,   311,   319,   333,   351,   350,   357,   359,   359,   365,
     365,   395,   395,   440,   447,   439,   452,   456,   503,   520,
     526,   531,   530,   539,   538,   546,   545,   555,   563,   574,
     579,   588,   587,   595,   594,   604,   605,   610,   609,   620,
     624,   625,   629,   630,   634,   635,   639,   643,   647,   651,
     655,   659,   664,   663,   668,   677,   686,   687,   694,   698,
     702,   706,   710,   714,   718,   722,   726,   731,   735,   746,
     751
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
  "atrib_proc_func_2", "$@16", "atribuicao", "$@17", "var_chama_proc_func",
  "$@18", "passagem", "$@19", "$@20", "var_chama_proc_func_2",
  "lista_id_var_parametro", "repeticao", "$@21", "repeticao_2", "$@22",
  "$@23", "repeticao_3", "condicao", "condicao_se_entao", "$@24", "$@25",
  "condicao_se_entao_2", "condicao_senao", "$@26", "condicao_senao_2",
  "leitura", "impressao", "expressao_aritmetica", "expressao_termo",
  "expressao_fator", "$@27", "expressao_booleana_geral",
  "expressao_booleana", "expressao_fator2", 0
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
      84,    87,    86,    89,    90,    88,    88,    91,    92,    92,
      92,    94,    93,    96,    95,    97,    95,    98,    98,    99,
      99,   101,   100,   102,   100,   103,   103,   105,   104,   104,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   110,
     110,   110,   112,   111,   111,   111,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115
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
       3,     0,     2,     0,     0,     6,     1,     0,     3,     1,
       0,     0,     3,     0,     6,     0,     4,     1,     1,     2,
       3,     0,     6,     0,     4,     1,     1,     0,     3,     0,
       1,     1,     2,     2,     2,     2,     3,     3,     1,     3,
       3,     1,     0,     3,     1,     3,     1,     2,     3,     3,
       3,     4,     3,     4,     3,     3,     4,     1,     1,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    20,     0,
       0,     0,     8,    19,    11,     0,    21,     6,     7,    10,
       0,     3,    37,     5,     0,    24,     9,    18,     0,    64,
      81,     0,    77,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,    67,     0,     0,   128,   129,
       0,    89,     0,   116,   127,    73,   102,   103,    76,   104,
     105,    25,    32,    33,    34,    35,    36,    41,    44,     8,
      17,    14,    12,    65,    71,    66,     0,     0,    82,     0,
       0,     0,   117,    97,    90,    93,     0,     0,     0,     0,
       0,     0,    80,    27,    28,    29,    30,    31,    48,    48,
      23,     0,    68,    77,     0,     0,    85,     0,   130,     0,
       0,   118,   119,     0,   120,     0,   122,     0,   124,   125,
       0,   112,   114,     0,    79,   108,   111,    51,     0,     0,
      13,    72,    70,   130,     0,   130,    91,    37,   101,   100,
      38,    39,    40,    98,    96,    95,    94,   121,   123,   126,
       0,    71,    74,     0,     0,     0,     0,     0,     0,    56,
      42,     0,    83,    88,    87,    86,     0,     0,   115,   113,
      77,    78,   106,   107,   109,   110,    47,    54,    52,    60,
      49,    16,     0,     0,    92,    26,    75,    60,    57,    59,
       0,    43,     8,    45,    84,    55,    56,    63,     0,     0,
      49,    58,     0,     0,    50,    46,    62,    15,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    15,    16,    17,    18,    19,    20,
     101,    72,   208,   182,    28,     9,    23,    24,    69,    25,
     144,    34,   145,    42,    98,   180,    99,   200,   128,   191,
     192,   158,   159,   178,   187,   179,   188,   189,   190,   198,
      35,    45,    73,    74,    75,    76,   102,   103,    57,    92,
     170,    58,   123,    36,    46,    78,   183,   134,   165,    37,
      51,   166,   110,   146,    84,   109,   143,    38,    39,   124,
     125,   126,   151,    52,    53,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
    -104,    14,    26,  -104,     5,  -104,    36,    31,  -104,   101,
      45,    51,    46,  -104,  -104,    61,    64,  -104,    82,  -104,
      90,  -104,    41,  -104,    55,  -104,  -104,  -104,    69,  -104,
    -104,    17,    15,    58,   100,   110,   119,   124,   127,   128,
     123,   125,  -104,   126,   129,   130,    42,    68,  -104,  -104,
      30,   103,   107,    93,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,    41,    41,    41,    41,    41,  -104,  -104,    46,
    -104,  -104,  -104,  -104,  -104,  -104,   131,    68,  -104,   112,
      68,   117,    93,  -104,  -104,  -104,    30,    30,    85,    89,
      84,    30,    97,  -104,  -104,  -104,  -104,  -104,   139,   139,
    -104,   140,  -104,   142,    97,   143,  -104,   144,   118,    29,
      29,  -104,  -104,    30,  -104,    30,  -104,    30,  -104,  -104,
      97,  -104,  -104,   115,   108,   109,  -104,   145,   146,   147,
    -104,  -104,   108,   132,    29,  -104,  -104,    41,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
      43,  -104,  -104,    97,    97,    97,    97,    97,   149,   148,
    -104,   150,  -104,  -104,  -104,  -104,    29,   141,  -104,  -104,
    -104,   108,   109,   109,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,   151,    29,  -104,  -104,  -104,  -104,  -104,   152,
     153,  -104,    46,  -104,  -104,  -104,   148,  -104,    88,   155,
    -104,  -104,   154,   156,  -104,  -104,  -104,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,  -104,   -69,  -104,  -104,  -104,   138,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
     -97,   -61,   -96,  -104,  -104,  -104,  -104,  -104,    65,   -43,
    -104,  -104,  -104,   -31,  -104,  -104,   -19,  -104,  -104,  -104,
    -103,  -104,  -104,  -104,  -104,  -104,    19,  -104,   -18,  -104,
    -104,     1,  -104,  -101,  -104,  -104,  -104,  -104,   -11,   -99,
    -104,  -104,  -104,     7,  -104,  -104,  -104,  -104,  -104,   -84,
     -25,   -24,  -104,   -30,   133,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
     100,    93,    94,    95,    96,    97,   140,   140,   141,   141,
     142,   142,   138,   139,     3,    60,    79,    81,     5,    55,
     132,    47,   111,   112,   114,   116,   118,   119,    56,     4,
      48,   140,    49,   141,    80,   142,   150,   163,   164,   137,
       7,    50,    29,    48,     8,    49,    77,   105,   168,   147,
     107,   148,    12,   149,    29,    48,    30,    49,    14,   154,
     155,    31,    55,   140,    13,   141,    50,   142,    30,   171,
      21,    59,    80,    31,    22,    43,   167,    44,    32,    33,
     140,    48,   141,    49,   142,   131,   163,   164,    80,    80,
      40,    41,    50,    80,   202,   -11,   203,    48,    48,    49,
      49,   120,    48,    27,    49,   113,    10,    11,   117,   115,
     121,    61,   122,    86,    87,    88,    89,    62,    90,    91,
     152,   153,   108,   199,   154,   155,    63,   156,   157,   172,
     173,    64,   174,   175,    65,    66,    67,    83,    68,    70,
      85,   106,    71,   127,   -69,   104,    55,   130,   133,   135,
     -53,   136,   185,   160,   176,   161,    26,   205,   193,   196,
     177,   162,   204,   181,   129,   201,   197,   206,   195,   207,
     169,   186,   194,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-104))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      69,    62,    63,    64,    65,    66,   109,   110,   109,   110,
     109,   110,   109,   109,     0,    33,    46,    47,    13,     4,
     104,     4,    86,    87,    88,    89,    90,    91,    13,     3,
      13,   134,    15,   134,     4,   134,   120,   134,   134,    10,
       4,    24,    13,    13,    13,    15,     4,    77,     5,   113,
      80,   115,     7,   117,    13,    13,    27,    15,    12,    16,
      17,    32,     4,   166,    13,   166,    24,   166,    27,   153,
       9,    13,     4,    32,    10,     6,   137,     8,    37,    38,
     183,    13,   183,    15,   183,   103,   183,   183,     4,     4,
      35,    36,    24,     4,     6,    13,     8,    13,    13,    15,
      15,     4,    13,    13,    15,    20,     5,     6,    24,    20,
      13,    11,    15,    20,    21,    22,    23,     7,    25,    26,
       5,     6,     5,   192,    16,    17,     7,    18,    19,   154,
     155,     7,   156,   157,     7,     7,    13,    34,    13,    13,
      33,    29,    13,     4,    14,    14,     4,     7,     5,     5,
       5,    33,    11,     7,     5,     8,    18,   200,     7,     7,
      12,    29,     7,    13,    99,   196,    13,    13,   187,    13,
     151,   170,   183,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     3,    13,    43,     4,    13,    55,
       5,     6,     7,    13,    12,    44,    45,    46,    47,    48,
      49,     9,    10,    56,    57,    59,    48,    13,    54,    13,
      27,    32,    37,    38,    61,    80,    93,    99,   107,   108,
      35,    36,    63,     6,     8,    81,    94,     4,    13,    15,
      24,   100,   113,   114,   115,     4,    13,    88,    91,    13,
      88,    11,     7,     7,     7,     7,     7,    13,    13,    58,
      13,    13,    51,    82,    83,    84,    85,     4,    95,   113,
       4,   113,   114,    34,   104,    33,    20,    21,    22,    23,
      25,    26,    89,    61,    61,    61,    61,    61,    64,    66,
      44,    50,    86,    87,    14,   113,    29,   113,     5,   105,
     102,   115,   115,    20,   115,    20,   115,    24,   115,   115,
       4,    13,    15,    92,   109,   110,   111,     4,    68,    68,
       7,    88,   109,     5,    97,     5,    33,    10,    60,    62,
      80,    93,    99,   106,    60,    62,   103,   115,   115,   115,
     109,   112,     5,     6,    16,    17,    18,    19,    71,    72,
       7,     8,    29,    60,    62,    98,   101,    61,     5,    86,
      90,   109,   110,   110,   111,   111,     5,    12,    73,    75,
      65,    13,    53,    96,   103,    11,    91,    74,    76,    77,
      78,    69,    70,     7,    98,    76,     7,    13,    79,    44,
      67,    73,     6,     8,     7,    69,    13,    13,    52
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
#line 61 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 66 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 75 "compilador.y"
    {
            sprintf ( categoria1, "nome_programa");
            sprintf ( tipo, "sem_tipo");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria1, NULL, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( tipo, 1);
            }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 103 "compilador.y"
    {
            num_vars_inicial = num_vars;
            }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 108 "compilador.y"
    { /* AMEM */
            sprintf ( dados, "AMEM %d", percorre_vars);
            geraCodigo ( NULL, dados);
            }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 117 "compilador.y"
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
#line 131 "compilador.y"
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
#line 146 "compilador.y"
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
#line 160 "compilador.y"
    { /* insere última vars na tabela de símbolos */
            dados_simbolo1 = procura_simb ( token, &x, &y, &tipo);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria1, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria1, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 175 "compilador.y"
    { /* insere vars na tabela de símbolos */
            dados_simbolo1 = procura_simb ( token, &x, &y, &tipo);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria1, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria1, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 197 "compilador.y"
    {
            empilha_Inteiro ( p_num_vars, num_vars);

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 206 "compilador.y"
    {
            num_vars = desempilha_Inteiro ( p_num_vars);

            desempilha_String ( p_rotulos, &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 246 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria1, "procedimento");
            sprintf ( tipo_retorno, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria1, rotulo1, nivel_lexico, 0);
            }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 253 "compilador.y"
    {
            }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 256 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria1, "funcao");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria1, rotulo1, nivel_lexico, 0);
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 262 "compilador.y"
    {
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 273 "compilador.y"
    {
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
#line 282 "compilador.y"
    {
            desloc = desempilha_Inteiro ( p_deslocamentos);
            nivel_lexico--;
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 289 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 297 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_referencia");
            }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 301 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_valor");
            }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 311 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 320 "compilador.y"
    {
            dados_simbolo1 = procura_simb ( token, &x, &y, &tipo);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro não pode ser '%s' já foi delcarado como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria1, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria1, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 334 "compilador.y"
    {
            dados_simbolo1 = procura_simb ( token, &x, &y, &tipo);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Parametro não pode ser '%s' já foi delcarado como %s", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( categoria1, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria1, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 351 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 359 "compilador.y"
    {
            sprintf ( categoria1, "procedimento");
            }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 365 "compilador.y"
    {
            sprintf ( categoria1, "var_simples");
            //dados_simbolo1 = procura_cat ( nome_var_proc_func, categoria1, &rotulo1, &tipo, &x, &y);
            dados_simbolo1 = procura_simb ( nome_var_proc_func, &x, &y, &tipo);
            if ( dados_simbolo1 == NULL || strcmp ( categoria1, dados_simbolo1->categoria) != 0) {
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
#line 379 "compilador.y"
    {
            /* Checa se o tipo do resultado da expressão corresponde a variável que vai receber a expressão */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
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

  case 71:

/* Line 1806 of yacc.c  */
#line 395 "compilador.y"
    {
            /* 1 - Caso venha de atribuição->expressao cateoria1 = var_simples */
            /* 2 - Caso venha de procedimento ou função cateoria1 = procedimento */
            /* 3 - Caso venha de lita de parametros->expressao pode ser var_simples, parametro_formal ou funcao */
            /* Para os 2 casos o outro parametro pode ser função */
            sprintf ( categoria2, "funcao");
            //dados_simbolo1 = procura_cat ( nome_var_proc_func, categoria1, &rotulo1, &tipo, &x, &y);
            //dados_simbolo2 = procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y);

            dados_simbolo1 = procura_simb ( nome_var_proc_func, &x, &y, &tipo);

            //num_parametros_aux = desempilha_Inteiro ( &p_num_parametros);

            /* Se não encontrar o simbolos como var_simples/procedimento ou funcao e não é parametro_formal */
            sprintf ( dados, "parametro_formal");
            if ( dados_simbolo1 != NULL && strcmp (dados, dados_simbolo1->categoria) != 0) {
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria1, dados_simbolo1->categoria) != 0 && strcmp ( categoria2, dados_simbolo1->categoria) != 0)) {
                sprintf ( dados, "var_simples");
                if ( strcmp ( categoria1, dados) == 0){
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

            //empilha_Inteiro ( &p_num_parametros, num_parametros_aux);

            /* Se o simbolo é uma função */
            //dados_simbolo1 = procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y);
            if ( dados_simbolo1 != NULL && strcmp ( categoria2, dados_simbolo1->categoria) == 0) {
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            num_parametros = 0;
            }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 440 "compilador.y"
    {
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);

            }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 447 "compilador.y"
    {
            desempilha_String ( p_nomes, &nome_proc_func);
            num_parametros = desempilha_Inteiro ( p_num_parametros);
            strcpy ( nome_var_proc_func, nome_proc_func);
            }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 456 "compilador.y"
    {
            //dados_simbolo1 = procura_cat ( nome_var_proc_func, categoria1, &rotulo1, &tipo, &x, &y);

            dados_simbolo1 = procura_simb ( nome_var_proc_func, &x, &y, &tipo);

            /* Se simbolo é procedimento ou var_simples */
            sprintf ( dados, "parametro_formal");
            if ( dados_simbolo1 != NULL && (strcmp ( categoria1, dados_simbolo1->categoria) == 0 || strcmp ( dados, dados_simbolo1->categoria) == 0)) {
                sprintf ( dados, "procedimento");

                /* Se é procedimento */
                if ( strcmp( categoria1, dados) == 0) {
                    sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
                else {
                    /* Senão é var_simples */

                    tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                    strcpy (tipo_fator, dados_simbolo1->tipo);
                    empilha_String ( p_tipos, tipo_fator);
                    sprintf ( dados, "CRVL %d %d", x, y);
                    geraCodigo ( NULL, dados);
                }
            }
            else {
                /* Senão é funcao */
                //dados_simbolo1 = procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y);
                dados_simbolo1 = procura_simb ( nome_var_proc_func, &x, &y, &tipo);
                if ( dados_simbolo1 != NULL && strcmp ( categoria2, dados_simbolo1->categoria) == 0) {
                    //if ( compara_parametros_proc_func ( nome_var_proc_func, num_parametros) != 1) {
                    if ( dados_simbolo1->qtd_parametros != num_parametros) {
                        sprintf ( dados, "Para função '%s' numero de parametros incorreto", nome_var_proc_func);
                        imprimeErro ( dados);
                        exit ( 1);
                    }
                    tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                    strcpy (tipo_fator, dados_simbolo1->tipo_retorno);
                    empilha_String ( p_tipos, tipo_fator);
                    sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
            }
            }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 504 "compilador.y"
    {
            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            sprintf ( dados, "integer");
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                if ( strcmp ( dados, tipo_expressao) != 0) {
                    sprintf ( dados, "Tipo do receptor é incopativel com um elemento da expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 521 "compilador.y"
    {
            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 531 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 539 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 546 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 556 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            desempilha_String ( p_rotulos, &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 564 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            desempilha_String ( p_rotulos, &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 575 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 580 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 588 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 595 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 610 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo1);

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVS %s", rotulo2);
            geraCodigo ( NULL, dados);

            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 640 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 644 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 652 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 656 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 664 "compilador.y"
    {
            sprintf ( categoria1, "var_simples");
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 669 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);

            sprintf ( dados, "integer");
            strcpy ( tipo_fator, dados);
            empilha_String ( p_tipos, tipo_fator);
            }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 678 "compilador.y"
    {
            sprintf ( dados, "integer");
            strcpy ( tipo_fator, dados);
            empilha_String ( p_tipos, tipo_fator);
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 688 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 695 "compilador.y"
    {
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 699 "compilador.y"
    {
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 703 "compilador.y"
    {
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 707 "compilador.y"
    {
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 711 "compilador.y"
    {
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 715 "compilador.y"
    {
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 719 "compilador.y"
    {
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 723 "compilador.y"
    {
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 727 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 736 "compilador.y"
    {
            dados_simbolo1 = procura_simb ( token, &x, &y, &tipo);
            if ( dados_simbolo1 == NULL ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Variável '%s' não foi declarada", token);
                imprimeErro ( dados );
                exit ( 1);
            }
            sprintf ( dados, "CRVL %d, %d", x, y);
            geraCodigo ( NULL, dados);
            }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 747 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2456 "compilador.tab.c"
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
#line 755 "compilador.y"


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
    inicia_pilha_inteiros ();
    inicia_pilha_inteiros ();

    yyin = fp;
    yyparse ();

    return 0;
}

