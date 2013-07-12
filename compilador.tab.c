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
char *tipo;
char *tipo_valor_referencia;
char *tipo_retorno;
char *nome_proc_func;

int num_vars;
int num_parametros;
int num_vars_inicial;

int nivel_lexico;
int desloc;

int x, y;
int percorre_vars;

/* Função para corrigir erro de versões */
void yyerror (char const *);



/* Line 268 of yacc.c  */
#line 102 "compilador.tab.c"

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
     TIPO_INTEIRO = 292,
     LOWER_THEN_ELSE = 293
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
#line 182 "compilador.tab.c"

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
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    14,    16,    19,    21,    24,    25,
      28,    30,    31,    32,    39,    41,    43,    45,    49,    51,
      55,    57,    61,    62,    63,    68,    70,    74,    78,    82,
      86,    90,    93,    96,    99,   100,   102,   104,   106,   107,
     108,   116,   117,   118,   128,   132,   133,   134,   138,   139,
     142,   143,   144,   148,   149,   152,   156,   158,   159,   164,
     168,   170,   171,   175,   177,   179,   181,   182,   186,   187,
     190,   191,   194,   199,   201,   202,   206,   208,   209,   210,
     214,   215,   222,   223,   228,   230,   232,   235,   239,   240,
     247,   248,   253,   255,   257,   258,   262,   263,   265,   267,
     271,   275,   277,   281,   285,   287,   288,   292,   294,   296,
     300,   302,   305,   309,   313,   317,   322,   326,   331,   335,
     339,   344,   346,   348,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    -1,    41,     3,    42,     4,    54,     5,
       7,    43,     9,    -1,    13,    -1,    44,    55,    -1,    45,
      -1,    12,    46,    -1,    -1,    46,    47,    -1,    47,    -1,
      -1,    -1,    48,    53,     8,    50,    49,     7,    -1,    37,
      -1,    37,    -1,    37,    -1,    53,     6,    13,    -1,    13,
      -1,    54,     6,    13,    -1,    13,    -1,    13,    82,    43,
      -1,    -1,    -1,    56,    62,    57,    43,    -1,    58,    -1,
      10,    60,    11,    -1,    10,    60,    11,    -1,    79,     7,
      60,    -1,    91,     7,    60,    -1,    97,     7,    60,    -1,
      79,     7,    -1,    91,     7,    -1,    97,     7,    -1,    -1,
      79,    -1,    91,    -1,    97,    -1,    -1,    -1,    35,    13,
      63,    67,     7,    64,    68,    -1,    -1,    -1,    36,    13,
      65,    67,     8,    52,     7,    66,    68,    -1,     4,    70,
       5,    -1,    -1,    -1,    69,    43,     7,    -1,    -1,    71,
      72,    -1,    -1,    -1,    12,    73,    75,    -1,    -1,    74,
      75,    -1,    76,     7,    72,    -1,    76,    -1,    -1,    77,
      78,     8,    51,    -1,    78,     6,    13,    -1,    13,    -1,
      -1,    13,    80,    81,    -1,    82,    -1,    84,    -1,    86,
      -1,    -1,    83,    14,   105,    -1,    -1,    85,    88,    -1,
      -1,    87,    88,    -1,     4,    90,     5,    89,    -1,    89,
      -1,    -1,    90,     6,    13,    -1,    13,    -1,    -1,    -1,
      27,    92,    93,    -1,    -1,     4,   109,     5,    29,    94,
      96,    -1,    -1,   109,    29,    95,    96,    -1,    61,    -1,
      59,    -1,    32,    98,    -1,    32,    98,   102,    -1,    -1,
       4,   109,     5,    33,    99,   101,    -1,    -1,   109,    33,
     100,   101,    -1,    61,    -1,    59,    -1,    -1,    34,   103,
     104,    -1,    -1,    61,    -1,    59,    -1,   105,    16,   106,
      -1,   105,    17,   106,    -1,   106,    -1,   106,    18,   107,
      -1,   106,    19,   107,    -1,   107,    -1,    -1,    13,   108,
      86,    -1,    13,    -1,    15,    -1,     4,   105,     5,    -1,
     110,    -1,    24,   110,    -1,   110,    20,   111,    -1,   110,
      21,   111,    -1,   110,    22,   111,    -1,   110,    22,    20,
     111,    -1,   110,    23,   111,    -1,   110,    23,    20,   111,
      -1,   110,    25,   111,    -1,   110,    26,   111,    -1,   110,
      25,    24,   111,    -1,   111,    -1,    13,    -1,    15,    -1,
       4,   109,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    52,    65,    76,    80,    84,    85,    89,
      90,    94,    99,    94,   107,   114,   122,   129,   137,   148,
     149,   153,   154,   164,   154,   172,   176,   180,   184,   185,
     186,   187,   188,   189,   190,   194,   195,   196,   201,   208,
     200,   211,   217,   210,   222,   223,   228,   228,   244,   244,
     247,   252,   251,   256,   256,   261,   262,   266,   266,   274,
     281,   292,   291,   298,   299,   300,   308,   308,   323,   323,
     334,   334,   347,   348,   353,   360,   361,   362,   367,   366,
     375,   374,   382,   381,   391,   399,   410,   415,   424,   423,
     431,   430,   440,   441,   446,   445,   456,   460,   461,   465,
     469,   473,   477,   481,   485,   490,   489,   493,   504,   509,
     513,   514,   521,   525,   529,   533,   537,   541,   545,   549,
     553,   558,   562,   573,   578
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
  "SE", "ENTAO", "SENAO", "PROCEDIMENTO", "FUNCAO", "TIPO_INTEIRO",
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
  "atrib_proc_func_2", "atribuicao", "$@16", "chama_procedimento", "$@17",
  "chama_funcao", "$@18", "chama_proc_func", "chama_proc_func_2",
  "lista_id_var_parametro", "repeticao", "$@19", "repeticao_2", "$@20",
  "$@21", "repeticao_3", "condicao", "condicao_se_entao", "$@22", "$@23",
  "condicao_se_entao_2", "condicao_senao", "$@24", "condicao_senao_2",
  "expressao_aritmetica", "expressao_termo", "expressao_fator", "$@25",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    41,    40,    42,    43,    44,    45,    45,    46,
      46,    48,    49,    47,    50,    51,    52,    53,    53,    54,
      54,    55,    56,    57,    55,    55,    58,    59,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    63,    64,
      62,    65,    66,    62,    67,    67,    69,    68,    71,    70,
      70,    73,    72,    74,    72,    75,    75,    77,    76,    78,
      78,    80,    79,    81,    81,    81,    83,    82,    85,    84,
      87,    86,    88,    88,    89,    90,    90,    90,    92,    91,
      94,    93,    95,    93,    96,    96,    97,    97,    99,    98,
     100,    98,   101,   101,   103,   102,   102,   104,   104,   105,
     105,   105,   106,   106,   106,   108,   107,   107,   107,   107,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   111
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     2,     1,     2,     0,     2,
       1,     0,     0,     6,     1,     1,     1,     3,     1,     3,
       1,     3,     0,     0,     4,     1,     3,     3,     3,     3,
       3,     2,     2,     2,     0,     1,     1,     1,     0,     0,
       7,     0,     0,     9,     3,     0,     0,     3,     0,     2,
       0,     0,     3,     0,     2,     3,     1,     0,     4,     3,
       1,     0,     3,     1,     1,     1,     0,     3,     0,     2,
       0,     2,     4,     1,     0,     3,     1,     0,     0,     3,
       0,     6,     0,     4,     1,     1,     2,     3,     0,     6,
       0,     4,     1,     1,     0,     3,     0,     1,     1,     3,
       3,     1,     3,     3,     1,     0,     3,     1,     1,     3,
       1,     2,     3,     3,     3,     4,     3,     4,     3,     3,
       4,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    20,     0,
       0,     0,     8,    19,    11,     0,    22,     6,     7,    10,
       0,     3,    34,    66,     5,     0,    25,     9,    18,     0,
      61,    78,     0,     0,     0,     0,     0,     8,     0,     0,
       0,    23,     0,     0,    68,     0,     0,   122,   123,     0,
      86,     0,   110,   121,    26,    31,    32,    33,    21,     0,
      38,    41,     8,    17,    14,    12,    62,    63,    64,    74,
      65,    74,     0,    79,     0,     0,     0,   111,    94,    87,
      90,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,   105,   108,    67,   101,   104,    45,    45,    24,     0,
      77,    69,    73,    71,     0,    82,     0,   124,     0,     0,
     112,   113,     0,   114,     0,   116,     0,   118,   119,     0,
      70,     0,     0,     0,     0,    48,     0,     0,    13,    76,
       0,   124,     0,   124,    88,    34,    98,    97,    35,    36,
      37,    95,    93,    92,    91,   115,   117,   120,   109,   106,
      99,   100,   102,   103,     0,    53,    39,     0,    74,     0,
      80,    85,    84,    83,     0,     0,    44,    51,    49,    57,
      46,    16,     0,    72,    75,     0,    89,    27,    57,    54,
      56,     0,    40,     8,    42,    81,    52,    53,    60,     0,
       0,    46,    55,     0,     0,    47,    43,    59,    15,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    15,    16,    17,    18,    19,    20,
      99,    65,   199,   172,    29,     9,    24,    25,    62,    26,
     142,    33,   143,    41,    96,   170,    97,   191,   126,   182,
     183,   154,   155,   168,   178,   169,   179,   180,   181,   189,
      34,    44,    66,    37,    38,    68,    69,    70,    71,   101,
     102,   130,    35,    45,    73,   175,   132,   163,    36,    50,
     164,   109,   144,    79,   108,   141,    93,    94,    95,   120,
      51,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
    -105,    37,    38,  -105,    13,  -105,    40,    43,  -105,    17,
      63,    66,    64,  -105,  -105,    73,    11,  -105,  -105,  -105,
      85,  -105,    26,  -105,  -105,    51,  -105,  -105,  -105,    61,
    -105,  -105,    14,    89,    98,   103,   110,    64,   106,   109,
     111,  -105,   112,    90,   107,    27,    44,  -105,  -105,    80,
      94,    96,    81,  -105,  -105,    26,    26,    26,  -105,    84,
    -105,  -105,    64,  -105,  -105,  -105,  -105,  -105,  -105,   119,
    -105,   119,    44,  -105,    97,    44,   125,    81,  -105,  -105,
    -105,    80,    80,    70,    76,    48,    80,  -105,  -105,  -105,
      84,  -105,  -105,    92,    93,  -105,   127,   127,  -105,   126,
     121,  -105,  -105,  -105,   130,  -105,   131,    99,    23,    23,
    -105,  -105,    80,  -105,    80,  -105,    80,  -105,  -105,    49,
    -105,    84,    84,    84,    84,   132,   133,   134,  -105,  -105,
     108,   114,    23,  -105,  -105,    26,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
      93,    93,  -105,  -105,   136,   135,  -105,   101,  -105,   137,
    -105,  -105,  -105,  -105,    23,   128,  -105,  -105,  -105,  -105,
    -105,  -105,   138,  -105,  -105,    23,  -105,  -105,  -105,  -105,
     141,   139,  -105,    64,  -105,  -105,  -105,   135,  -105,    86,
     142,  -105,  -105,   140,   117,  -105,  -105,  -105,  -105,  -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,   -37,  -105,  -105,  -105,   143,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
     -98,   -54,   -97,  -105,  -105,  -105,  -105,  -105,    47,   -40,
    -105,  -105,  -105,   -32,  -105,  -105,   -22,  -105,  -105,  -105,
    -104,  -105,  -105,   113,  -105,  -105,  -105,    39,  -105,    87,
       2,  -105,  -102,  -105,  -105,  -105,  -105,   -13,  -100,  -105,
    -105,  -105,    -1,  -105,  -105,  -105,    74,    -6,    -5,  -105,
     -26,   116,   -69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int16 yytable[] =
{
      58,    87,    88,    89,   138,   138,   139,   139,   140,   140,
     136,   137,   110,   111,   113,   115,   117,   118,    46,    74,
      76,    22,    10,    11,    23,    98,     5,    47,   138,    48,
     139,    72,   140,   135,   161,   162,    30,     3,    49,    30,
      47,     4,    48,   145,     7,   146,   104,   147,    75,   106,
      31,    49,    75,    31,   148,    32,     8,    47,    32,    48,
     138,    47,   139,    48,   140,   121,   122,    42,    49,    43,
      12,   138,   116,   139,    75,   140,    14,   161,   162,    13,
      75,   165,    21,    47,    75,    48,    39,    40,    90,    47,
     112,    48,   193,    47,   194,    48,   114,    91,    28,    92,
      54,    81,    82,    83,    84,    55,    85,    86,   121,   122,
      56,   123,   124,   158,   159,   150,   151,    57,   152,   153,
      59,   -66,    60,   100,    61,    63,   105,    64,    78,    80,
     107,   125,   134,   128,   129,   131,   133,   -50,   171,   177,
     156,   166,   157,   160,   127,   184,   190,   167,   187,   195,
     174,   196,   188,   197,   198,   192,   186,    67,   103,   149,
     173,    27,   185,   176,   119,    77
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-105))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      37,    55,    56,    57,   108,   109,   108,   109,   108,   109,
     108,   108,    81,    82,    83,    84,    85,    86,     4,    45,
      46,    10,     5,     6,    13,    62,    13,    13,   132,    15,
     132,     4,   132,    10,   132,   132,    13,     0,    24,    13,
      13,     3,    15,   112,     4,   114,    72,   116,     4,    75,
      27,    24,     4,    27,     5,    32,    13,    13,    32,    15,
     164,    13,   164,    15,   164,    16,    17,     6,    24,     8,
       7,   175,    24,   175,     4,   175,    12,   175,   175,    13,
       4,   135,     9,    13,     4,    15,    35,    36,     4,    13,
      20,    15,     6,    13,     8,    15,    20,    13,    13,    15,
      11,    20,    21,    22,    23,     7,    25,    26,    16,    17,
       7,    18,    19,     5,     6,   121,   122,     7,   123,   124,
      14,    14,    13,     4,    13,    13,    29,    37,    34,    33,
       5,     4,    33,     7,    13,     5,     5,     5,    37,    11,
       7,     5,     8,    29,    97,     7,   183,    12,     7,     7,
      13,   191,    13,    13,    37,   187,   178,    44,    71,   120,
     158,    18,   175,   164,    90,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,     3,    13,    42,     4,    13,    54,
       5,     6,     7,    13,    12,    43,    44,    45,    46,    47,
      48,     9,    10,    13,    55,    56,    58,    47,    13,    53,
      13,    27,    32,    60,    79,    91,    97,    82,    83,    35,
      36,    62,     6,     8,    80,    92,     4,    13,    15,    24,
      98,   109,   110,   111,    11,     7,     7,     7,    43,    14,
      13,    13,    57,    13,    37,    50,    81,    82,    84,    85,
      86,    87,     4,    93,   109,     4,   109,   110,    34,   102,
      33,    20,    21,    22,    23,    25,    26,    60,    60,    60,
       4,    13,    15,   105,   106,   107,    63,    65,    43,    49,
       4,    88,    89,    88,   109,    29,   109,     5,   103,   100,
     111,   111,    20,   111,    20,   111,    24,   111,   111,   105,
     108,    16,    17,    18,    19,     4,    67,    67,     7,    13,
      90,     5,    95,     5,    33,    10,    59,    61,    79,    91,
      97,   104,    59,    61,   101,   111,   111,   111,     5,    86,
     106,   106,   107,   107,    70,    71,     7,     8,     5,     6,
      29,    59,    61,    96,    99,    60,     5,    12,    72,    74,
      64,    37,    52,    89,    13,    94,   101,    11,    73,    75,
      76,    77,    68,    69,     7,    96,    75,     7,    13,    78,
      43,    66,    72,     6,     8,     7,    68,    13,    37,    51
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
#line 52 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 57 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 66 "compilador.y"
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
#line 94 "compilador.y"
    {
            num_vars_inicial = num_vars;
            }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 99 "compilador.y"
    { /* AMEM */
            sprintf ( dados, "AMEM %d", percorre_vars);
            geraCodigo ( NULL, dados);
            }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 108 "compilador.y"
    {
            percorre_vars = num_vars - num_vars_inicial;
            insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 115 "compilador.y"
    {
            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_proc_func, tipo_valor_referencia, token, percorre_vars);
            }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 123 "compilador.y"
    {
            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_proc_func, token);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 130 "compilador.y"
    { /* insere última vars na tabela de símbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 138 "compilador.y"
    { /* insere vars na tabela de símbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 154 "compilador.y"
    {
            printf ( "Empilha vars %d\n", num_vars);
            empilha_Inteiro ( p_num_vars, num_vars);

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 164 "compilador.y"
    {
            printf ( "Desempilha vars %d\n", num_vars);
            num_vars = desempilha_Inteiro ( p_num_vars);

            desempilha_Rotulo ( &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 201 "compilador.y"
    {
            sprintf ( nome_proc_func, "%s", token);
            sprintf ( categoria, "procedimento");
            sprintf ( tipo_retorno, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 208 "compilador.y"
    {
            }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 211 "compilador.y"
    {
            sprintf ( nome_proc_func, "%s", token);
            sprintf ( categoria, "funcao");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 217 "compilador.y"
    {
            }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 228 "compilador.y"
    {
            empilha_Inteiro ( p_deslocamentos, desloc);
            desloc = 0;
            nivel_lexico++;

            geraCodigo ( rotulo1, "NADA");
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 237 "compilador.y"
    {
            desloc = desempilha_Inteiro ( p_deslocamentos);
            nivel_lexico--;
            }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 244 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 252 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_referencia");
            }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 256 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_valor");
            }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 266 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 275 "compilador.y"
    {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 282 "compilador.y"
    {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 292 "compilador.y"
    {
                    sprintf ( dados, "%s", token);
                }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 301 "compilador.y"
    {
            sprintf ( dados, "DMEN 1");
            geraCodigo ( NULL, dados);
            }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 308 "compilador.y"
    {
            procura_simb ( dados, &x, &y, &tipo );
            if ( x == -99 ) { // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", dados);
                imprimeErro ( dados );
                exit ( 1);
            }
            }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 316 "compilador.y"
    {
            sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 323 "compilador.y"
    {
            sprintf ( categoria, "procedimento");
            if ( procura_cat ( dados, categoria, &rotulo1) == -99 ) {
                sprintf ( dados, "Procedimento '%s' nao foi declarada", dados);
                imprimeErro ( dados);
                exit ( 1);
            }
            }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 334 "compilador.y"
    {
            sprintf ( categoria, "funcao");
            if ( procura_cat ( dados, categoria, &rotulo1) == -99 ) {
                sprintf ( dados, "Funcao '%s' nao foi declarada", dados);
                imprimeErro ( dados);
                exit ( 1);
            }
            sprintf ( dados, "AMEN 1");
            geraCodigo ( NULL, dados );
            }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 353 "compilador.y"
    {
            sprintf ( dados, "CHPR %s, %d", rotulo1, nivel_lexico);
            geraCodigo ( NULL, dados );
            }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 367 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 375 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 382 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 392 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            desempilha_Rotulo ( &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 400 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            desempilha_Rotulo ( &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 411 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 416 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 424 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 431 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 446 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo1);

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVS %s", rotulo2);
            geraCodigo ( NULL, dados);

            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 466 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 470 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 478 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 482 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 490 "compilador.y"
    {
                sprintf ( dados, "%s", token);
            }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 494 "compilador.y"
    {
            procura_simb( token, &x, &y, &tipo );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados);
                exit ( 1);
            }
            sprintf ( dados, "CRVL %d, %d", x, y);
            geraCodigo ( NULL, dados);
            }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 505 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 515 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 522 "compilador.y"
    {
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 526 "compilador.y"
    {
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 530 "compilador.y"
    {
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 534 "compilador.y"
    {
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 538 "compilador.y"
    {
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 542 "compilador.y"
    {
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 546 "compilador.y"
    {
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 550 "compilador.y"
    {
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 554 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 563 "compilador.y"
    {
            procura_simb ( token, &x, &y, &tipo );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados );
                exit ( 1);
            }
            sprintf ( dados, "CRVL %d, %d", x, y);
            geraCodigo ( NULL, dados);
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 574 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2258 "compilador.tab.c"
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
#line 582 "compilador.y"


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
    inicia_pilha_rotulos ();
    inicia_pilha_inteiros ();
    inicia_pilha_inteiros ();

    yyin = fp;
    yyparse ();

    return 0;
}

