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
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

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
       0,     0,     3,     4,    14,    16,    17,    21,    23,    26,
      27,    30,    32,    33,    34,    41,    43,    45,    47,    51,
      53,    57,    59,    63,    66,    68,    72,    76,    80,    84,
      87,    90,    93,    94,    96,    98,   100,   101,   102,   110,
     111,   112,   122,   126,   127,   128,   132,   133,   136,   137,
     138,   142,   143,   146,   150,   152,   153,   158,   162,   164,
     165,   169,   171,   173,   175,   178,   179,   182,   183,   186,
     191,   193,   194,   198,   200,   201,   202,   206,   207,   214,
     215,   220,   222,   224,   227,   231,   232,   239,   240,   245,
     247,   249,   250,   254,   255,   257,   259,   263,   267,   269,
     273,   277,   279,   281,   283,   287,   289,   292,   296,   300,
     304,   309,   313,   318,   322,   326,   331,   333,   335,   337
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    -1,    41,     3,    42,     4,    55,     5,
       7,    43,     9,    -1,    13,    -1,    -1,    45,    44,    56,
      -1,    46,    -1,    12,    47,    -1,    -1,    47,    48,    -1,
      48,    -1,    -1,    -1,    49,    54,     8,    51,    50,     7,
      -1,    37,    -1,    37,    -1,    37,    -1,    54,     6,    13,
      -1,    13,    -1,    55,     6,    13,    -1,    13,    -1,    13,
      80,    43,    -1,    60,    43,    -1,    57,    -1,    10,    58,
      11,    -1,    77,     7,    58,    -1,    88,     7,    58,    -1,
      94,     7,    58,    -1,    77,     7,    -1,    88,     7,    -1,
      94,     7,    -1,    -1,    77,    -1,    88,    -1,    94,    -1,
      -1,    -1,    35,    13,    61,    65,     7,    62,    66,    -1,
      -1,    -1,    36,    13,    63,    65,     8,    53,     7,    64,
      66,    -1,     4,    68,     5,    -1,    -1,    -1,    67,    43,
       7,    -1,    -1,    69,    70,    -1,    -1,    -1,    12,    71,
      73,    -1,    -1,    72,    73,    -1,    74,     7,    70,    -1,
      74,    -1,    -1,    75,    76,     8,    52,    -1,    76,     6,
      13,    -1,    13,    -1,    -1,    13,    78,    79,    -1,    80,
      -1,    81,    -1,    83,    -1,    14,   102,    -1,    -1,    82,
      85,    -1,    -1,    84,    85,    -1,     4,    87,     5,    86,
      -1,    86,    -1,    -1,    87,     6,    13,    -1,    13,    -1,
      -1,    -1,    27,    89,    90,    -1,    -1,     4,   105,     5,
      29,    91,    93,    -1,    -1,   105,    29,    92,    93,    -1,
      59,    -1,    57,    -1,    32,    95,    -1,    32,    95,    99,
      -1,    -1,     4,   105,     5,    33,    96,    98,    -1,    -1,
     105,    33,    97,    98,    -1,    59,    -1,    57,    -1,    -1,
      34,   100,   101,    -1,    -1,    59,    -1,    57,    -1,   102,
      16,   103,    -1,   102,    17,   103,    -1,   103,    -1,   103,
      18,   104,    -1,   103,    19,   104,    -1,   104,    -1,    13,
      -1,    15,    -1,     4,   102,     5,    -1,   106,    -1,    24,
     106,    -1,   106,    20,   107,    -1,   106,    21,   107,    -1,
     106,    22,   107,    -1,   106,    22,    20,   107,    -1,   106,
      23,   107,    -1,   106,    23,    20,   107,    -1,   106,    25,
     107,    -1,   106,    26,   107,    -1,   106,    25,    24,   107,
      -1,   107,    -1,    13,    -1,    15,    -1,     4,   105,     5,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    52,    65,    77,    76,    96,   100,   101,
     105,   106,   110,   115,   110,   123,   130,   138,   145,   153,
     164,   165,   169,   170,   171,   175,   179,   180,   181,   182,
     183,   184,   185,   189,   190,   191,   196,   203,   195,   206,
     212,   205,   217,   218,   223,   223,   237,   237,   240,   245,
     244,   249,   249,   254,   255,   259,   259,   267,   274,   285,
     284,   297,   298,   299,   307,   315,   315,   326,   326,   339,
     340,   345,   352,   353,   354,   359,   358,   367,   366,   374,
     373,   383,   391,   402,   407,   416,   415,   423,   422,   432,
     433,   438,   437,   448,   452,   453,   457,   461,   465,   469,
     473,   477,   481,   492,   497,   501,   502,   509,   513,   517,
     521,   525,   529,   533,   537,   541,   546,   550,   561,   566
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
  "$@2", "parte_declara_vars", "var", "declara_vars", "declara_var", "$@3",
  "$@4", "tipo", "tipo_parametro", "tipo_retorno_func", "lista_id_var",
  "lista_idents", "comando_composto", "comando_composto_2", "comandos",
  "comando_sem_ponto_e_virgula", "procedimento_ou_funcao", "$@5", "$@6",
  "$@7", "$@8", "procedimento_ou_funcao_2", "procedimento_ou_funcao_3",
  "$@9", "parametros_vars_proc_ou_func", "$@10", "vars_proc_ou_func",
  "$@11", "$@12", "vars_proc_ou_func_2", "var_proc_ou_func", "$@13",
  "lista_id_var_proc_ou_func", "atrib_proc_func", "$@14",
  "atrib_proc_func_2", "atribuicao", "chama_procedimento", "$@15",
  "chama_funcao", "$@16", "chama_proc_func", "chama_proc_func_2",
  "lista_id_var_parametro", "repeticao", "$@17", "repeticao_2", "$@18",
  "$@19", "repeticao_3", "condicao", "condicao_se_entao", "$@20", "$@21",
  "condicao_se_entao_2", "condicao_senao", "$@22", "condicao_senao_2",
  "expressao_aritmetica", "expressao_termo", "expressao_fator",
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
       0,    39,    41,    40,    42,    44,    43,    45,    46,    46,
      47,    47,    49,    50,    48,    51,    52,    53,    54,    54,
      55,    55,    56,    56,    56,    57,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    61,    62,    60,    63,
      64,    60,    65,    65,    67,    66,    69,    68,    68,    71,
      70,    72,    70,    73,    73,    75,    74,    76,    76,    78,
      77,    79,    79,    79,    80,    82,    81,    84,    83,    85,
      85,    86,    87,    87,    87,    89,    88,    91,    90,    92,
      90,    93,    93,    94,    94,    96,    95,    97,    95,    98,
      98,   100,    99,    99,   101,   101,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   107
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     0,     3,     1,     2,     0,
       2,     1,     0,     0,     6,     1,     1,     1,     3,     1,
       3,     1,     3,     2,     1,     3,     3,     3,     3,     2,
       2,     2,     0,     1,     1,     1,     0,     0,     7,     0,
       0,     9,     3,     0,     0,     3,     0,     2,     0,     0,
       3,     0,     2,     3,     1,     0,     4,     3,     1,     0,
       3,     1,     1,     1,     2,     0,     2,     0,     2,     4,
       1,     0,     3,     1,     0,     0,     3,     0,     6,     0,
       4,     1,     1,     2,     3,     0,     6,     0,     4,     1,
       1,     0,     3,     0,     1,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     3,     1,     2,     3,     3,     3,
       4,     3,     4,     3,     3,     4,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    21,     0,
       0,     0,     9,    20,    12,     0,     5,     7,     8,    11,
       0,     3,     0,    10,    19,     0,    32,     0,     0,     0,
       6,    24,     9,     0,     0,    59,    75,     0,     0,     0,
       0,     0,     0,     9,    36,    39,    23,    18,    15,    13,
      65,     0,     0,   117,   118,     0,    83,     0,   105,   116,
      25,    29,    30,    31,     0,   102,   103,    64,    98,   101,
      22,    43,    43,     0,    60,    61,    62,    71,    63,    71,
       0,    76,     0,     0,     0,   106,    91,    84,    87,     0,
       0,     0,     0,     0,     0,    26,    27,    28,     0,     0,
       0,     0,     0,    46,     0,     0,    14,    74,    66,    70,
      68,     0,    79,     0,   119,     0,     0,   107,   108,     0,
     109,     0,   111,     0,   113,   114,   104,    96,    97,    99,
     100,     0,    51,    37,     0,    73,     0,   119,     0,   119,
      85,    95,    94,    33,    34,    35,    92,    90,    89,    88,
     110,   112,   115,    42,    49,    47,    55,    44,    17,     0,
      71,     0,    77,    82,    81,    80,     0,    55,    52,    54,
       0,    38,     9,    40,    69,    72,     0,    86,    50,    51,
      58,     0,     0,    44,    78,    53,     0,     0,    45,    41,
      57,    16,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    15,    22,    16,    17,    18,    19,
      20,    73,    49,   192,   159,    25,     9,    30,   147,    38,
     148,    32,    71,   157,    72,   183,   104,   171,   172,   131,
     132,   155,   167,   156,   168,   169,   170,   181,   143,    50,
      74,    43,    76,    77,    78,    79,   108,   109,   136,   144,
      51,    81,   176,   138,   165,   145,    56,   166,   116,   149,
      87,   115,   146,    67,    68,    69,    57,    58,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -114
static const yytype_int16 yypact[] =
{
    -114,    11,     5,  -114,     3,  -114,    33,    37,  -114,    26,
      47,    65,    85,  -114,  -114,    94,  -114,  -114,  -114,  -114,
      95,  -114,    17,  -114,  -114,    20,    45,    97,    99,   100,
    -114,  -114,    85,   101,    78,  -114,  -114,    44,   106,   111,
     112,   113,    70,    85,  -114,  -114,  -114,  -114,  -114,  -114,
      97,    51,    52,  -114,  -114,    83,    87,    90,    79,  -114,
    -114,    45,    45,    45,    70,  -114,  -114,    75,    43,  -114,
    -114,   118,   118,   117,  -114,  -114,  -114,   121,  -114,   121,
      52,  -114,    98,    52,   123,    79,  -114,  -114,  -114,    83,
      83,    66,    69,    56,    83,  -114,  -114,  -114,    18,    70,
      70,    70,    70,   124,   119,   122,  -114,   120,  -114,  -114,
    -114,   126,  -114,   127,   102,    -3,    -3,  -114,  -114,    83,
    -114,    83,  -114,    83,  -114,  -114,  -114,    43,    43,  -114,
    -114,   129,   125,  -114,   103,  -114,    89,   107,    -3,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,   131,
    -114,   130,  -114,  -114,  -114,  -114,    -3,  -114,  -114,   132,
     133,  -114,    85,  -114,  -114,  -114,    -3,  -114,  -114,   125,
    -114,    82,   135,  -114,  -114,  -114,   134,   108,  -114,  -114,
    -114,  -114,  -114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,  -114,  -114,   -31,  -114,  -114,  -114,  -114,   137,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,   -22,   -48,
    -113,  -114,  -114,  -114,  -114,  -114,    72,   -35,  -114,  -114,
    -114,   -30,  -114,  -114,   -16,  -114,  -114,  -114,   -23,  -114,
    -114,   109,  -114,  -114,  -114,  -114,    71,    -8,  -114,   -20,
    -114,  -114,  -114,  -114,   -19,   -17,  -114,  -114,  -114,   -13,
    -114,  -114,  -114,    92,     7,     8,   -47,   105,   -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      31,    46,   142,    39,    82,    84,    40,    26,     4,    41,
      35,     3,    70,    95,    96,    97,     5,   117,   118,   120,
     122,   124,   125,   126,    36,   164,    33,    26,    34,    37,
      27,    10,    11,   111,    99,   100,   113,     7,    39,    39,
      39,    40,    40,    40,    41,    41,    41,   150,    52,   151,
       8,   152,    28,    29,    12,    80,    83,    53,    35,    54,
      83,   101,   102,   164,    53,    53,    54,    54,    55,    53,
      83,    54,    36,    83,    64,    55,    55,    37,    13,    53,
     123,    54,    53,    65,    54,    66,   119,    83,   186,   121,
     187,    99,   100,   141,   160,   161,    53,    14,    54,    89,
      90,    91,    92,    21,    93,    94,   127,   128,    24,   129,
     130,    42,    44,    45,    47,    48,   163,    60,    61,    62,
      63,    86,   103,    88,   106,   107,   133,   112,   114,   -48,
     134,   137,   139,   135,   153,   140,   162,   154,   173,   179,
     158,   182,   188,   175,   105,   191,   180,   190,   189,   185,
     110,   178,   174,   177,   163,    23,    98,   184,     0,    75,
      85
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-114))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      22,    32,   115,    26,    51,    52,    26,    10,     3,    26,
      13,     0,    43,    61,    62,    63,    13,    89,    90,    91,
      92,    93,    94,     5,    27,   138,     6,    10,     8,    32,
      13,     5,     6,    80,    16,    17,    83,     4,    61,    62,
      63,    61,    62,    63,    61,    62,    63,   119,     4,   121,
      13,   123,    35,    36,     7,     4,     4,    13,    13,    15,
       4,    18,    19,   176,    13,    13,    15,    15,    24,    13,
       4,    15,    27,     4,     4,    24,    24,    32,    13,    13,
      24,    15,    13,    13,    15,    15,    20,     4,     6,    20,
       8,    16,    17,   115,     5,     6,    13,    12,    15,    20,
      21,    22,    23,     9,    25,    26,    99,   100,    13,   101,
     102,    14,    13,    13,    13,    37,   138,    11,     7,     7,
       7,    34,     4,    33,     7,     4,     7,    29,     5,     5,
       8,     5,     5,    13,     5,    33,    29,    12,     7,     7,
      37,   172,     7,    13,    72,    37,    13,    13,   183,   179,
      79,   167,   160,   166,   176,    18,    64,   176,    -1,    50,
      55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,     3,    13,    42,     4,    13,    55,
       5,     6,     7,    13,    12,    43,    45,    46,    47,    48,
      49,     9,    44,    48,    13,    54,    10,    13,    35,    36,
      56,    57,    60,     6,     8,    13,    27,    32,    58,    77,
      88,    94,    14,    80,    13,    13,    43,    13,    37,    51,
      78,    89,     4,    13,    15,    24,    95,   105,   106,   107,
      11,     7,     7,     7,     4,    13,    15,   102,   103,   104,
      43,    61,    63,    50,    79,    80,    81,    82,    83,    84,
       4,    90,   105,     4,   105,   106,    34,    99,    33,    20,
      21,    22,    23,    25,    26,    58,    58,    58,   102,    16,
      17,    18,    19,     4,    65,    65,     7,     4,    85,    86,
      85,   105,    29,   105,     5,   100,    97,   107,   107,    20,
     107,    20,   107,    24,   107,   107,     5,   103,   103,   104,
     104,    68,    69,     7,     8,    13,    87,     5,    92,     5,
      33,    57,    59,    77,    88,    94,   101,    57,    59,    98,
     107,   107,   107,     5,    12,    70,    72,    62,    37,    53,
       5,     6,    29,    57,    59,    93,    96,    71,    73,    74,
      75,    66,    67,     7,    86,    13,    91,    98,    73,     7,
      13,    76,    43,    64,    93,    70,     6,     8,     7,    66,
      13,    37,    52
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

  case 5:

/* Line 1806 of yacc.c  */
#line 77 "compilador.y"
    {
            empilha_Inteiro ( p_num_vars, num_vars);

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);

            }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 87 "compilador.y"
    {
            desempilha_Inteiro ( p_num_vars, num_vars);

            desempilha_Rotulo ( &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 110 "compilador.y"
    {
              num_vars_inicial = num_vars;
              }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 115 "compilador.y"
    { /* AMEM */
              sprintf ( dados, "AMEM %d", num_vars);
              geraCodigo ( NULL, dados);
              }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 124 "compilador.y"
    {
                percorre_vars = num_vars - num_vars_inicial;
                insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 131 "compilador.y"
    {
            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_proc_func, tipo_valor_referencia, token, percorre_vars);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 139 "compilador.y"
    {
            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_proc_func, token);
            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 146 "compilador.y"
    { /* insere última vars na tabela de símbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 154 "compilador.y"
    { /* insere vars na tabela de símbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 196 "compilador.y"
    {
            sprintf ( nome_proc_func, "%s", token);
            sprintf ( categoria, "procedimento");
            sprintf ( tipo_retorno, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 203 "compilador.y"
    {
            }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 206 "compilador.y"
    {
            sprintf ( nome_proc_func, "%s", token);
            sprintf ( categoria, "funcao");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 212 "compilador.y"
    {
            }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 223 "compilador.y"
    {
            empilha_Inteiro ( p_deslocamentos, desloc);
            desloc = 0;
            nivel_lexico++;
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 230 "compilador.y"
    {
            desloc = desempilha_Inteiro ( p_deslocamentos);
            nivel_lexico--;
            }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 237 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 245 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_referencia");
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 249 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_valor");
            }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 259 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 268 "compilador.y"
    {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 275 "compilador.y"
    {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 285 "compilador.y"
    {
            procura_simb ( token, &x, &y, &tipo );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados );
                exit ( 1);
            }
            sprintf ( dados, "%s", token);
            }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 300 "compilador.y"
    {
            sprintf ( dados, "DMEN 1");
            geraCodigo ( NULL, dados);
            }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 308 "compilador.y"
    {
            sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 315 "compilador.y"
    {
            sprintf ( categoria, "procedimento");
            if ( procura_cat ( dados, categoria, &rotulo1) == -99 ) {
                sprintf ( dados, "Procedimento '%s' nao foi declarada", dados);
                imprimeErro ( dados);
                exit ( 1);
            }
            }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 326 "compilador.y"
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

  case 71:

/* Line 1806 of yacc.c  */
#line 345 "compilador.y"
    {
            sprintf ( dados, "CHPR %s, %d", rotulo1, nivel_lexico);
            geraCodigo ( NULL, dados );
            }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 359 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 367 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 374 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 384 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            desempilha_Rotulo ( &rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 82:

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

  case 83:

/* Line 1806 of yacc.c  */
#line 403 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 408 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 416 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 423 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Rotulo ( rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 438 "compilador.y"
    {
            desempilha_Rotulo ( &rotulo1);

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_Rotulo ( rotulo2);
            sprintf ( dados, "DSVS %s", rotulo2);
            geraCodigo ( NULL, dados);

            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 458 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 462 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 470 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 474 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 482 "compilador.y"
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

  case 103:

/* Line 1806 of yacc.c  */
#line 493 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 503 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 510 "compilador.y"
    {
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 514 "compilador.y"
    {
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 518 "compilador.y"
    {
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 522 "compilador.y"
    {
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 526 "compilador.y"
    {
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 530 "compilador.y"
    {
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 534 "compilador.y"
    {
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 538 "compilador.y"
    {
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 542 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 551 "compilador.y"
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

  case 118:

/* Line 1806 of yacc.c  */
#line 562 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2230 "compilador.tab.c"
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
#line 570 "compilador.y"


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

