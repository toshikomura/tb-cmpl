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
char *categoria2;
char *tipo;
char *tipo_valor_referencia;
char *tipo_retorno;
char *nome_var_proc_func;
char *nome_proc_func;

int num_vars;
int num_parametros;
int num_parametros_aux;
int num_vars_inicial;

int nivel_lexico;
int desloc;

int x, y;
int percorre_vars;

/* Função para corrigir erro de versões */
void yyerror (char const *);



/* Line 268 of yacc.c  */
#line 105 "compilador.tab.c"

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
     LEITURA = 293,
     IMPRESSAO = 294,
     LOWER_THEN_ELSE = 295
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
#line 187 "compilador.tab.c"

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
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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
      35,    36,    37,    38,    39,    40
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
      42,     0,    -1,    -1,    43,     3,    44,     4,    56,     5,
       7,    45,     9,    -1,    13,    -1,    46,    57,    -1,    47,
      -1,    12,    48,    -1,    -1,    48,    49,    -1,    49,    -1,
      -1,    -1,    50,    55,     8,    52,    51,     7,    -1,    37,
      -1,    37,    -1,    37,    -1,    55,     6,    13,    -1,    13,
      -1,    56,     6,    13,    -1,    13,    -1,    -1,    -1,    58,
      64,    59,    45,    -1,    60,    -1,    10,    62,    11,    -1,
      10,    62,    11,    -1,    81,     7,    62,    -1,    94,     7,
      62,    -1,   100,     7,    62,    -1,   108,     7,    62,    -1,
     109,     7,    62,    -1,    81,     7,    -1,    94,     7,    -1,
     100,     7,    -1,   108,     7,    -1,   109,     7,    -1,    -1,
      81,    -1,    94,    -1,   100,    -1,    -1,    -1,    35,    13,
      65,    69,     7,    66,    70,    -1,    -1,    -1,    36,    13,
      67,    69,     8,    54,     7,    68,    70,    -1,     4,    72,
       5,    -1,    -1,    -1,    71,    45,     7,    -1,    -1,    73,
      74,    -1,    -1,    -1,    12,    75,    77,    -1,    -1,    76,
      77,    -1,    78,     7,    74,    -1,    78,    -1,    -1,    79,
      80,     8,    53,    -1,    80,     6,    13,    -1,    13,    -1,
      -1,    13,    82,    83,    -1,    85,    -1,    -1,    84,    87,
      -1,    -1,    86,    14,   110,    -1,    -1,    88,    89,    -1,
      -1,    -1,     4,    90,    93,     5,    91,    92,    -1,    92,
      -1,    -1,    93,     6,   110,    -1,   110,    -1,    -1,    -1,
      27,    95,    96,    -1,    -1,     4,   114,     5,    29,    97,
      99,    -1,    -1,   114,    29,    98,    99,    -1,    63,    -1,
      61,    -1,    32,   101,    -1,    32,   101,   105,    -1,    -1,
       4,   114,     5,    33,   102,   104,    -1,    -1,   114,    33,
     103,   104,    -1,    63,    -1,    61,    -1,    -1,    34,   106,
     107,    -1,    -1,    63,    -1,    61,    -1,    38,    13,    -1,
      38,    89,    -1,    39,    13,    -1,    39,    89,    -1,   110,
      16,   111,    -1,   110,    17,   111,    -1,   111,    -1,   111,
      18,   112,    -1,   111,    19,   112,    -1,   112,    -1,    -1,
      13,   113,    87,    -1,    15,    -1,     4,   110,     5,    -1,
     115,    -1,    24,   115,    -1,   115,    20,   116,    -1,   115,
      21,   116,    -1,   115,    22,   116,    -1,   115,    22,    20,
     116,    -1,   115,    23,   116,    -1,   115,    23,    20,   116,
      -1,   115,    25,   116,    -1,   115,    26,   116,    -1,   115,
      25,    24,   116,    -1,   116,    -1,    13,    -1,    15,    -1,
       4,   114,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    56,    69,    80,    84,    88,    89,    93,
      94,    98,   103,    98,   111,   118,   126,   133,   141,   152,
     153,   157,   167,   157,   175,   179,   183,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   201,   202,
     203,   208,   215,   207,   218,   224,   217,   229,   230,   235,
     235,   251,   251,   254,   259,   258,   263,   263,   268,   269,
     273,   273,   281,   288,   299,   298,   305,   307,   307,   313,
     313,   329,   329,   350,   357,   349,   363,   367,   398,   405,
     412,   417,   416,   425,   424,   432,   431,   441,   449,   460,
     465,   474,   473,   481,   480,   490,   491,   496,   495,   506,
     510,   511,   515,   516,   520,   521,   525,   529,   533,   537,
     541,   545,   550,   549,   554,   559,   563,   564,   571,   575,
     579,   583,   587,   591,   595,   599,   603,   608,   612,   624,
     629
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
  "LEITURA", "IMPRESSAO", "LOWER_THEN_ELSE", "$accept", "programa", "$@1",
  "sem_tipo", "bloco", "parte_declara_vars", "var", "declara_vars",
  "declara_var", "$@2", "$@3", "tipo", "tipo_parametro",
  "tipo_retorno_func", "lista_id_var", "lista_idents", "comando_composto",
  "$@4", "$@5", "comando_composto_2", "comando_composto_2_rep_cond",
  "comandos", "comando_sem_ponto_e_virgula", "procedimento_ou_funcao",
  "$@6", "$@7", "$@8", "$@9", "procedimento_ou_funcao_2",
  "procedimento_ou_funcao_3", "$@10", "parametros_vars_proc_ou_func",
  "$@11", "vars_proc_ou_func", "$@12", "$@13", "vars_proc_ou_func_2",
  "var_proc_ou_func", "$@14", "lista_id_var_proc_ou_func",
  "atrib_proc_func", "$@15", "atrib_proc_func_2", "$@16", "atribuicao",
  "$@17", "var_chama_proc_func", "$@18", "passagem", "$@19", "$@20",
  "var_chama_proc_func_2", "lista_id_var_parametro", "repeticao", "$@21",
  "repeticao_2", "$@22", "$@23", "repeticao_3", "condicao",
  "condicao_se_entao", "$@24", "$@25", "condicao_se_entao_2",
  "condicao_senao", "$@26", "condicao_senao_2", "leitura", "impressao",
  "expressao_aritmetica", "expressao_termo", "expressao_fator", "$@27",
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
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    43,    42,    44,    45,    46,    47,    47,    48,
      48,    50,    51,    49,    52,    53,    54,    55,    55,    56,
      56,    58,    59,    57,    57,    60,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    65,    66,    64,    67,    68,    64,    69,    69,    71,
      70,    73,    72,    72,    75,    74,    76,    74,    77,    77,
      79,    78,    80,    80,    82,    81,    83,    84,    83,    86,
      85,    88,    87,    90,    91,    89,    89,    92,    93,    93,
      93,    95,    94,    97,    96,    98,    96,    99,    99,   100,
     100,   102,   101,   103,   101,   104,   104,   106,   105,   105,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   111,
     111,   111,   113,   112,   112,   112,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116
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
    -104,    14,    31,  -104,     5,  -104,    36,    32,  -104,    69,
      45,    46,    60,  -104,  -104,    55,    81,  -104,    83,  -104,
      92,  -104,    16,  -104,    73,  -104,  -104,  -104,    38,  -104,
    -104,    17,    15,    89,   100,   110,   119,   124,   127,   128,
     123,   125,  -104,   126,   103,   129,    53,    66,  -104,  -104,
      85,    88,   104,    93,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,    16,    16,    16,    16,    16,  -104,  -104,    60,
    -104,  -104,  -104,  -104,  -104,  -104,   130,    66,  -104,   112,
      66,   137,    93,  -104,  -104,  -104,    85,    85,    58,    84,
      79,    85,    97,  -104,  -104,  -104,  -104,  -104,   141,   141,
    -104,   139,  -104,   143,    97,   144,  -104,   145,   118,    29,
      29,  -104,  -104,    85,  -104,    85,  -104,    85,  -104,  -104,
      97,  -104,  -104,   115,   108,   109,  -104,   147,   146,   140,
    -104,  -104,   108,   131,    29,  -104,  -104,    16,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
      90,  -104,  -104,    97,    97,    97,    97,    97,   149,   150,
    -104,   120,  -104,  -104,  -104,  -104,    29,   148,  -104,  -104,
    -104,   108,   109,   109,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,   151,    29,  -104,  -104,  -104,  -104,  -104,   154,
     142,  -104,    60,  -104,  -104,  -104,   150,  -104,    52,   156,
    -104,  -104,   152,   132,  -104,  -104,  -104,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,  -104,   -69,  -104,  -104,  -104,   138,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
     -97,   -61,   -96,  -104,  -104,  -104,  -104,  -104,    65,   -34,
    -104,  -104,  -104,   -29,  -104,  -104,   -19,  -104,  -104,  -104,
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
     132,    47,   111,   112,   114,   116,   118,   119,    56,    29,
      48,   140,    49,   141,     4,   142,   150,   163,   164,   137,
       7,    50,    29,    30,    43,     8,    44,   105,    31,   147,
     107,   148,    12,   149,    32,    33,    30,    77,   202,    13,
     203,    31,    80,   140,    21,   141,    48,   142,    49,   171,
      80,    48,    14,    49,    10,    11,   167,    50,   113,    48,
     140,    49,   141,    80,   142,   131,   163,   164,    80,    80,
      50,    22,    48,    55,    49,   168,   -11,    48,    48,    49,
      49,   120,    59,   117,   115,    27,   154,   155,    40,    41,
     121,    61,   122,    86,    87,    88,    89,    62,    90,    91,
     152,   153,    83,   199,   154,   155,    63,   156,   157,   172,
     173,    64,   174,   175,    65,    66,    67,    85,    68,    70,
      71,   106,   108,   -69,   104,   127,   130,    55,   161,   133,
     135,   136,   -53,   160,   176,   197,    26,   181,   193,   185,
     162,   196,   177,   204,   129,   206,   205,   201,   195,   207,
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
     104,     4,    86,    87,    88,    89,    90,    91,    13,    13,
      13,   134,    15,   134,     3,   134,   120,   134,   134,    10,
       4,    24,    13,    27,     6,    13,     8,    77,    32,   113,
      80,   115,     7,   117,    38,    39,    27,     4,     6,    13,
       8,    32,     4,   166,     9,   166,    13,   166,    15,   153,
       4,    13,    12,    15,     5,     6,   137,    24,    20,    13,
     183,    15,   183,     4,   183,   103,   183,   183,     4,     4,
      24,    10,    13,     4,    15,     5,    13,    13,    13,    15,
      15,     4,    13,    24,    20,    13,    16,    17,    35,    36,
      13,    11,    15,    20,    21,    22,    23,     7,    25,    26,
       5,     6,    34,   192,    16,    17,     7,    18,    19,   154,
     155,     7,   156,   157,     7,     7,    13,    33,    13,    13,
      37,    29,     5,    14,    14,     4,     7,     4,     8,     5,
       5,    33,     5,     7,     5,    13,    18,    37,     7,    11,
      29,     7,    12,     7,    99,    13,   200,   196,   187,    37,
     151,   170,   183,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,    43,     0,     3,    13,    44,     4,    13,    56,
       5,     6,     7,    13,    12,    45,    46,    47,    48,    49,
      50,     9,    10,    57,    58,    60,    49,    13,    55,    13,
      27,    32,    38,    39,    62,    81,    94,   100,   108,   109,
      35,    36,    64,     6,     8,    82,    95,     4,    13,    15,
      24,   101,   114,   115,   116,     4,    13,    89,    92,    13,
      89,    11,     7,     7,     7,     7,     7,    13,    13,    59,
      13,    37,    52,    83,    84,    85,    86,     4,    96,   114,
       4,   114,   115,    34,   105,    33,    20,    21,    22,    23,
      25,    26,    90,    62,    62,    62,    62,    62,    65,    67,
      45,    51,    87,    88,    14,   114,    29,   114,     5,   106,
     103,   116,   116,    20,   116,    20,   116,    24,   116,   116,
       4,    13,    15,    93,   110,   111,   112,     4,    69,    69,
       7,    89,   110,     5,    98,     5,    33,    10,    61,    63,
      81,    94,   100,   107,    61,    63,   104,   116,   116,   116,
     110,   113,     5,     6,    16,    17,    18,    19,    72,    73,
       7,     8,    29,    61,    63,    99,   102,    62,     5,    87,
      91,   110,   111,   111,   112,   112,     5,    12,    74,    76,
      66,    37,    54,    97,   104,    11,    92,    75,    77,    78,
      79,    70,    71,     7,    99,    77,     7,    13,    80,    45,
      68,    74,     6,     8,     7,    70,    13,    37,    53
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
#line 56 "compilador.y"
    {
             geraCodigo (NULL, "INPP");
             }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 61 "compilador.y"
    {
             sprintf ( dados, "DMEM %d", num_vars);
             geraCodigo ( NULL, dados);
             geraCodigo ( NULL, "PARA");
             }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 70 "compilador.y"
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
#line 98 "compilador.y"
    {
            num_vars_inicial = num_vars;
            }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 103 "compilador.y"
    { /* AMEM */
            sprintf ( dados, "AMEM %d", percorre_vars);
            geraCodigo ( NULL, dados);
            }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 112 "compilador.y"
    {
            percorre_vars = num_vars - num_vars_inicial;
            insere_tipo_Simbolo_TB_SIMB ( token, percorre_vars);
            }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 119 "compilador.y"
    {
            percorre_vars = num_parametros - num_vars_inicial;
            insere_tipo_parametro_Simbolo_TB_SIMB ( nome_var_proc_func, tipo_valor_referencia, token, percorre_vars);
            }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 127 "compilador.y"
    {
            insere_tipo_retorno_Simbolo_TB_SIMB ( nome_var_proc_func, token);
            }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 134 "compilador.y"
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
#line 142 "compilador.y"
    { /* insere vars na tabela de símbolos */
            sprintf ( categoria, "var_simples");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            desloc++;
            num_vars++;
            }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 157 "compilador.y"
    {
            printf ( "Empilha vars %d\n", num_vars);
            empilha_Inteiro ( p_num_vars, num_vars);

            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVS %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 167 "compilador.y"
    {
            printf ( "Desempilha vars %d\n", num_vars);
            num_vars = desempilha_Inteiro ( p_num_vars);

            desempilha_String ( p_rotulos, &rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 208 "compilador.y"
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
#line 215 "compilador.y"
    {
            }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 218 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            sprintf ( categoria, "funcao");
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_Simbolo_TB_SIMB ( nome_var_proc_func, categoria, rotulo1, nivel_lexico, 0);
            }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 224 "compilador.y"
    {
            }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 235 "compilador.y"
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
#line 244 "compilador.y"
    {
            desloc = desempilha_Inteiro ( p_deslocamentos);
            nivel_lexico--;
            }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 251 "compilador.y"
    {
            num_parametros = 0;
            }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 259 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_referencia");
            }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 263 "compilador.y"
    {
            sprintf ( tipo_valor_referencia, "var_valor");
            }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 273 "compilador.y"
    {
            num_vars_inicial = num_parametros;
            }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 282 "compilador.y"
    {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 289 "compilador.y"
    {
            sprintf ( categoria, "parametro_formal");
            sprintf ( tipo_retorno, "sem_tipo");
            empilha_Simbolo_TB_SIMB ( token, categoria, NULL, nivel_lexico, desloc);
            num_parametros++;
            }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 299 "compilador.y"
    {
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 307 "compilador.y"
    {
            sprintf ( categoria, "procedimento");
            }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 313 "compilador.y"
    {
            sprintf ( categoria, "var_simples");
            printf ( "Verificando se %s e variavel\n", nome_var_proc_func);
            if ( procura_cat ( nome_var_proc_func, categoria, &rotulo1, &tipo, &x, &y) == -99 ) {
                sprintf ( dados, "Simbolo '%s' nao foi declarada", nome_var_proc_func);
                imprimeErro ( dados );
                exit ( 1);
            }
            }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 322 "compilador.y"
    {
            sprintf ( dados, "ARMZ %d, %d", x, y);
            geraCodigo ( NULL, dados );
            }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 329 "compilador.y"
    {
            sprintf ( categoria2, "funcao");
            printf ( "Verificando se %s e variável, procedimento ou função\n", nome_var_proc_func);
            if ( procura_cat ( nome_var_proc_func, categoria, &rotulo1, &tipo, &x, &y) != 1 && procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y) != 1 ) {
                sprintf ( dados, "Variavel, Procedimento ou Funcao '%s' nao foi declarada", nome_var_proc_func);
                imprimeErro ( dados);
                exit ( 1);
            }
            if ( procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y) == 1) {
                printf ( "O IDENT %s e função\n", nome_var_proc_func);
                sprintf ( dados, "AMEN 1");
                geraCodigo ( NULL, dados );
            }
            printf ( "ROTULOS: var/proc %s func %s\n", rotulo1, rotulo2);
            num_parametros = 0;
            }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 350 "compilador.y"
    {
            nome_proc_func = malloc ( sizeof (char)*TAM_TOKEN);
            strcpy ( nome_proc_func, nome_var_proc_func);
            printf ( "EMPILHOU nome %s num param %d\n", nome_proc_func, num_parametros);
            empilha_String ( p_nomes, nome_proc_func);
            empilha_Inteiro ( p_num_parametros, num_parametros);
            }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 357 "compilador.y"
    {
            desempilha_String ( p_nomes, &nome_proc_func);
            num_parametros = desempilha_Inteiro ( p_num_parametros);
            printf ( "DESEMPILHOU nome %s %d\n", nome_proc_func, num_parametros);
            strcpy ( nome_var_proc_func, nome_proc_func);
            }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 367 "compilador.y"
    {
            if ( procura_cat ( nome_var_proc_func, categoria, &rotulo1, &tipo, &x, &y) == 1) {
                sprintf ( dados, "procedimento");
                printf ( "comparando %s com %s %d\n", dados, categoria, strcmp( categoria, dados));
                if ( strcmp( categoria, dados) == 0) {
                    printf ( "Determinou como procedimento\n");
                    sprintf ( dados, "CHPR %s, %d", rotulo1, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
                else {
                    printf ( "Determinou como variável simples\n");
                    sprintf ( dados, "CRVL %d %d", x, y);
                    geraCodigo ( NULL, dados);
                }
            }
            else {
                if ( procura_cat ( nome_var_proc_func, categoria2, &rotulo2, &tipo, &x, &y) == 1) {
                    printf ( "Determinou como função com %d parametros\n", num_parametros);
                    if ( compara_parametros_proc_func ( nome_var_proc_func, num_parametros) != 1) {
                        sprintf ( dados, "Para função '%s' numero de parametros incorreto", nome_var_proc_func);
                        imprimeErro ( dados);
                        exit ( 1);
                    }
                    sprintf ( dados, "CHPR %s, %d", rotulo2, nivel_lexico);
                    geraCodigo ( NULL, dados );
                }
            }
            }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 399 "compilador.y"
    {
            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            printf ( "-----------------SOmou parametro e foi para %d\n", num_parametros_aux);
            }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 406 "compilador.y"
    {
            num_parametros_aux = desempilha_Inteiro ( p_num_parametros);
            num_parametros_aux++;
            empilha_Inteiro ( p_num_parametros, num_parametros_aux);
            printf ( "-----------------SOmou parametro e foi para %d\n", num_parametros_aux);
            }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 417 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            geraCodigo ( rotulo1, "NADA");
            }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 425 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 432 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo2);
            empilha_String ( p_rotulos, rotulo2);
            sprintf ( dados, "DSVF %s", rotulo2);
            geraCodigo ( NULL, dados);
            }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 442 "compilador.y"
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
#line 450 "compilador.y"
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
#line 461 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 466 "compilador.y"
    {
            desempilha_String ( p_rotulos, &rotulo2);
            geraCodigo ( rotulo2, "NADA");
            }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 474 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo ( NULL, dados);
            }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 481 "compilador.y"
    {
            gera_Proximo_Rotulo ( &rotulo1);
            empilha_String ( p_rotulos, rotulo1);
            sprintf ( dados, "DSVF %s", rotulo1);
            geraCodigo(  NULL, dados);
            }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 496 "compilador.y"
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
#line 526 "compilador.y"
    {
            geraCodigo (NULL, "SOMA");
            }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 530 "compilador.y"
    {
            geraCodigo (NULL, "SUBT");
            }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 538 "compilador.y"
    {
            geraCodigo (NULL, "MULT");
            }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 542 "compilador.y"
    {
            geraCodigo (NULL, "DIVI");
            }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 550 "compilador.y"
    {
            sprintf ( categoria, "var_simples");
            sprintf ( nome_var_proc_func, "%s", token);
            }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 555 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 565 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 572 "compilador.y"
    {
            geraCodigo ( NULL, "CMIG");
            }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 576 "compilador.y"
    {
            geraCodigo ( NULL, "CMDG");
            }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 580 "compilador.y"
    {
            geraCodigo ( NULL, "CMMA");
            }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 584 "compilador.y"
    {
            geraCodigo ( NULL, "CMAG");
            }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 588 "compilador.y"
    {
            geraCodigo ( NULL, "CMME");
            }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 592 "compilador.y"
    {
            geraCodigo ( NULL, "CMEG");
            }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 596 "compilador.y"
    {
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 600 "compilador.y"
    {
            geraCodigo ( NULL, "DISJ");
            }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 604 "compilador.y"
    {
            geraCodigo ( NULL, "INVR");
            geraCodigo ( NULL, "CONJ");
            }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 613 "compilador.y"
    {
            procura_simb ( token, &x, &y, &tipo );
            printf ( "Correspondendo o valor %p\n", procura_simb ( token, &x, &y, &tipo ));
            if ( x == -99 ){ // numero -99 indica que nao encontrou simb na tabela
                sprintf ( dados, "Simbolo '%s' nao foi declarada", token);
                imprimeErro ( dados );
                exit ( 1);
            }
            sprintf ( dados, "CRVL %d, %d", x, y);
            geraCodigo ( NULL, dados);
            }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 625 "compilador.y"
    {
            sprintf ( dados, "CRCT %s", token);
            geraCodigo ( NULL, dados);
            }
    break;



/* Line 1806 of yacc.c  */
#line 2329 "compilador.tab.c"
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
#line 633 "compilador.y"


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

