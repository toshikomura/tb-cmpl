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

int num_vars;
int num_vars_inicial;

int eh_parametro_referencia;
int eh_vars_proc_func;

int nivel_lexico;
int desloc;

int x, y;
int percorre_vars;

/* Função para corrigir erro de versões */
void yyerror (char const *);



/* Line 268 of yacc.c  */
#line 100 "compilador.tab.c"

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
     LOWER_THEN_ELSE = 292
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
#line 179 "compilador.tab.c"

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
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    14,    16,    17,    21,    23,    24,
      28,    29,    32,    34,    35,    36,    43,    45,    47,    51,
      53,    57,    59,    62,    65,    67,    71,    75,    79,    83,
      86,    89,    92,    93,    95,    97,    99,   104,   111,   114,
     118,   119,   120,   124,   125,   128,   129,   130,   134,   135,
     138,   142,   144,   145,   150,   151,   156,   157,   161,   162,
     169,   170,   175,   177,   179,   182,   186,   187,   194,   195,
     200,   202,   204,   205,   209,   210,   212,   214,   218,   222,
     224,   228,   232,   234,   236,   238,   242,   244,   247,   251,
     255,   259,   264,   268,   273,   277,   281,   286,   288,   290,
     292
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    -1,    40,     3,    41,     4,    54,     5,
       7,    42,     9,    -1,    13,    -1,    -1,    44,    43,    55,
      -1,    45,    -1,    -1,    46,    12,    47,    -1,    -1,    47,
      48,    -1,    48,    -1,    -1,    -1,    49,    53,     8,    51,
      50,     7,    -1,    13,    -1,    13,    -1,    53,     6,    13,
      -1,    13,    -1,    54,     6,    13,    -1,    13,    -1,    72,
      42,    -1,    59,    42,    -1,    56,    -1,    10,    57,    11,
      -1,    72,     7,    57,    -1,    74,     7,    57,    -1,    80,
       7,    57,    -1,    72,     7,    -1,    74,     7,    -1,    80,
       7,    -1,    -1,    72,    -1,    74,    -1,    80,    -1,    35,
      60,     7,    62,    -1,    36,    60,     8,    52,     7,    62,
      -1,    13,    61,    -1,     4,    64,     5,    -1,    -1,    -1,
      63,    42,     7,    -1,    -1,    65,    66,    -1,    -1,    -1,
      12,    67,    69,    -1,    -1,    68,    69,    -1,    70,     7,
      66,    -1,    70,    -1,    -1,    71,    53,     8,    51,    -1,
      -1,    13,    73,    14,    88,    -1,    -1,    27,    75,    76,
      -1,    -1,     4,    91,     5,    29,    77,    79,    -1,    -1,
      91,    29,    78,    79,    -1,    58,    -1,    55,    -1,    32,
      81,    -1,    32,    81,    85,    -1,    -1,     4,    91,     5,
      33,    82,    84,    -1,    -1,    91,    33,    83,    84,    -1,
      58,    -1,    55,    -1,    -1,    34,    86,    87,    -1,    -1,
      58,    -1,    55,    -1,    88,    16,    89,    -1,    88,    17,
      89,    -1,    89,    -1,    89,    18,    90,    -1,    89,    19,
      90,    -1,    90,    -1,    13,    -1,    15,    -1,     4,    88,
       5,    -1,    92,    -1,    24,    92,    -1,    92,    20,    93,
      -1,    92,    21,    93,    -1,    92,    22,    93,    -1,    92,
      22,    20,    93,    -1,    92,    23,    93,    -1,    92,    23,
      20,    93,    -1,    92,    25,    93,    -1,    92,    26,    93,
      -1,    92,    25,    24,    93,    -1,    93,    -1,    13,    -1,
      15,    -1,     4,    91,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    49,    62,    73,    72,    79,    83,    83,
      87,    91,    92,    96,   101,    96,   109,   117,   123,   145,
     170,   171,   175,   176,   177,   181,   185,   186,   187,   188,
     189,   190,   191,   195,   196,   197,   201,   202,   205,   209,
     210,   215,   215,   227,   227,   230,   235,   234,   239,   239,
     244,   245,   249,   249,   262,   261,   278,   277,   286,   285,
     293,   292,   302,   310,   321,   326,   335,   334,   342,   341,
     351,   352,   357,   356,   367,   371,   372,   376,   380,   384,
     388,   392,   396,   400,   411,   416,   420,   421,   428,   432,
     436,   440,   444,   448,   452,   456,   460,   465,   469,   480,
     485
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
  "SE", "ENTAO", "SENAO", "PROCEDIMENTO", "FUNCAO", "LOWER_THEN_ELSE",
  "$accept", "programa", "$@1", "sem_tipo", "bloco", "$@2",
  "parte_declara_vars", "var", "$@3", "declara_vars", "declara_var", "$@4",
  "$@5", "tipo", "tipo_retorno_func", "lista_id_var", "lista_idents",
  "comando_composto", "comando_composto_2", "comandos",
  "comando_sem_ponto_e_virgula", "procedimento_ou_funcao",
  "procedimento_ou_funcao_2", "procedimento_ou_funcao_3",
  "procedimento_ou_funcao_4", "$@6", "parametros_vars_proc_ou_func", "$@7",
  "vars_proc_ou_func", "$@8", "$@9", "vars_proc_ou_func_2",
  "var_proc_ou_func", "$@10", "atribuicao", "$@11", "repeticao", "$@12",
  "repeticao_2", "$@13", "$@14", "repeticao_3", "condicao",
  "condicao_se_entao", "$@15", "$@16", "condicao_se_entao_2",
  "condicao_senao", "$@17", "condicao_senao_2", "expressao_aritmetica",
  "expressao_termo", "expressao_fator", "expressao_booleana_geral",
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    40,    39,    41,    43,    42,    44,    46,    45,
      45,    47,    47,    49,    50,    48,    51,    52,    53,    53,
      54,    54,    55,    55,    55,    56,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    59,    59,    60,    61,
      61,    63,    62,    65,    64,    64,    67,    66,    68,    66,
      69,    69,    71,    70,    73,    72,    75,    74,    77,    76,
      78,    76,    79,    79,    80,    80,    82,    81,    83,    81,
      84,    84,    86,    85,    85,    87,    87,    88,    88,    88,
      89,    89,    89,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     0,     3,     1,     0,     3,
       0,     2,     1,     0,     0,     6,     1,     1,     3,     1,
       3,     1,     2,     2,     1,     3,     3,     3,     3,     2,
       2,     2,     0,     1,     1,     1,     4,     6,     2,     3,
       0,     0,     3,     0,     2,     0,     0,     3,     0,     2,
       3,     1,     0,     4,     0,     4,     0,     3,     0,     6,
       0,     4,     1,     1,     2,     3,     0,     6,     0,     4,
       1,     1,     0,     3,     0,     1,     1,     3,     3,     1,
       3,     3,     1,     1,     1,     3,     1,     2,     3,     3,
       3,     4,     3,     4,     3,     3,     4,     1,     1,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    21,     0,
       0,     0,    10,    20,     0,     5,     7,     0,     3,     0,
      13,    32,    54,     0,     0,     6,    24,    10,    10,     9,
      12,     0,    56,     0,     0,     0,     0,     0,     0,    40,
       0,     0,    23,    22,    11,    19,     0,     0,     0,    98,
      99,     0,    64,     0,    86,    97,    25,    29,    30,    31,
       0,    43,    38,    41,     0,     0,     0,     0,    57,     0,
       0,     0,    87,    72,    65,    68,     0,     0,     0,     0,
       0,     0,    26,    27,    28,     0,    83,    84,    55,    79,
      82,     0,    48,    36,    10,    17,     0,    18,    16,    14,
       0,    60,     0,   100,     0,     0,    88,    89,     0,    90,
       0,    92,     0,    94,    95,     0,     0,     0,     0,     0,
      39,    46,    44,    52,     0,    41,     0,   100,     0,   100,
      66,    76,    75,    10,    34,    35,    73,    71,    70,    69,
      91,    93,    96,    85,    77,    78,    80,    81,    52,    49,
      51,     0,    42,    37,    15,    58,    63,    62,    61,     0,
      47,    48,     0,     0,    67,    50,     0,    59,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    43,    19,    15,    16,    17,    29,
      30,    31,   126,    99,    96,    46,     9,   137,    26,    34,
     138,    27,    40,    62,    93,    94,    91,    92,   122,   148,
     123,   149,   150,   151,   133,    38,   134,    47,    68,   163,
     128,   158,   135,    52,   159,   105,   139,    74,   104,   136,
      88,    89,    90,    53,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -103
static const yytype_int16 yypact[] =
{
    -103,    14,    27,  -103,    44,  -103,   101,    77,  -103,     1,
     106,    95,   102,  -103,   107,  -103,  -103,   103,  -103,     2,
    -103,    50,  -103,   104,   104,  -103,  -103,   102,   102,  -103,
    -103,   105,  -103,    47,   108,   113,   114,   115,   109,   120,
     118,   119,  -103,  -103,  -103,  -103,    86,    51,    54,  -103,
    -103,    80,    94,    93,    81,  -103,  -103,    50,    50,    50,
      84,   124,  -103,  -103,   117,   121,   122,    54,  -103,   110,
      54,   126,    81,  -103,  -103,  -103,    80,    80,    61,    76,
      55,    80,  -103,  -103,  -103,    84,  -103,  -103,     8,    21,
    -103,   127,   125,  -103,   102,  -103,   129,  -103,  -103,  -103,
     128,  -103,   133,   112,     0,     0,  -103,  -103,    80,  -103,
      80,  -103,    80,  -103,  -103,    12,    84,    84,    84,    84,
    -103,  -103,  -103,  -103,   134,  -103,   135,   111,     0,  -103,
    -103,  -103,  -103,    -3,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,    21,    21,  -103,  -103,  -103,  -103,
     136,   105,  -103,  -103,  -103,  -103,  -103,  -103,  -103,     0,
    -103,   125,    92,     0,  -103,  -103,   122,  -103,  -103
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,  -103,   -11,  -103,  -103,  -103,  -103,  -103,
     123,  -103,  -103,   -20,  -103,    -4,  -103,   -19,  -103,    53,
    -102,  -103,   130,  -103,    23,  -103,  -103,  -103,   -12,  -103,
    -103,     3,  -103,  -103,   -16,  -103,   -13,  -103,  -103,  -103,
    -103,    -8,   -10,  -103,  -103,  -103,    -9,  -103,  -103,  -103,
      68,   -44,   -32,   -14,   116,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -46
static const yytype_int16 yytable[] =
{
      25,    14,   132,    28,   -33,    35,    10,    11,    36,    -8,
      21,    37,    21,    22,     3,    22,    42,   143,   106,   107,
     109,   111,   113,   114,   116,   117,   157,    32,   116,   117,
       4,   -33,    33,    69,    71,    23,    24,    23,    24,   118,
     119,    35,    35,    35,    36,    36,    36,    37,    37,    37,
     140,    48,   141,   100,   142,    67,   102,     5,    70,    70,
      49,   157,    50,    22,    49,    70,    50,    49,    49,    50,
      50,    51,   144,   145,    49,    51,    50,    32,    51,   112,
      70,   108,    33,   124,    70,   131,   146,   147,    85,    49,
       8,    50,    65,    49,    66,    50,   110,    86,    65,    87,
     166,    76,    77,    78,    79,     7,    80,    81,    13,   156,
      82,    83,    84,    12,    -8,    20,    18,    39,    45,    56,
      57,    58,    59,    60,    61,    63,    75,    64,    73,   -45,
      95,   103,   120,   127,    97,    98,   125,   121,   129,   101,
     155,   152,   154,   161,   156,   130,   168,   162,   153,   165,
     164,   160,    44,   115,    41,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-103))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      19,    12,   104,    19,     7,    21,     5,     6,    21,    12,
      10,    21,    10,    13,     0,    13,    27,     5,    76,    77,
      78,    79,    80,    81,    16,    17,   128,    27,    16,    17,
       3,    34,    32,    47,    48,    35,    36,    35,    36,    18,
      19,    57,    58,    59,    57,    58,    59,    57,    58,    59,
     108,     4,   110,    67,   112,     4,    70,    13,     4,     4,
      13,   163,    15,    13,    13,     4,    15,    13,    13,    15,
      15,    24,   116,   117,    13,    24,    15,    27,    24,    24,
       4,    20,    32,    94,     4,   104,   118,   119,     4,    13,
      13,    15,     6,    13,     8,    15,    20,    13,     6,    15,
       8,    20,    21,    22,    23,     4,    25,    26,    13,   128,
      57,    58,    59,     7,    12,    12,     9,    13,    13,    11,
       7,     7,     7,    14,     4,     7,    33,     8,    34,     5,
      13,     5,     5,     5,    13,    13,     7,    12,     5,    29,
      29,     7,     7,     7,   163,    33,   166,   151,   125,   161,
     159,   148,    29,    85,    24,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    40,     0,     3,    13,    41,     4,    13,    54,
       5,     6,     7,    13,    42,    44,    45,    46,     9,    43,
      12,    10,    13,    35,    36,    55,    56,    59,    72,    47,
      48,    49,    27,    32,    57,    72,    74,    80,    73,    13,
      60,    60,    42,    42,    48,    13,    53,    75,     4,    13,
      15,    24,    81,    91,    92,    93,    11,     7,     7,     7,
      14,     4,    61,     7,     8,     6,     8,     4,    76,    91,
       4,    91,    92,    34,    85,    33,    20,    21,    22,    23,
      25,    26,    57,    57,    57,     4,    13,    15,    88,    89,
      90,    64,    65,    62,    63,    13,    52,    13,    13,    51,
      91,    29,    91,     5,    86,    83,    93,    93,    20,    93,
      20,    93,    24,    93,    93,    88,    16,    17,    18,    19,
       5,    12,    66,    68,    42,     7,    50,     5,    78,     5,
      33,    55,    58,    72,    74,    80,    87,    55,    58,    84,
      93,    93,    93,     5,    89,    89,    90,    90,    67,    69,
      70,    71,     7,    62,     7,    29,    55,    58,    79,    82,
      69,     7,    53,    77,    84,    66,     8,    79,    51
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
#line 49 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 54 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo( NULL, dados);
             geraCodigo (NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 63 "compilador.y"
    {
            sprintf( categoria, "nome_programa");
            empilha_Simbolo_TB_SIMB ( token, categoria, 0, 0);
            insere_tipo_Simbolo_TB_SIMB ( "sem_tipo", 1);
            }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 73 "compilador.y"
    {
              }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 83 "compilador.y"
    {
            eh_vars_proc_func = 0;
            eh_parametro_referencia = 0;
            }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 96 "compilador.y"
    {
              num_vars_inicial = num_vars;
              }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 101 "compilador.y"
    { /* AMEM */
              sprintf ( dados, "AMEM %d", num_vars);
              geraCodigo( NULL, dados);
              }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 110 "compilador.y"
    {
                percorre_vars = num_vars - num_vars_inicial;
                insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 118 "compilador.y"
    {
            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 124 "compilador.y"
    { /* insere última vars na tabela de símbolos */

            if ( eh_parametro_referencia == 1)
                sprintf ( categoria, "var_referencia");
            else
                sprintf ( categoria, "var_simples");

            if ( eh_vars_proc_func == 1) {
                procura_simb( token, &x, &y );
                if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                    sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                    imprimeErro( dados );
                    exit(1);
                }
            }
            else {
                empilha_Simbolo_TB_SIMB ( token, categoria, nivel_lexico, desloc);
                desloc++;
                num_vars++;
            }
            }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 146 "compilador.y"
    { /* insere vars na tabela de símbolos */

            if ( eh_parametro_referencia == 1)
                sprintf ( categoria, "var_referencia");
            else
                sprintf ( categoria, "var_simples");

            if ( eh_vars_proc_func == 1) {
                procura_simb( token, &x, &y );
                if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                    sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                    imprimeErro( dados );
                    exit(1);
                }
            }
            else {
                empilha_Simbolo_TB_SIMB ( token, categoria, nivel_lexico, desloc);
                desloc++;
                num_vars++;
            }
            }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 215 "compilador.y"
    {
            empilha_Deslocamento ( desloc);
            desloc = 0;
            nivel_lexico++;
            }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 220 "compilador.y"
    {
            desloc = desempilha_Deslocamento ();
            nivel_lexico--;
            }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 227 "compilador.y"
    {
            eh_vars_proc_func = 1;
            }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 235 "compilador.y"
    {
                eh_parametro_referencia = 1;
            }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 239 "compilador.y"
    {
                eh_parametro_referencia = 0;
            }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 249 "compilador.y"
    {
              num_vars_inicial = num_vars;
              }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 254 "compilador.y"
    { /* AMEM */
              sprintf ( dados, "AMEM %d", num_vars);
              geraCodigo( NULL, dados);
              }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 262 "compilador.y"
    {
            procura_simb( token, &x, &y );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro( dados );
                exit(1);
            }
            }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 270 "compilador.y"
    {
            sprintf( dados, "ARMZ %d, %d", x, y);
            geraCodigo( NULL, dados );
            }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 278 "compilador.y"
    {
            gera_Proximo_Rotulo( &rotulo1 );
            empilha_Rotulo( rotulo1 );
            geraCodigo( rotulo1, "NADA");
            }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 286 "compilador.y"
    {
            gera_Proximo_Rotulo( &rotulo2 );
            empilha_Rotulo( rotulo2 );
            sprintf( dados, "DSVF %s", rotulo2 );
            geraCodigo( NULL, dados);
            }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 293 "compilador.y"
    {
            gera_Proximo_Rotulo( &rotulo2 );
            empilha_Rotulo( rotulo2 );
            sprintf( dados, "DSVF %s", rotulo2 );
            geraCodigo( NULL, dados);
            }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 303 "compilador.y"
    {
            desempilha_Rotulo( &rotulo2 );
            desempilha_Rotulo( &rotulo1 );
            sprintf( dados, "DSVS %s", rotulo1 );
            geraCodigo( NULL, dados);
            geraCodigo( rotulo2, "NADA");
            }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 311 "compilador.y"
    {
            desempilha_Rotulo( &rotulo2 );
            desempilha_Rotulo( &rotulo1 );
            sprintf( dados, "DSVS %s", rotulo1 );
            geraCodigo( NULL, dados);
            geraCodigo( rotulo2, "NADA");
            }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 322 "compilador.y"
    {
            desempilha_Rotulo( &rotulo2 );
            geraCodigo( rotulo2, "NADA");
            }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 327 "compilador.y"
    {
            desempilha_Rotulo( &rotulo2 );
            geraCodigo( rotulo2, "NADA");
            }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 335 "compilador.y"
    {
            gera_Proximo_Rotulo( &rotulo1 );
            empilha_Rotulo( rotulo1 );
            sprintf( dados, "DSVF %s", rotulo1 );
            geraCodigo( NULL, dados);
            }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 342 "compilador.y"
    {
            gera_Proximo_Rotulo( &rotulo1 );
            empilha_Rotulo( rotulo1 );
            sprintf( dados, "DSVF %s", rotulo1 );
            geraCodigo( NULL, dados);
            }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 357 "compilador.y"
    {
            desempilha_Rotulo( &rotulo1 );

            gera_Proximo_Rotulo( &rotulo2 );
            empilha_Rotulo( rotulo2 );
            sprintf( dados, "DSVS %s", rotulo2 );
            geraCodigo( NULL, dados);

            geraCodigo( rotulo1, "NADA");
            }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 377 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 381 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 389 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 393 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 401 "compilador.y"
    {
            procura_simb( token, &x, &y );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro( dados );
                exit(1);
            }
            sprintf( dados, "CRVL %d, %d", x, y);
            geraCodigo (NULL, dados);
            }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 412 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo (NULL, dados);
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 422 "compilador.y"
    {
            geraCodigo (NULL, "INVR");
            }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 429 "compilador.y"
    {
            geraCodigo (NULL, "CMIG");
            }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 433 "compilador.y"
    {
            geraCodigo (NULL, "CMDG");
            }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 437 "compilador.y"
    {
            geraCodigo (NULL, "CMMA");
            }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 441 "compilador.y"
    {
            geraCodigo (NULL, "CMAG");
            }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 445 "compilador.y"
    {
            geraCodigo (NULL, "CMME");
            }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 449 "compilador.y"
    {
            geraCodigo (NULL, "CMEG");
            }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 453 "compilador.y"
    {
            geraCodigo (NULL, "CONJ");
            }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 457 "compilador.y"
    {
            geraCodigo (NULL, "DISJ");
            }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 461 "compilador.y"
    {
            geraCodigo (NULL, "INVR");
            geraCodigo (NULL, "CONJ");
            }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 470 "compilador.y"
    {
            procura_simb( token, &x, &y );
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro( dados );
                exit(1);
            }
            sprintf( dados, "CRVL %d, %d", x, y);
            geraCodigo (NULL, dados);
            }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 481 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo (NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2103 "compilador.tab.c"
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
#line 489 "compilador.y"


void yyerror (char const *message)
{
    fputs (message, stderr);
    fputc ('\n', stderr);
}

main (int argc, char** argv) {
    FILE* fp;
    extern FILE* yyin;

    if (argc<2 || argc>2) {
        printf("usage compilador <arq>a %d\n", argc);

        return(-1);

    }

    fp=fopen (argv[1], "r");
    if (fp == NULL) {
        printf("usage compilador <arq>b\n");

        return(-1);

    }


/* -------------------------------------------------------------------
 *  Inicia a Tabela de Símbolos
 * ------------------------------------------------------------------- */

    inicia_variaveis_globais();
    inicia_pilha_tabela_simbolos();
    inicia_pilha_rotulos();
    inicia_pilha_deslocamentos();

    yyin=fp;
    yyparse();

    return 0;
}

