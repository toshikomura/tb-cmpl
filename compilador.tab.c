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
char *tipo_booleano;

char *tipo_fator;
char *tipo_expressao;

int num_vars;
int num_vars_aux;
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

/* Função para corrigir erro de versões */
void yyerror (char const *);



/* Line 268 of yacc.c  */
#line 125 "compilador.tab.c"

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
     DIVISAO_INTEIRA = 296,
     LOWER_THEN_ELSE = 297
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
#line 209 "compilador.tab.c"

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
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNRULES -- Number of states.  */
#define YYNSTATES  249

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    14,    16,    19,    21,    22,    27,
      28,    34,    35,    38,    40,    41,    42,    49,    51,    53,
      55,    59,    61,    65,    69,    71,    73,    77,    79,    80,
      81,    86,    88,    89,    96,    97,   106,   110,   111,   112,
     116,   117,   120,   121,   122,   126,   127,   130,   134,   136,
     137,   142,   146,   148,   152,   156,   160,   164,   168,   172,
     176,   179,   182,   185,   188,   191,   194,   195,   197,   199,
     201,   203,   205,   207,   208,   212,   213,   217,   219,   221,
     222,   225,   226,   230,   231,   235,   236,   240,   241,   248,
     249,   254,   256,   258,   261,   265,   266,   273,   274,   279,
     281,   283,   284,   288,   289,   291,   293,   294,   298,   299,
     303,   305,   309,   310,   315,   316,   319,   322,   325,   329,
     333,   335,   339,   343,   347,   349,   350,   354,   356,   360,
     363,   365,   369,   373,   377,   382,   386,   391,   395,   399,
     404,   406,   407,   410,   414,   415,   420,   421,   424,   425,
     426,   433,   435,   436,   437,   442,   443,   446
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      44,     0,    -1,    -1,    45,     3,    46,     4,    61,     5,
       7,    47,     9,    -1,    13,    -1,    48,    62,    -1,    49,
      -1,    -1,    12,    50,    52,    48,    -1,    -1,    39,    51,
      60,     7,    48,    -1,    -1,    52,    53,    -1,    53,    -1,
      -1,    -1,    54,    59,     8,    56,    55,     7,    -1,    13,
      -1,    13,    -1,    13,    -1,    59,     6,    13,    -1,    13,
      -1,    60,     6,    15,    -1,    60,     6,    13,    -1,    15,
      -1,    13,    -1,    61,     6,    13,    -1,    13,    -1,    -1,
      -1,    63,    65,    64,    47,    -1,    80,    -1,    -1,    35,
      13,    66,    68,     7,    69,    -1,    -1,    36,    13,    67,
      68,     8,    58,     7,    69,    -1,     4,    71,     5,    -1,
      -1,    -1,    70,    47,     7,    -1,    -1,    72,    73,    -1,
      -1,    -1,    12,    74,    76,    -1,    -1,    75,    76,    -1,
      77,     7,    73,    -1,    77,    -1,    -1,    78,    79,     8,
      57,    -1,    79,     6,    13,    -1,    13,    -1,    10,    81,
      11,    -1,    83,     7,    81,    -1,    92,     7,    81,    -1,
      98,     7,    81,    -1,   106,     7,    81,    -1,   108,     7,
      81,    -1,   114,     7,    81,    -1,    83,     7,    -1,    92,
       7,    -1,    98,     7,    -1,   106,     7,    -1,   108,     7,
      -1,   114,     7,    -1,    -1,    83,    -1,    92,    -1,    98,
      -1,   106,    -1,   108,    -1,   114,    -1,    -1,    13,    84,
      86,    -1,    -1,    15,    85,    86,    -1,    88,    -1,    90,
      -1,    -1,    87,   124,    -1,    -1,     8,    89,    82,    -1,
      -1,    14,    91,   119,    -1,    -1,    27,    93,    94,    -1,
      -1,     4,   119,     5,    29,    95,    97,    -1,    -1,   119,
      29,    96,    97,    -1,    82,    -1,    80,    -1,    32,    99,
      -1,    32,    99,   103,    -1,    -1,     4,   119,     5,    33,
     100,   102,    -1,    -1,   119,    33,   101,   102,    -1,    82,
      -1,    80,    -1,    -1,    34,   104,   105,    -1,    -1,    82,
      -1,    80,    -1,    -1,    37,   107,   110,    -1,    -1,    38,
     109,   110,    -1,   111,    -1,     4,   111,     5,    -1,    -1,
     111,     6,   112,   115,    -1,    -1,   113,   115,    -1,    40,
      13,    -1,    40,    15,    -1,   115,    16,   116,    -1,   115,
      17,   116,    -1,   116,    -1,   116,    18,   117,    -1,   116,
      19,   117,    -1,   116,    41,   117,    -1,   117,    -1,    -1,
      13,   118,   124,    -1,    15,    -1,     4,   115,     5,    -1,
      24,   120,    -1,   120,    -1,   120,    20,   121,    -1,   120,
      21,   121,    -1,   120,    22,   121,    -1,   120,    22,    20,
     121,    -1,   120,    23,   121,    -1,   120,    23,    20,   121,
      -1,   120,    25,   121,    -1,   120,    26,   121,    -1,   120,
      25,    24,   121,    -1,   121,    -1,    -1,   122,   115,    -1,
       4,   119,     5,    -1,    -1,   123,     4,   115,     5,    -1,
      -1,   125,   126,    -1,    -1,    -1,     4,   127,   130,     5,
     128,   129,    -1,   129,    -1,    -1,    -1,   130,     6,   131,
     115,    -1,    -1,   132,   115,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    77,    90,   102,   106,   111,   110,   116,
     115,   120,   124,   125,   129,   134,   129,   142,   155,   168,
     181,   200,   221,   237,   253,   269,   288,   289,   293,   314,
     293,   330,   335,   334,   364,   363,   398,   413,   418,   418,
     427,   427,   430,   435,   434,   439,   439,   444,   445,   449,
     449,   457,   473,   492,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   512,   513,   514,
     515,   516,   517,   522,   521,   526,   525,   532,   533,   535,
     535,   549,   548,   573,   572,   686,   685,   694,   693,   703,
     702,   714,   723,   735,   740,   749,   748,   758,   757,   769,
     770,   775,   774,   785,   789,   790,   795,   794,   817,   816,
     839,   840,   845,   844,   878,   878,   913,   930,   950,   954,
     958,   962,   966,   970,   974,   979,   978,   987,  1006,  1010,
    1014,  1018,  1023,  1028,  1033,  1038,  1043,  1048,  1053,  1058,
    1064,  1069,  1069,  1105,  1107,  1107,  1144,  1144,  1178,  1187,
    1177,  1194,  1198,  1415,  1414,  1463,  1463,  1510
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
  "ROTULO", "VAI_PARA", "DIVISAO_INTEIRA", "LOWER_THEN_ELSE", "$accept",
  "programa", "$@1", "sem_tipo", "bloco", "parte_declara_vars", "var",
  "$@2", "$@3", "declara_vars", "declara_var", "$@4", "$@5", "tipo",
  "tipo_parametro", "tipo_retorno_func", "lista_id_var",
  "lista_id_var_label", "lista_idents", "comando_composto", "$@6", "$@7",
  "procedimento_ou_funcao", "$@8", "$@9", "procedimento_ou_funcao_2",
  "procedimento_ou_funcao_3", "$@10", "parametros_vars_proc_ou_func",
  "$@11", "vars_proc_ou_func", "$@12", "$@13", "vars_proc_ou_func_2",
  "var_proc_ou_func", "$@14", "lista_id_var_proc_ou_func",
  "comando_composto_2", "comandos", "comando_sem_ponto_e_virgula",
  "atrib_proc_func_rotu", "$@15", "$@16", "atrib_proc_func_rotu_2", "$@17",
  "rotulo_para_goto", "$@18", "atribuicao", "$@19", "repeticao", "$@20",
  "repeticao_2", "$@21", "$@22", "repeticao_3", "condicao",
  "condicao_se_entao", "$@23", "$@24", "condicao_se_entao_2",
  "condicao_senao", "$@25", "condicao_senao_2", "leitura", "$@26",
  "impressao", "$@27", "passagem_leitura_impressao",
  "lista_var_leitura_impressao", "$@28", "$@29", "goto",
  "expressao_aritmetica", "expressao_termo", "expressao_fator", "$@30",
  "expressao_booleana_geral", "expressao_booleana", "expressao_fator2",
  "$@31", "$@32", "var_chama_proc_func", "$@33", "passagem", "$@34",
  "$@35", "var_chama_proc_func_2", "lista_id_var_parametro", "$@36",
  "$@37", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    45,    44,    46,    47,    48,    50,    49,    51,
      49,    49,    52,    52,    54,    55,    53,    56,    57,    58,
      59,    59,    60,    60,    60,    60,    61,    61,    63,    64,
      62,    62,    66,    65,    67,    65,    68,    68,    70,    69,
      72,    71,    71,    74,    73,    75,    73,    76,    76,    78,
      77,    79,    79,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    84,    83,    85,    83,    86,    86,    87,
      86,    89,    88,    91,    90,    93,    92,    95,    94,    96,
      94,    97,    97,    98,    98,   100,    99,   101,    99,   102,
     102,   104,   103,   103,   105,   105,   107,   106,   109,   108,
     110,   110,   112,   111,   113,   111,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   118,   117,   117,   117,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   122,   121,   121,   123,   121,   125,   124,   127,   128,
     126,   126,   129,   131,   130,   132,   130,   130
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     9,     1,     2,     1,     0,     4,     0,
       5,     0,     2,     1,     0,     0,     6,     1,     1,     1,
       3,     1,     3,     3,     1,     1,     3,     1,     0,     0,
       4,     1,     0,     6,     0,     8,     3,     0,     0,     3,
       0,     2,     0,     0,     3,     0,     2,     3,     1,     0,
       4,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     1,     1,     0,
       2,     0,     3,     0,     3,     0,     3,     0,     6,     0,
       4,     1,     1,     2,     3,     0,     6,     0,     4,     1,
       1,     0,     3,     0,     1,     1,     0,     3,     0,     3,
       1,     3,     0,     4,     0,     2,     2,     2,     3,     3,
       1,     3,     3,     3,     1,     0,     3,     1,     3,     2,
       1,     3,     3,     3,     4,     3,     4,     3,     3,     4,
       1,     0,     2,     3,     0,     4,     0,     2,     0,     0,
       6,     1,     0,     0,     4,     0,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    27,     0,
       0,     0,    11,    26,     7,     9,     0,    28,     6,    14,
       0,     3,    66,     5,     0,    31,    11,    13,     0,    25,
      24,     0,    73,    75,    85,   141,   106,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     8,
      12,    21,     0,     0,    11,    79,    79,   141,   141,   141,
      93,     0,   130,   140,     0,     0,   114,   114,   116,   117,
      53,    60,    61,    62,    63,    64,    65,    32,    34,    11,
       0,     0,    23,    22,    10,    81,    83,    74,   146,    77,
      78,    76,   141,    86,     0,   141,     0,   129,   101,    94,
      97,   141,   141,   141,   141,   141,   141,     0,   125,   127,
     142,   120,   124,     0,   114,   107,   110,     0,   109,    54,
      55,    56,    57,    58,    59,    37,    37,    30,    20,    17,
      15,     0,   141,    80,   152,     0,    89,     0,   143,     0,
       0,   131,   132,   141,   133,   141,   135,   141,   137,   138,
       0,   146,     0,     0,     0,     0,     0,     0,     0,   112,
     115,    40,     0,     0,     0,    82,    67,    68,    69,    70,
      71,    72,    84,   148,   147,   151,   143,     0,   143,    95,
     105,   104,   102,   100,    99,    98,   134,   136,   139,   128,
     126,   118,   119,   121,   122,   123,   145,   111,     0,     0,
      45,    38,     0,    16,   155,    87,    92,    91,    90,     0,
     113,    36,    43,    41,    49,    33,    11,    19,     0,     0,
       0,     0,    96,    49,    46,    48,     0,     0,    38,   149,
     153,   156,    88,    44,    45,    52,     0,    39,    35,   152,
       0,    47,     0,     0,   150,   154,    51,    18,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    16,    17,    18,    19,    20,    26,
      27,    28,   164,   130,   248,   218,    52,    31,     9,    23,
      24,    79,    48,   125,   126,   162,   215,   216,   199,   200,
     213,   223,   214,   224,   225,   226,   236,   183,    39,   184,
      40,    55,    56,    87,    88,    89,   131,    90,   132,    41,
      57,    93,   221,   177,   208,    42,    60,   209,   140,   185,
      99,   139,   182,    43,    66,    44,    67,   115,   116,   198,
     117,    45,   110,   111,   112,   151,    61,    62,    63,    64,
      65,   133,   134,   174,   204,   239,   175,   219,   240,   220
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
    -127,    69,    20,  -127,    90,  -127,    78,    94,  -127,    22,
     123,   148,    -2,  -127,  -127,  -127,   153,   154,  -127,  -127,
      50,  -127,    81,  -127,    55,  -127,    23,  -127,   150,  -127,
    -127,   130,  -127,  -127,  -127,    35,  -127,  -127,    91,   132,
     158,   159,   160,   161,   162,   163,   164,   165,  -127,  -127,
    -127,  -127,    67,   133,    -2,    42,    42,    36,    57,   167,
     138,   140,   119,  -127,   116,   170,   171,   171,  -127,  -127,
    -127,    81,    81,    81,    81,    81,    81,  -127,  -127,    -2,
     166,   168,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,    57,  -127,   155,    57,   175,   119,  -127,  -127,
    -127,   167,   167,    54,    60,    68,   167,   116,  -127,  -127,
     134,     7,  -127,   116,  -127,  -127,   176,   116,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,   172,   172,  -127,  -127,  -127,
    -127,    81,    57,  -127,   179,   180,  -127,   181,   156,    39,
      39,  -127,  -127,   167,  -127,   167,  -127,   167,  -127,  -127,
      93,  -127,   116,   116,   116,   116,   116,   100,   147,  -127,
     134,   182,   183,   184,   186,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,   169,    39,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,     7,     7,  -127,  -127,  -127,  -127,  -127,   116,   189,
     185,  -127,   178,  -127,   149,  -127,  -127,  -127,  -127,    39,
     134,  -127,  -127,  -127,  -127,  -127,    -2,  -127,   188,   151,
     116,    39,  -127,  -127,  -127,   192,   187,   194,  -127,  -127,
    -127,   134,  -127,  -127,   185,  -127,   141,  -127,  -127,  -127,
     116,  -127,   190,   193,  -127,   134,  -127,  -127,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -127,   -78,   -20,  -127,  -127,  -127,  -127,
     191,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,    62,   -32,  -127,  -127,  -127,
     -29,  -127,  -127,   -21,  -127,  -127,  -127,   -17,    52,  -110,
    -126,  -127,  -127,   152,  -127,  -127,  -127,  -127,  -127,  -124,
    -127,  -127,  -127,  -127,   -14,  -122,  -127,  -127,  -127,     0,
    -127,  -127,  -127,  -120,  -127,  -109,  -127,   143,    97,  -127,
    -127,  -107,  -105,     6,   -22,  -127,   -54,   157,   -59,  -127,
    -127,    61,  -127,  -127,  -127,  -127,   -26,  -127,  -127,  -127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -158
static const yytype_int16 yytable[] =
{
      25,   127,   150,    94,    96,   166,    49,   167,   157,   168,
      14,   169,   160,   166,   166,   167,   167,   168,   168,   169,
     169,   165,   170,     4,   171,   154,   155,    10,    11,   181,
     170,   170,   171,   171,    84,    14,   -14,    15,   135,    58,
      92,   137,   141,   142,   144,   146,   148,   149,   156,    22,
      85,   166,    32,   167,    33,   168,    86,   169,    95,    59,
      59,    95,    15,    29,    95,    30,    34,   207,   170,     3,
     171,    35,    95,    80,   143,    81,    36,    37,   172,    38,
     145,    59,     7,   166,   186,   167,   187,   168,   188,   169,
      46,    47,   147,   210,    32,   166,    33,   167,   189,   168,
     170,   169,   171,     5,    68,   196,    69,     8,    34,   152,
     153,   207,   170,    35,   171,   231,   152,   153,    36,    37,
     107,    38,   180,   119,   120,   121,   122,   123,   124,   108,
      12,   109,   193,   194,   195,   245,    53,    54,   227,   101,
     102,   103,   104,    70,   105,   106,    82,   242,    83,   243,
     152,   153,   197,   159,  -157,  -157,   229,   230,   191,   192,
     206,    13,    21,    51,    22,    71,    72,    73,    74,    75,
      76,    95,    98,   100,   113,   114,   161,    77,    78,   128,
     138,   129,   159,   173,   136,   176,   178,   -42,   163,   179,
     201,   217,   202,   203,   211,   228,   238,   212,   205,   234,
     235,   237,   233,   246,   206,   241,   247,   232,    91,   222,
     118,   158,   190,   244,     0,     0,    97,    50
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-127))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    79,   107,    57,    58,   131,    26,   131,   113,   131,
      12,   131,   117,   139,   140,   139,   140,   139,   140,   139,
     140,   131,   131,     3,   131,    18,    19,     5,     6,   139,
     139,   140,   139,   140,    54,    12,    13,    39,    92,     4,
       4,    95,   101,   102,   103,   104,   105,   106,    41,    10,
       8,   177,    13,   177,    15,   177,    14,   177,     4,    24,
      24,     4,    39,    13,     4,    15,    27,   177,   177,     0,
     177,    32,     4,     6,    20,     8,    37,    38,   132,    40,
      20,    24,     4,   209,   143,   209,   145,   209,   147,   209,
      35,    36,    24,   198,    13,   221,    15,   221,     5,   221,
     209,   221,   209,    13,    13,     5,    15,    13,    27,    16,
      17,   221,   221,    32,   221,   220,    16,    17,    37,    38,
       4,    40,   139,    71,    72,    73,    74,    75,    76,    13,
       7,    15,   154,   155,   156,   240,     6,     7,   216,    20,
      21,    22,    23,    11,    25,    26,    13,     6,    15,     8,
      16,    17,     5,     6,     5,     6,     5,     6,   152,   153,
     177,    13,     9,    13,    10,     7,     7,     7,     7,     7,
       7,     4,    34,    33,     4,     4,     4,    13,    13,    13,
       5,    13,     6,     4,    29,     5,     5,     5,   126,    33,
       7,    13,     8,     7,     5,     7,   228,    12,    29,     7,
      13,     7,   223,    13,   221,   234,    13,   221,    56,   209,
      67,   114,   151,   239,    -1,    -1,    59,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    45,     0,     3,    13,    46,     4,    13,    61,
       5,     6,     7,    13,    12,    39,    47,    48,    49,    50,
      51,     9,    10,    62,    63,    80,    52,    53,    54,    13,
      15,    60,    13,    15,    27,    32,    37,    38,    40,    81,
      83,    92,    98,   106,   108,   114,    35,    36,    65,    48,
      53,    13,    59,     6,     7,    84,    85,    93,     4,    24,
      99,   119,   120,   121,   122,   123,   107,   109,    13,    15,
      11,     7,     7,     7,     7,     7,     7,    13,    13,    64,
       6,     8,    13,    15,    48,     8,    14,    86,    87,    88,
      90,    86,     4,    94,   119,     4,   119,   120,    34,   103,
      33,    20,    21,    22,    23,    25,    26,     4,    13,    15,
     115,   116,   117,     4,     4,   110,   111,   113,   110,    81,
      81,    81,    81,    81,    81,    66,    67,    47,    13,    13,
      56,    89,    91,   124,   125,   119,    29,   119,     5,   104,
     101,   121,   121,    20,   121,    20,   121,    24,   121,   121,
     115,   118,    16,    17,    18,    19,    41,   115,   111,     6,
     115,     4,    68,    68,    55,    82,    83,    92,    98,   106,
     108,   114,   119,     4,   126,   129,     5,    96,     5,    33,
      80,    82,   105,    80,    82,   102,   121,   121,   121,     5,
     124,   116,   116,   117,   117,   117,     5,     5,   112,    71,
      72,     7,     8,     7,   127,    29,    80,    82,    97,   100,
     115,     5,    12,    73,    75,    69,    70,    13,    58,   130,
     132,    95,   102,    74,    76,    77,    78,    47,     7,     5,
       6,   115,    97,    76,     7,    13,    79,     7,    69,   128,
     131,    73,     6,     8,   129,   115,    13,    13,    57
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
#line 77 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 82 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 91 "compilador.y"
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
#line 111 "compilador.y"
    {
            /* Se for uma declaração de variável */
            sprintf ( categoria, "%s", categoria_var_simples);
            }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 116 "compilador.y"
    {
            /* Se for uma declaração de rotulo */
            sprintf ( categoria, "%s", categoria_rotulo);
            }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 129 "compilador.y"
    {
            num_vars_inicial = num_vars;
            }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 134 "compilador.y"
    { /* AMEM */
            sprintf ( dados, "AMEM %d", percorre_vars);
            geraCodigo ( NULL, dados);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 143 "compilador.y"
    {
            if ( strcmp ( tipo_inteiro, token) != 0 && strcmp ( tipo_booleano, token) != 0 ) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer' ou 'boolean'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            percorre_vars = num_vars - num_vars_inicial;
            insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 156 "compilador.y"
    {
            if ( strcmp ( tipo_inteiro, token) != 0 && strcmp ( tipo_booleano, token) != 0 ) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer' ou 'boolean'", token);
                imprimeErro ( dados);
                exit ( 1);
            }
            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_var_proc_func, parametro_valor_referencia, token, percorre_vars);
            }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 169 "compilador.y"
    {
            if ( strcmp ( tipo_inteiro, token) != 0 && strcmp ( tipo_booleano, token) != 0 ) {
                sprintf ( dados, "Tipo '%s' não suportado, somente 'integer' ou 'boolean'", token);
                imprimeErro ( dados);
                exit ( 1);
            }

            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 182 "compilador.y"
    {
            /* insere última variável na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                if ( dados_simbolo1->nivel_lexico == nivel_lexico) {
                    sprintf ( dados, "Variável '%s' já foi delcarada como '%s'", token, dados_simbolo1->categoria);
                    imprimeErro ( dados);
                    exit ( 1);
                }
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
#line 201 "compilador.y"
    { /* insere variáveis na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                if ( dados_simbolo1->nivel_lexico == nivel_lexico) {
                sprintf ( dados, "Variável '%s' já foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
                }
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            deslocamento++;
            num_vars++;
            }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 222 "compilador.y"
    {
            /* insere última variável na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, rotulo1, nivel_lexico, deslocamento);
            }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 238 "compilador.y"
    {
            /* insere última variável na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, rotulo1, nivel_lexico, deslocamento);
            }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 254 "compilador.y"
    { /* insere variáveis na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            /* Se for um label */
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, rotulo1, nivel_lexico, deslocamento);
            }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 270 "compilador.y"
    { /* insere variáveis na tabela de símbolos */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL){
                sprintf ( dados, "Variável '%s' já foi delcarada como '%s'", token, dados_simbolo1->categoria);
                imprimeErro ( dados);
                exit ( 1);
            }

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( token, categoria, parametro_valor_referencia, rotulo1, nivel_lexico, deslocamento);

            }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 293 "compilador.y"
    {
            /* Caso encontre um procedimento */
            /* Empilha número de variávei para não perder */
            /* a quantidade depois de ler todo o procedimento */
            empilha_Inteiro ( p_num_vars, num_vars);
            num_vars = 0;

            /* Gera rótulo para desviar do procedimento */
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);

            /* Empilha deslocamento para não perder ele depois */
            /* que sair do procedimento e inicia um novo */
            /* Aumento nivel léxico por causa da entrada no procedimento */
            empilha_Inteiro ( p_deslocamentos, deslocamento);
            deslocamento = 0;
            nivel_lexico++;
            }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 314 "compilador.y"
    {
            /* Ao terminar de ler todo o procedimento retoma o deslocamento */
            /* Diminui o nivel lexico por causa do fim do procedimento */

            deslocamento = desempilha_Inteiro ( p_deslocamentos);

            nivel_lexico--;

            /* Recupera o número de variáveis */
            num_vars = desempilha_Inteiro ( p_num_vars);

            /* Retoma com o rótulo */
            desempilha_String ( p_rotulos, &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 335 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);

            /* Empilha o nome do procedimento para o retorno */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);

            sprintf ( tipo_retorno, "sem_tipo");
            sprintf ( parametro_valor_referencia, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria_procedimento, parametro_valor_referencia, rotulo1, nivel_lexico, 0);
            }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 348 "compilador.y"
    {
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s não foi encontrado em procura_simb procedimento_ou_funcao\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            /* Deleta itens que não podem mais ser usados na tabela de simbolos */
            deleta_itens_Tabela_Simbolos ( dados_simbolo1, &dados_simbolo2);

            sprintf ( dados, "RTPR %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo1->qtd_parametros);
            geraCodigo ( NULL, dados);
            }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 364 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);

            /* Empilha o nome da função para o retorno */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);

            sprintf ( parametro_valor_referencia, "sem_tipo");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria_funcao, parametro_valor_referencia, rotulo1, nivel_lexico, 0);
            }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 376 "compilador.y"
    {
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s não foi encontrado em procura_simb procedimento_ou_funcao\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            /* Deleta itens que não podem mais ser usados na tabela de simbolos */
            deleta_itens_Tabela_Simbolos ( dados_simbolo1, &dados_simbolo2);
            if ( dados_simbolo2  == NULL ) {
                printf ( "O simbolo %s não conseguiu deletar itens em procedimento_ou_funcao\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            sprintf ( dados, "RTPR %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo1->qtd_parametros);
            geraCodigo ( NULL, dados);
            }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 399 "compilador.y"
    {
            /* Insere endereços dos parametros formais procedimentou/função */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "O simbolo %s não foi encontrado em procura_simb procedimento_ou_funcao_2\n", dados_simbolo1->simbolo);
                exit ( 1);
            }

            insere_Endereco_parametro ( dados_simbolo1);

            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 418 "compilador.y"
    {
            /* Depois de ler todo a declaração do procedimento/função */
            geraCodigo ( rotulo1, "NADA");
            sprintf ( dados, "ENPR %d", nivel_lexico);
            geraCodigo ( NULL, dados );
            }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 427 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 435 "compilador.y"
    {
            sprintf ( parametro_valor_referencia, "var_referencia");
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 439 "compilador.y"
    {
            sprintf ( parametro_valor_referencia, "var_valor");
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 449 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 458 "compilador.y"
    {
            /* Os parametros obrigatoriamente não podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL) {
                if ( dados_simbolo1->nivel_lexico == nivel_lexico){
                    sprintf ( dados, "Parametro não pode ser '%s' já foi delcarado como '%s'", token, dados_simbolo1->categoria);
                    imprimeErro ( dados);
                    exit ( 1);
                }
            }
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria_parametro_formal, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            num_parametros++;
            }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 474 "compilador.y"
    {
            /* Os parametros obrigatoriamente não podem ter sido declarados anteriormente */

            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 != NULL) {
                if ( dados_simbolo1->nivel_lexico == nivel_lexico){
                    sprintf ( dados, "Parametro não pode ser '%s' já foi delcarado como '%s'", token, dados_simbolo1->categoria);
                    imprimeErro ( dados);
                    exit ( 1);
                }
            }
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria_parametro_formal, parametro_valor_referencia, NULL, nivel_lexico, deslocamento);
            num_parametros++;
            }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 522 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 526 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 535 "compilador.y"
    {
            /* Caso não seja atribuição então só pde ser procedimento ou função */
            /* Indica que não é parametro formal e indica com 2 */
            /* dizendo que vem de chamada de procedimento ou função */

            empilha_Inteiro ( p_eh_parametro_formal, 2);
            }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 542 "compilador.y"
    {
            desempilha_Inteiro ( p_eh_parametro_formal);
            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 549 "compilador.y"
    {
            /* Verifica se o label foi declarado */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_rotulo, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Rotulo '%s' não foi declarada", nome_var_proc_func);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e não como 'rotulo'", nome_var_proc_func, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            /* Atribui o nivel lexico ao rotulo */
            dados_simbolo1->nivel_lexico = nivel_lexico;


            sprintf ( dados, "ENRT %d, %d", nivel_lexico, num_vars);
            geraCodigo ( dados_simbolo1->rotulo, dados);
            }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 573 "compilador.y"
    {
            /* Verifica se a variável foi declarada */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_var_simples, dados_simbolo1->categoria) != 0 &&  strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) != 0 && strcmp ( categoria_funcao, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Variável '%s' não foi declarada", nome_var_proc_func);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e não como 'variável'", nome_var_proc_func, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            /* Indica que não é passagem de parametro e que está indica com '0' */
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

            /* Guarda o nome da variável */
            nome_var = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_var, nome_var_proc_func);
            empilha_String ( p_nomes, nome_var);

            }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 607 "compilador.y"
    {
            /* Reccupera variável de atribuição */
            desempilha_String ( p_nomes, &nome_var);
            strcpy ( nome_var_proc_func, nome_var);

            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL){
                printf ( "Problema o tentar encontrar a variavel de atribuição em atribuição\n");
                exit ( 1);
            }

            num_termos = desempilha_Inteiro ( p_num_termos);

            desempilha_Inteiro ( p_eh_parametro_formal);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

            /* Checa se o tipo do resultado da expressão corresponde a variável que vai receber a expressão */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                /* Se é função */
                if ( strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0) {
                    if ( strcmp ( dados_simbolo1->tipo_retorno, tipo_expressao) != 0) {
                        sprintf ( dados, "Tipo para retorno da função '%s' é incopativel com um elemento da expressao", dados_simbolo1->simbolo);
                        imprimeErro ( dados );
                        exit ( 1);
                    }
                }
                /* Senão é uma variável ou parametro por referência */
                else {
                    if ( strcmp ( dados_simbolo1->tipo, tipo_expressao) != 0) {
                        sprintf ( dados, "Tipo do receptor '%s' é incopativel com um elemento da expressao", dados_simbolo1->simbolo);
                        imprimeErro ( dados );
                        exit ( 1);
                    }
                }
            }
            /* Se é um retorno de função ou passado por referência */
            if ( strcmp ( categoria_var_simples, dados_simbolo1->categoria) != 0) {
                /* Se é retorno de função */
                if ( strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0 ) {
                    procura_prox_simb ( dados_simbolo1, &dados_simbolo2);

                    /* Se a função não tem parametros */
                    if ( dados_simbolo2 == NULL ) {
                        sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                    }
                    else {

                        if ( strcmp ( categoria_parametro_formal, dados_simbolo2->categoria) != 0) {

                            sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                        }
                        /* Senão se tem parametros */
                        else {

                                sprintf ( dados, "ARMZ %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo2->deslocamento - 1);
                        }
                    }
                }
                /* Senão foi passado por referência ou valor*/
                else {
                    /* Se foi por referência */
                    if ( strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) != 0  )
                        sprintf ( dados, "ARMI %d, %d", x, y);
                    else
                        sprintf ( dados, "ARMZ %d, %d", x, y);
                }
            }
            /* Senão é uma variável local */
            else {
                sprintf ( dados, "ARMZ %d, %d", x, y);
            }
            geraCodigo ( NULL, dados );
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 686 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 694 "compilador.y"
    {
            checa_Booleano ();

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 703 "compilador.y"
    {
            checa_Booleano ();

            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 715 "compilador.y"
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
#line 724 "compilador.y"
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
#line 736 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 741 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 749 "compilador.y"
    {
            checa_Booleano ();

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 758 "compilador.y"
    {
            checa_Booleano ();

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 775 "compilador.y"
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
#line 795 "compilador.y"
    {
            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_eh_parametro_formal, 3);
            empilha_Inteiro ( p_num_termos, 0);
            }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 808 "compilador.y"
    {
            desempilha_Inteiro ( p_eh_parametro_formal);
            desempilha_Inteiro ( p_num_termos);
            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 817 "compilador.y"
    {
            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parametros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            empilha_Inteiro ( p_eh_parametro_formal, 4);
            empilha_Inteiro ( p_num_termos, 0);
            }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 830 "compilador.y"
    {
            desempilha_Inteiro ( p_eh_parametro_formal);
            desempilha_Inteiro ( p_num_termos);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 845 "compilador.y"
    {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se é leitura */
            if ( eh_parametro_formal == 3) {
                sprintf ( dados, "LEIT");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 855 "compilador.y"
    {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se é leitura */
            if ( eh_parametro_formal == 3) {
                num_termos = desempilha_Inteiro ( p_num_termos);

                /* Se a expressao tem mais de um elemento na leitura */
                if ( num_termos > 1) {
                    sprintf ( dados, "Leitura não pode possuir uma expressão com mais de um elemento");
                    imprimeErro ( dados);
                    exit ( 1);
                }
            }
            /* Senão é impressão */
            else {
                sprintf ( dados, "IMPR");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_num_termos, 0);
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 878 "compilador.y"
    {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se é leitura */
            if ( eh_parametro_formal == 3) {
                sprintf ( dados, "LEIT");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 888 "compilador.y"
    {
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            /* Se é leitura */
            if ( eh_parametro_formal == 3) {
                num_termos = desempilha_Inteiro ( p_num_termos);

                /* Se a expressao tem mais de um elemento na leitura */
                if ( num_termos > 1) {
                    sprintf ( dados, "Leitura não pode possuir uma expressão com mais de um elemento");
                    imprimeErro ( dados);
                    exit ( 1);
                }
            }
            /* Senão é impressão */
            else {
                sprintf ( dados, "IMPR");
                geraCodigo ( NULL, dados);
            }
            empilha_Inteiro ( p_num_termos, 0);
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);
            }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 914 "compilador.y"
    {
            /* Verifica se o label foi declarado */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_rotulo, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Rotulo '%s' não foi declarada", token);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e não como 'rotulo'", token, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            sprintf ( dados, "DSVR %s, %d, %d", dados_simbolo1->rotulo, dados_simbolo1->nivel_lexico, nivel_lexico);
            geraCodigo ( NULL, dados);
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 931 "compilador.y"
    {
            /* Verifica se o label foi declarado */
            procura_simb ( token, &x, &y, &tipo, &dados_simbolo1);
            if ( dados_simbolo1 == NULL || ( strcmp ( categoria_rotulo, dados_simbolo1->categoria) != 0)) {
                if ( dados_simbolo1 == NULL)
                    sprintf ( dados, "Rotulo '%s' não foi declarada", token);
                else
                    sprintf ( dados, "'%s' foi declarado como '%s' e não como 'rotulo'", token, dados_simbolo1->categoria);

                imprimeErro ( dados );
                exit ( 1);
            }

            sprintf ( dados, "DSVR %s, %d, %d", dados_simbolo1->rotulo, dados_simbolo1->nivel_lexico, nivel_lexico);
            geraCodigo ( NULL, dados);
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 951 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 955 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 963 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 967 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 971 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 979 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);

            num_termos = desempilha_Inteiro ( p_num_termos);

            num_termos++;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 988 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);

            /* Salva o tipo do termo */
            tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( tipo_fator, tipo_inteiro);

            empilha_String ( p_tipos, tipo_fator);

            num_termos = desempilha_Inteiro ( p_num_termos);

            /* Soma 2 para caso seja expressao de parametro */
            /* com número ou mais de uma variável na expressao ser incompativel */
            /* com passagem por referência */
            num_termos = num_termos + 2;
            empilha_Inteiro ( p_num_termos, num_termos);
            }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1011 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1019 "compilador.y"
    {
            compara_Fatores_Booleanos ();
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1024 "compilador.y"
    {
            compara_Fatores_Booleanos ();
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1029 "compilador.y"
    {
            compara_Fatores_Booleanos ();
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1034 "compilador.y"
    {
            compara_Fatores_Booleanos ();
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1039 "compilador.y"
    {
            compara_Fatores_Booleanos ();
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1044 "compilador.y"
    {
            compara_Fatores_Booleanos ();
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1049 "compilador.y"
    {
            compara_Fatores_Booleanos_Especificos ();
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1054 "compilador.y"
    {
            compara_Fatores_Booleanos_Especificos ();
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1059 "compilador.y"
    {
            compara_Fatores_Booleanos_Especificos ();
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1069 "compilador.y"
    {
            /* que esta indo de atribuição */
            empilha_Inteiro ( p_eh_parametro_formal, 0);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parame     tros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);
            empilha_Inteiro ( p_num_termos, 0);
            }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1083 "compilador.y"
    {
            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            desempilha_Inteiro ( p_num_termos);
            desempilha_Inteiro ( p_eh_parametro_formal);

            /* Checa se o tipo do resultado da expressão corresponde a variável que vai receber a expressão */
            desempilha_String ( p_tipos, &tipo);
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                /* Se não existir um tipo incompativel */
                if ( strcmp ( tipo, tipo_expressao) != 0) {
                    sprintf ( dados, "Tipo incopativel na expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            /* Compoem o tipo para processar em outro nivel */
            empilha_String ( p_tipos, tipo);
            empilha_pilhas_String ( p_p_tipos, p_tipos);

            }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 1107 "compilador.y"
    {
            /* que esta indo de atribuição */
            empilha_Inteiro ( p_eh_parametro_formal, 0);

            /* Cria pilha de tipos */
            p_tipos = malloc( sizeof (pilha_s));
            p_tipos->primeiro = NULL;
            p_tipos->tam = 0;

            /* Empilha a pilha de tipos para não perder na recursão */
            /* A pilha de tipos pode mudar caso haja uma chamada de função com parame     tros */
            empilha_pilhas_String ( p_p_tipos, p_tipos);
            empilha_Inteiro ( p_num_termos, 0);
            }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1121 "compilador.y"
    {
            desempilha_pilhas_String ( p_p_tipos, &p_tipos);
            desempilha_Inteiro ( p_num_termos);
            desempilha_Inteiro ( p_eh_parametro_formal);

            /* Checa se o tipo do resultado da expressão corresponde a variável que vai receber a expressão */
            desempilha_String ( p_tipos, &tipo);
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);
                /* Se não existir um tipo incompativel */
                if ( strcmp ( tipo, tipo_expressao) != 0) {
                    sprintf ( dados, "Tipo incopativel na expressao");
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            /* Compoem o tipo para processar em outro nivel */
            empilha_String ( p_tipos, tipo);
            empilha_pilhas_String ( p_p_tipos, p_tipos);
            }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1144 "compilador.y"
    {
            /* 1 - Caso venha de atribuição->expressao cateoria1 = var_simples */
            /* 2 - Caso venha de procedimento ou função cateoria1 = procedimento */
            /* 3 - Caso venha de lita de parametros->expressao pode ser var_simples, parametro_formal ou funcao */
            /* Para os 2 casos o outro parametro pode ser função */
            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);

            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);
            /* Se não encontrar o simbolos como var_simples/procedimento ou funcao e não é parametro_formal */
            if ( dados_simbolo1 == NULL) {
                if ( eh_parametro_formal == 0 || eh_parametro_formal == 1 || eh_parametro_formal == 3 || eh_parametro_formal == 4){
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

            /* Se o simbolo é uma função mas não é na leitura gera o código de retorno antes de empilhar os parametros */
            if ( dados_simbolo1 != NULL && strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0 && eh_parametro_formal != 3) {
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            num_parametros = 0;
            }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1178 "compilador.y"
    {
            /* Salva o nome da função antes de iniciar leitura dos parametros */
            /* Também salva a quantidade de parametros */
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);

            }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 1187 "compilador.y"
    {
            desempilha_String ( p_nomes, &nome_proc_func);

            num_parametros = desempilha_Inteiro ( p_num_parametros);

            strcpy ( nome_var_proc_func, nome_proc_func);
            }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 1198 "compilador.y"
    {

            eh_parametro_formal = desempilha_Inteiro ( p_eh_parametro_formal);
            /* Se simbolo é passagem de parametro, procedimento ou var_simples */
            procura_simb ( nome_var_proc_func, &x, &y, &tipo, &dados_simbolo1);

            /* Se é passagem de parametro de chamada de procedimento ou função */
            if ( eh_parametro_formal == 1) {
                desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                /* Salva o tipo do parametro */
                tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                strcpy (tipo_fator, dados_simbolo1->tipo);
                empilha_String ( p_tipos, tipo_fator);

                empilha_pilhas_String ( p_p_tipos, p_tipos);

                /* Bsuca a função para checar os parametros */
                desempilha_String ( p_nomes, &nome_proc_func);

                procura_simb ( nome_proc_func, &x_proc_func, &y_proc_func, &tipo_proc_func, &dados_simbolo2);
                if ( dados_simbolo2 == NULL){
                    printf ( "O simbolo %s não foi encontrado em procura_simb var_chama_proc_func_2\n", dados_simbolo1->simbolo);
                    exit ( 1);
                }

                num_parametros_aux = desempilha_Inteiro ( p_num_parametros);

                /* Precisa somar +1 pois a variável ainda não foi incluida procedimento/função */
                procura_Tipo_Passagem ( dados_simbolo2, &parametro_valor_referencia, num_parametros_aux + 1);

                empilha_Inteiro ( p_num_parametros, num_parametros_aux);
                empilha_String ( p_nomes, nome_proc_func);
                /* Fim da Bsuca a função para checar os parametros */

                /* Se é a variável foi passada como parametro */
                if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0) {

                    /* Se a pssagem foi por valor */
                    if ( strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) == 0) {
                        /* Se procedimento/função chamada recebe valor */
                        if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0) {
                            sprintf ( dados, "CRVL %d, %d", x, y);
                        }
                        /* Senão chamada recebe referencia */
                        else {
                            sprintf ( dados, "Variável '%s' que possui valor não pode ser passada para uma procedimento/função como referência", dados_simbolo1->simbolo);
                            imprimeErro ( dados);
                            exit ( 1);
                        }
                    }
                    /* Senão a passagem foi por referência */
                    else {
                        /* Se procedimento/função chamada recebe valor */
                        if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0)
                            sprintf ( dados, "CRVI %d, %d", x, y);
                        /* Senão chamada recebe referencia */
                        else
                            sprintf ( dados, "CRVL %d, %d", x, y);
                    }
                    geraCodigo ( NULL, dados);
                }
                /* Senão é uma variável */
                else {
                    /* Se procedimento/função chamada recebe valor */
                    if ( strcmp ( categoria_parametro_valor, parametro_valor_referencia) == 0) {
                        sprintf ( dados, "CRVL %d, %d", x, y);
                        geraCodigo ( NULL, dados);
                    }
                    /* Senão chamada recebe referencia */
                    else {
                        sprintf ( dados, "CREN %d %d", x, y);
                        geraCodigo ( NULL, dados);
                    }
                }
            }
            /* Senão passagem por parametro é procedimento, função ou atribuição */
            else {
                /* Se é procedimento */
                if ( strcmp( categoria_procedimento, dados_simbolo1->categoria) == 0) {
                    /* Se foi chamado fora da atribuição */
                    if ( eh_parametro_formal == 2) {
                        sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                        geraCodigo ( NULL, dados );
                    }
                    /* Senão se foi chamado dentro da atribuição */
                    else {
                        sprintf ( dados, "O '%s' é um procedimento e procedimentos não podem ser passado em atrbuiçoes", dados_simbolo1->simbolo);
                        imprimeErro ( dados);
                        exit ( 1);
                    }
                }
                /* Senão é procedimento é função ou atribuição */
                else {

                    /* Se é função e não é da leitura */
                    if ( strcmp( categoria_funcao, dados_simbolo1->categoria) == 0 && eh_parametro_formal != 3) {

                        if ( dados_simbolo1->qtd_parametros != num_parametros) {
                            sprintf ( dados, "Para função '%s' numero de parametros incorreto", nome_var_proc_func);
                            imprimeErro ( dados);
                            exit ( 1);
                        }

                        sprintf ( dados, "CHPR %s, %d", dados_simbolo1->rotulo, nivel_lexico);
                        geraCodigo ( NULL, dados );

                        /* Se a função não faz parte de uma expressão da atribuição */
                        /* No caso ele não faz parte disso ' a := funcao ' */
                        /* Empilha o tipo do variável de retorno */
                        if ( eh_parametro_formal != 2) {
                            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                            /* Salva o tipo de retorno da função */
                            tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);
                            strcpy (tipo_fator, dados_simbolo1->tipo_retorno);
                            empilha_String ( p_tipos, tipo_fator);

                            empilha_pilhas_String ( p_p_tipos, p_tipos);
                        }
                        /* Senão foi chamado uma função sem atribuição */
                        else {
                            sprintf ( dados, "DMEN 1");
                            geraCodigo ( NULL, dados);
                        }
                    }
                    /* Senão é uma expressão de atribuição */
                    else {

                        desempilha_pilhas_String ( p_p_tipos, &p_tipos);

                        /* Salva o tipo variável */
                        tipo_fator = malloc ( sizeof (char)*TAM_TOKEN);

                        /* Se é função */
                        if ( dados_simbolo1->tipo_retorno != NULL)
                            strcpy (tipo_fator, dados_simbolo1->tipo_retorno);
                        /* Senão é variável */
                        else
                            strcpy (tipo_fator, dados_simbolo1->tipo);

                        empilha_String ( p_tipos, tipo_fator);

                        empilha_pilhas_String ( p_p_tipos, p_tipos);

                        /* Se é retorno de função */
                        if ( strcmp ( categoria_funcao, dados_simbolo1->categoria) == 0 ) {
                            procura_prox_simb ( dados_simbolo1, &dados_simbolo2);

                            /* Se a função não tem parametros */
                            if ( dados_simbolo2 == NULL ) {
                                sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                            }
                            else {

                                if ( strcmp ( categoria_parametro_formal, dados_simbolo2->categoria) != 0) {

                                    sprintf ( dados, "ARMZ %d, -4", dados_simbolo1->nivel_lexico);
                                }
                                /* Senão se tem parametros */
                                else {

                                    sprintf ( dados, "ARMZ %d, %d", dados_simbolo1->nivel_lexico, dados_simbolo2->deslocamento - 1);
                                }
                            }
                        }
                        /* Senão é uma variável */
                        else {

                            /* Se é a variável foi passada como parametro */
                            if ( strcmp ( categoria_parametro_formal, dados_simbolo1->categoria) == 0) {
                                /* Se a pssagem foi por valor */
                                if ( strcmp ( categoria_parametro_valor, dados_simbolo1->parametro_valor_referencia) == 0) {
                                /* Se é parametro de leitura */
                                    if ( eh_parametro_formal == 3) {
                                        sprintf ( dados, "ARMZ %d, %d", x, y);
                                    }
                                    else {
                                        sprintf ( dados, "CRVL %d, %d", x, y);
                                    }
                                }
                                /* Senão a passagem foi por referência */
                                else {
                                    /* Se é parametro de leitura */
                                    if ( eh_parametro_formal == 3)
                                        sprintf ( dados, "ARMI %d, %d", x, y);
                                    else
                                        sprintf ( dados, "CRVI %d, %d", x, y);
                                }
                            }
                            /* Senão é uma variável */
                            else {
                                if ( eh_parametro_formal == 3)
                                    sprintf ( dados, "ARMZ %d, %d", x, y);
                                else
                                    sprintf ( dados, "CRVL %d, %d", x, y);
                            }
                        }

                        /* Fim do if Se retorno de função */
                        geraCodigo ( NULL, dados);

                    }
                    /* Fim do if Se é função e não é da leitura */
                }

                /* Fim do if Se é procedimento */
            }

            /* Fim do if Se é passagem parametro */
            empilha_Inteiro ( p_eh_parametro_formal, eh_parametro_formal);

            }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 1415 "compilador.y"
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

  case 154:

/* Line 1806 of yacc.c  */
#line 1430 "compilador.y"
    {

            num_termos = desempilha_Inteiro ( p_num_termos);

            desempilha_Inteiro ( p_eh_parametro_formal);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);

            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);

            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);

            /* Para cada tipo de variavel da expressao */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux, num_termos) != 1) {
                    sprintf ( dados, "Tipo do parametro '%d' do procedimento ou função '%s' incompativel com declaração", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 1463 "compilador.y"
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

  case 156:

/* Line 1806 of yacc.c  */
#line 1478 "compilador.y"
    {

            num_termos = desempilha_Inteiro ( p_num_termos);

            desempilha_Inteiro ( p_eh_parametro_formal);

            desempilha_pilhas_String ( p_p_tipos, &p_tipos);

            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);

            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);

            /* Checar se o tipo do resultado da expressão corresponde ao parametro do procedimento ou função */
            desempilha_String ( p_nomes, &nome_proc_func);

            procura_simb ( nome_proc_func, &x, &y, &tipo, &dados_simbolo2);

            /* Para cada tipo de variavel da expressao */
            while ( p_tipos->tam > 0) {
                desempilha_String ( p_tipos, &tipo_expressao);

                if ( chaca_tipo_parametro( dados_simbolo2, tipo_expressao, num_parametros_aux, num_termos) != 1) {
                    sprintf ( dados, "Tipo do parametro '%d' do procedimento ou função '%s' incompativel com declaração", num_parametros_aux, dados_simbolo2->simbolo);
                    imprimeErro ( dados );
                    exit ( 1);
                }
            }

            empilha_Inteiro ( p_num_termos, num_termos);
            empilha_String ( p_nomes, nome_proc_func);
            }
    break;



/* Line 1806 of yacc.c  */
#line 3365 "compilador.tab.c"
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
#line 1514 "compilador.y"


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

