/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass3_15CS10060.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <string.h>
	extern FILE* yyin;
	extern int yylex();
	extern int yyparse();
	void yyerror(const char* s);

	#include "ass4_15CS10060_translator.h"
	quad_array *Q_arr = new quad_array;
	symbol_table *GT = new symbol_table;
	symbol_table *curr_symbol_table = GT;
	//GT->name = "Global Table";


#line 82 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING_LITERAL = 259,
    INTEGER_CONSTANT = 260,
    FLOATING_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    ZERO_CONSTANT = 263,
    LEFT_CURL = 264,
    RCB = 265,
    ARROW = 266,
    PLUS_PLUS = 267,
    MINUS_MINUS = 268,
    NEW = 269,
    LEFT_SHIFT = 270,
    RIGHTSH = 271,
    LE = 272,
    GE = 273,
    ET = 274,
    NE = 275,
    DAND = 276,
    DOR = 277,
    QM = 278,
    COL = 279,
    POW = 280,
    OR = 281,
    SCOL = 282,
    ASSIGN = 283,
    MULTA = 284,
    DIVA = 285,
    REMA = 286,
    POWA = 287,
    PLUSA = 288,
    MINUSA = 289,
    LSA = 290,
    RSA = 291,
    ANDA = 292,
    ORA = 293,
    BREAK = 294,
    VOID = 295,
    CHAR = 296,
    INT = 297,
    FLOAT = 298,
    SHORT = 299,
    LONG = 300,
    UNSIGNED = 301,
    SIGNED = 302,
    RETURN = 303,
    IF = 304,
    DO = 305,
    SWITCH = 306,
    GOTO = 307,
    CASE = 308,
    FOR = 309,
    WHILE = 310,
    BOOL = 311,
    CONTINUE = 312,
    DEFAULT = 313,
    ELSE = 314,
    MATRIX = 315,
    DOUBLE = 316
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define INTEGER_CONSTANT 260
#define FLOATING_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define ZERO_CONSTANT 263
#define LEFT_CURL 264
#define RCB 265
#define ARROW 266
#define PLUS_PLUS 267
#define MINUS_MINUS 268
#define NEW 269
#define LEFT_SHIFT 270
#define RIGHTSH 271
#define LE 272
#define GE 273
#define ET 274
#define NE 275
#define DAND 276
#define DOR 277
#define QM 278
#define COL 279
#define POW 280
#define OR 281
#define SCOL 282
#define ASSIGN 283
#define MULTA 284
#define DIVA 285
#define REMA 286
#define POWA 287
#define PLUSA 288
#define MINUSA 289
#define LSA 290
#define RSA 291
#define ANDA 292
#define ORA 293
#define BREAK 294
#define VOID 295
#define CHAR 296
#define INT 297
#define FLOAT 298
#define SHORT 299
#define LONG 300
#define UNSIGNED 301
#define SIGNED 302
#define RETURN 303
#define IF 304
#define DO 305
#define SWITCH 306
#define GOTO 307
#define CASE 308
#define FOR 309
#define WHILE 310
#define BOOL 311
#define CONTINUE 312
#define DEFAULT 313
#define ELSE 314
#define MATRIX 315
#define DOUBLE 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "ass3_15CS10060.y" /* yacc.c:355  */

	string *str_val;
	int int_val;
	float float_val;	
	char char_val ;
	expr_attr *expr;
	declar_list *dec_list;
	declar declara;
	func_param *f_par;
	func_param_list *f_param_list;

#line 253 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 270 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   858

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    73,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      74,     2,    75,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,   100,   110,   118,   134,   147,   158,   168,
     180,   186,   190,   203,   243,   249,   252,   253,   260,   282,
     286,   303,   315,   316,   327,   336,   371,   372,   373,   374,
     378,   384,   389,   475,   580,   670,   672,   774,   881,   882,
     986,  1091,  1094,  1106,  1119,  1132,  1147,  1148,  1161,  1176,
    1179,  1214,  1215,  1232,  1233,  1247,  1248,  1269,  1270,  1291,
    1292,  1316,  1317,  1327,  1328,  1329,  1330,  1331,  1332,  1333,
    1334,  1335,  1336,  1337,  1341,  1344,  1348,  1352,  1357,  1389,
    1396,  1397,  1401,  1412,  1436,  1440,  1451,  1457,  1461,  1462,
    1463,  1464,  1465,  1466,  1467,  1468,  1469,  1473,  1477,  1486,
    1496,  1497,  1498,  1501,  1527,  1538,  1544,  1547,  1551,  1558,
    1564,  1571,  1578,  1587,  1588,  1592,  1593,  1597,  1598,  1602,
    1603,  1604,  1605,  1609,  1613,  1614,  1618,  1619,  1623,  1624,
    1625,  1626,  1627,  1628,  1632,  1633,  1634,  1638,  1639,  1643,
    1644,  1648,  1649,  1653,  1654,  1657,  1658,  1659,  1663,  1664,
    1665,  1666,  1667,  1668,  1669,  1670,  1671,  1672,  1673,  1674,
    1675,  1676,  1679,  1680,  1681,  1682,  1683,  1687,  1688,  1692,
    1693,  1697,  1722,  1726,  1727
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "ZERO_CONSTANT", "LEFT_CURL", "RCB", "ARROW", "PLUS_PLUS", "MINUS_MINUS",
  "NEW", "LEFT_SHIFT", "RIGHTSH", "LE", "GE", "ET", "NE", "DAND", "DOR",
  "QM", "COL", "POW", "OR", "SCOL", "ASSIGN", "MULTA", "DIVA", "REMA",
  "POWA", "PLUSA", "MINUSA", "LSA", "RSA", "ANDA", "ORA", "BREAK", "VOID",
  "CHAR", "INT", "FLOAT", "SHORT", "LONG", "UNSIGNED", "SIGNED", "RETURN",
  "IF", "DO", "SWITCH", "GOTO", "CASE", "FOR", "WHILE", "BOOL", "CONTINUE",
  "DEFAULT", "ELSE", "MATRIX", "DOUBLE", "'('", "')'", "'['", "']'", "'.'",
  "','", "'&'", "'*'", "'+'", "'-'", "'/'", "'%'", "'<'", "'>'", "$accept",
  "M", "N", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator", "type_specifiers",
  "declarator", "direct_declarator", "pointer", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_row_list", "initializer_row", "designation",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_decalaration",
  "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,    91,    93,    46,    44,    38,    42,
      43,    45,    47,    37,    60,    62
};
# endif

#define YYPACT_NINF -211

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-211)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     739,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,     4,   739,   120,  -211,  -211,  -211,  -211,
       2,   -15,   -12,  -211,   747,    86,     5,  -211,  -211,  -211,
    -211,    -1,  -211,  -211,     2,   257,   343,  -211,     4,  -211,
     797,   232,   413,    86,  -211,  -211,    23,    45,  -211,  -211,
    -211,  -211,  -211,  -211,   764,   764,  -211,    69,   509,    37,
     395,    64,   131,   764,    82,    91,   122,   134,   764,  -211,
    -211,  -211,  -211,  -211,    29,   786,   764,  -211,    52,   -24,
      70,    15,   137,   111,   158,   164,   172,   150,  -211,  -211,
      -8,  -211,  -211,  -211,  -211,   326,  -211,  -211,  -211,  -211,
    -211,  -211,   424,  -211,  -211,  -211,  -211,  -211,  -211,     2,
     133,   135,  -211,   -29,  -211,   136,   395,  -211,  -211,  -211,
    -211,    -6,   764,   143,   764,   177,  -211,  -211,   182,   464,
     764,  -211,   395,   -18,   204,  -211,  -211,  -211,   534,   764,
     206,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,   764,  -211,   764,   764,   764,   764,   764,   764,
     764,   764,   764,   764,   764,   764,   764,   764,   764,   764,
     194,   152,  -211,   764,  -211,  -211,   764,   213,  -211,    17,
     155,   343,   -16,  -211,  -211,  -211,   739,  -211,   214,  -211,
    -211,  -211,    -7,   157,    25,  -211,   395,   545,     1,   556,
      31,  -211,  -211,  -211,  -211,    60,  -211,    -2,  -211,  -211,
    -211,  -211,  -211,    52,    52,   -24,   -24,    70,    70,    70,
      70,    15,    15,   137,   111,   158,  -211,  -211,  -211,  -211,
     160,  -211,  -211,   424,   424,  -211,  -211,  -211,  -211,  -211,
     395,   764,   395,  -211,   581,     8,   626,   651,     9,   395,
    -211,   764,   163,   764,   764,   764,  -211,   155,  -211,   343,
     169,    65,  -211,   395,    66,   662,   673,    12,   395,    68,
     695,  -211,  -211,   764,   164,  -211,   165,  -211,   395,  -211,
    -211,   395,   395,    73,   395,    74,   742,  -211,   395,   395,
      76,    87,  -211,   194,   212,  -211,  -211,  -211,   395,  -211,
     395,   395,    79,  -211,  -211,   395,  -211,  -211,  -211,  -211,
    -211,   395,  -211,   764,  -211,  -211
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    86,    87,    89,    91,    88,    90,    95,    94,    96,
      93,    92,   170,     0,    80,     0,   167,   169,    99,    77,
       0,   106,     0,    82,    84,    97,     0,    81,    79,     1,
     168,     0,   107,    78,     0,     0,     0,   173,     0,   171,
       0,     0,     0,    98,   100,    83,    84,     4,     9,     5,
       6,     7,     8,   137,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    11,    22,    30,     0,    31,    35,    38,
      41,    46,    49,    51,    53,    55,    57,    59,    61,    74,
       0,   141,   142,   128,   129,     0,   139,   130,   131,   132,
     133,     4,     0,   115,    85,   174,   172,   113,   104,   112,
       0,   108,   109,     0,   101,     0,     0,    23,    24,   164,
     165,     0,     0,     0,     0,     0,    30,    76,     0,     0,
       0,   163,     0,     0,     0,    17,    18,    19,     0,     0,
       0,    63,    64,    65,    66,    72,    67,    68,    69,    70,
      71,    73,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,   138,   140,     0,     0,   119,     0,
     117,     0,     0,   124,   111,   103,     0,   105,     0,   102,
     134,   166,     0,     0,     0,   162,     0,     0,     0,     0,
       0,   136,    10,    16,    14,     0,    20,     0,    15,    62,
      32,    33,    34,    36,    37,    39,    40,    44,    45,    42,
      43,    47,    48,    50,    52,    54,     2,     2,     2,    75,
       0,   127,   116,     0,     0,   120,   123,   125,   110,   114,
       0,     0,     0,   135,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,     0,     0,   126,   118,   121,     0,
     145,     0,   147,     0,     0,     0,     0,     0,     0,     0,
       0,   148,    21,     0,     3,     3,     3,   122,     0,   149,
     157,     0,     0,     0,     0,     0,     0,   161,     0,     0,
       0,     0,    56,    58,     0,   146,   154,   156,     0,   155,
       0,     0,     0,   159,   160,     0,    12,     2,   151,   152,
     153,     0,   158,     0,   150,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -210,   -30,  -211,  -211,  -211,   -54,  -211,   -73,    20,
      26,     7,    22,    71,    80,    72,   -14,    -5,  -211,   -59,
     -22,  -211,   -52,    75,   -11,    11,  -211,  -211,   216,  -211,
      10,   226,   234,  -211,  -211,    85,  -211,   -26,  -211,    24,
      34,  -211,    98,   -58,  -211,    13,  -211,   161,  -211,  -211,
    -211,  -211,  -211,   243,  -211,  -211
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   253,   170,    73,    74,   205,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   152,    90,   128,    12,    38,    28,    22,    23,    14,
      46,    25,    26,   110,   111,   112,   113,   178,   179,   180,
     181,   182,   183,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    15,    16,    17,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     117,   118,   123,   153,   127,    18,   121,    18,    18,   126,
     104,    13,   236,    37,   103,    33,   133,   254,   255,   172,
     115,   191,   126,    24,    91,    27,    13,   232,   246,   105,
      31,    19,   161,   162,   187,   265,   270,    39,   188,   286,
     134,   135,   136,   137,   233,   202,   157,   158,   176,   173,
     177,    36,   109,   106,    21,    34,   240,   171,   190,   173,
     173,   173,    44,   252,    20,   173,    20,    20,   173,   116,
     192,    21,   194,    21,   201,   173,   173,   198,   200,   173,
     103,   210,   211,   212,    91,   159,   160,   207,   242,   163,
     164,   138,   173,   139,   249,   140,   119,   313,   173,   122,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   206,   127,   199,   184,
      29,   154,   126,   250,   155,   156,   124,   251,   279,   281,
     209,   288,   173,   173,   125,   173,   298,   300,   243,   305,
     173,   173,   311,   173,   129,   245,   173,   248,    41,   131,
      42,   229,   306,   130,   173,   235,   165,   166,   132,   103,
       1,     2,     3,     4,     5,     6,     7,     8,   217,   218,
     219,   220,    -3,    -3,   227,   228,     9,   213,   214,   167,
      10,    11,   260,   168,   262,   215,   216,   221,   222,   261,
     169,   271,   264,    -3,   267,   269,   185,   109,   193,   126,
     126,   189,   186,   276,   195,   280,   196,   203,   258,   208,
     287,   103,   103,   283,   285,   226,   231,   239,   290,   241,
     295,   291,   234,   296,   297,   256,   299,   273,   278,   272,
     303,   304,   173,   277,   302,   107,   307,   103,   223,   274,
     308,   225,   309,   310,   292,   293,   294,   312,   224,   275,
      45,   230,    43,   314,   315,    32,   175,   257,    30,   126,
      47,    48,    49,    50,    51,    52,    35,    53,   259,    54,
      55,   238,     1,     2,     3,     4,     5,     6,     7,     8,
     237,     0,     0,     0,    56,     0,     0,     0,     9,     0,
       0,     0,    10,    11,     0,   108,    57,     1,     2,     3,
       4,     5,     6,     7,     8,    58,    59,    60,    61,    62,
      63,    64,    65,     9,    66,    67,     0,    10,    11,    68,
       0,     0,     0,     0,     0,    69,    70,    71,    72,    47,
      48,    49,    50,    51,    52,    35,   174,     0,    54,    55,
       0,     0,     0,     0,     0,     0,   101,    48,    49,    50,
      51,    52,   102,    56,     0,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     1,     2,     3,     4,
       5,     6,     7,     8,    58,    59,    60,    61,    62,    63,
      64,    65,     9,    66,    67,     0,    10,    11,    68,     0,
       0,     0,     0,     0,    69,    70,    71,    72,    47,    48,
      49,    50,    51,    52,    35,    68,     0,    54,    55,     0,
       0,    69,    70,    71,    72,     0,   101,    48,    49,    50,
      51,    52,    56,     0,     0,    54,    55,   101,    48,    49,
      50,    51,    52,   102,    57,     0,    54,    55,     0,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,     0,    66,    67,     0,     0,     0,    68,     0,     0,
       0,     0,     0,    69,    70,    71,    72,   101,    48,    49,
      50,    51,    52,     0,     0,    68,    54,    55,   114,     0,
       0,    69,    70,    71,    72,     0,    68,     0,   176,     0,
     177,   197,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,   101,    48,    49,    50,    51,    52,     0,     0,
       9,    54,    55,     0,    10,    11,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,   120,   101,    48,    49,
      50,    51,    52,     0,     0,     0,    54,    55,   101,    48,
      49,    50,    51,    52,     0,     0,     0,    54,    55,   101,
      48,    49,    50,    51,    52,     0,     0,     0,    54,    55,
       0,    68,   244,     0,     0,     0,     0,    69,    70,    71,
      72,     0,     0,   247,   101,    48,    49,    50,    51,    52,
       0,     0,     0,    54,    55,     0,    68,   204,     0,     0,
       0,     0,    69,    70,    71,    72,     0,    68,     0,     0,
       0,     0,     0,    69,    70,    71,    72,     0,    68,     0,
       0,     0,     0,     0,    69,    70,    71,    72,     0,   101,
      48,    49,    50,    51,    52,     0,     0,     0,    54,    55,
       0,     0,     0,    68,   263,     0,     0,     0,     0,    69,
      70,    71,    72,   266,   101,    48,    49,    50,    51,    52,
       0,     0,     0,    54,    55,   101,    48,    49,    50,    51,
      52,     0,     0,     0,    54,    55,   101,    48,    49,    50,
      51,    52,     0,     0,     0,    54,    55,     0,    68,     0,
       0,     0,     0,     0,    69,    70,    71,    72,   101,    48,
      49,    50,    51,    52,     0,     0,     0,    54,    55,     0,
       0,     0,     0,    68,   268,     0,     0,     0,     0,    69,
      70,    71,    72,     0,    68,   282,     0,     0,     0,     0,
      69,    70,    71,    72,     0,    68,   284,     0,     0,     0,
       0,    69,    70,    71,    72,   101,    48,    49,    50,    51,
      52,     0,     0,     0,    54,    55,    35,    68,   289,     0,
       0,     0,     0,    69,    70,    71,    72,   101,    48,    49,
      50,    51,    52,     0,     0,    36,    54,    55,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     1,     2,     3,
       4,     5,     6,     7,     8,     9,     0,     0,     0,    10,
      11,     0,     0,     9,    68,   301,    35,    10,    11,     0,
      69,    70,    71,    72,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,    68,     0,     0,     0,
       0,     0,    69,    70,    71,    72,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,    10,    11
};

static const yytype_int16 yycheck[] =
{
      54,    55,    60,    76,    63,     3,    58,     3,     3,    63,
      36,     0,    28,    24,    36,    27,    68,   227,   228,    27,
      42,    27,    76,    13,    35,    14,    15,    10,    27,    40,
      20,    27,    17,    18,    63,    27,    27,    24,    67,    27,
      11,    12,    13,    14,    27,    63,    70,    71,    64,    67,
      66,    28,    41,    40,    69,    67,    63,    87,   116,    67,
      67,    67,    63,    65,    62,    67,    62,    62,    67,    24,
     122,    69,   124,    69,   132,    67,    67,   129,   130,    67,
     102,   154,   155,   156,    95,    15,    16,   139,    63,    74,
      75,    62,    67,    64,    63,    66,    27,   307,    67,    62,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   138,   176,   129,   109,
       0,    69,   176,    63,    72,    73,    62,    67,    63,    63,
     152,    63,    67,    67,     3,    67,    63,    63,   196,    63,
      67,    67,    63,    67,    62,   197,    67,   199,    62,    27,
      64,   173,    65,    62,    67,   181,    19,    20,    24,   181,
      40,    41,    42,    43,    44,    45,    46,    47,   161,   162,
     163,   164,    22,    23,    22,    23,    56,   157,   158,    68,
      60,    61,   240,    25,   242,   159,   160,   165,   166,   241,
      26,   249,   244,    21,   246,   247,    63,   186,    55,   253,
     254,    65,    67,   255,    27,   263,    24,     3,   234,     3,
     268,   233,   234,   265,   266,    21,     3,     3,   270,    62,
     278,   273,    67,   281,   282,    65,   284,    64,    59,   251,
     288,   289,    67,   259,   286,     3,    24,   259,   167,   253,
     298,   169,   300,   301,   274,   275,   276,   305,   168,   254,
      34,   176,    26,   311,   313,    21,    95,   233,    15,   313,
       3,     4,     5,     6,     7,     8,     9,    10,   234,    12,
      13,   186,    40,    41,    42,    43,    44,    45,    46,    47,
     182,    -1,    -1,    -1,    27,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    -1,    63,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    27,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,     3,     4,
       5,     6,     7,     8,     9,    62,    -1,    12,    13,    -1,
      -1,    68,    69,    70,    71,    -1,     3,     4,     5,     6,
       7,     8,    27,    -1,    -1,    12,    13,     3,     4,     5,
       6,     7,     8,     9,    39,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,     3,     4,     5,
       6,     7,     8,    -1,    -1,    62,    12,    13,    65,    -1,
      -1,    68,    69,    70,    71,    -1,    62,    -1,    64,    -1,
      66,    27,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,     3,     4,     5,     6,     7,     8,    -1,    -1,
      56,    12,    13,    -1,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    27,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      -1,    62,    27,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    27,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    -1,    62,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    27,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    -1,    62,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    -1,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,     9,    62,    63,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,     3,     4,     5,
       6,     7,     8,    -1,    -1,    28,    12,    13,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    40,    41,    42,
      43,    44,    45,    46,    47,    56,    -1,    -1,    -1,    60,
      61,    -1,    -1,    56,    62,    63,     9,    60,    61,    -1,
      68,    69,    70,    71,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,    42,    43,    44,    45,    46,    47,    56,
      60,    61,   100,   101,   105,   128,   129,   130,     3,    27,
      62,    69,   103,   104,   106,   107,   108,   101,   102,     0,
     129,   106,   108,    27,    67,     9,    28,   100,   101,   121,
     131,    62,    64,   107,    63,   104,   106,     3,     4,     5,
       6,     7,     8,    10,    12,    13,    27,    39,    48,    49,
      50,    51,    52,    53,    54,    55,    57,    58,    62,    68,
      69,    70,    71,    79,    80,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      98,   100,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     3,     9,    96,   113,   100,   121,     3,    63,   101,
     109,   110,   111,   112,    65,    96,    24,    82,    82,    27,
      27,    98,    62,   119,    62,     3,    82,    95,    99,    62,
      62,    27,    24,    98,    11,    12,    13,    14,    62,    64,
      66,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    97,    84,    69,    72,    73,    70,    71,    15,
      16,    17,    18,    74,    75,    19,    20,    68,    25,    26,
      78,    78,    27,    67,    10,   123,    64,    66,   113,   114,
     115,   116,   117,   118,   106,    63,    67,    63,    67,    65,
     119,    27,    98,    55,    98,    27,    24,    27,    98,   100,
      98,   119,    63,     3,    63,    81,    96,    98,     3,    96,
      84,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    90,    91,    21,    22,    23,    96,
      99,     3,    10,    27,    67,   113,    28,   118,   111,     3,
      63,    62,    63,   119,    27,    98,    27,    27,    98,    63,
      63,    67,    65,    77,    77,    77,    65,   115,   113,   116,
     119,    98,   119,    63,    98,    27,    27,    98,    63,    98,
      27,   119,    96,    64,    92,    93,    98,   113,    59,    63,
     119,    63,    63,    98,    63,    98,    27,   119,    63,    63,
      98,    98,    78,    78,    78,   119,   119,   119,    63,   119,
      63,    63,    98,   119,   119,    63,    65,    24,   119,   119,
     119,    63,   119,    77,   119,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    85,    85,    85,    85,    86,    86,    86,    87,    87,
      87,    88,    88,    88,    88,    88,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    99,   100,   100,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     7,     4,     3,     3,     3,     2,     2,     2,
       1,     3,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     6,     1,     6,     1,
       9,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     2,
       0,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     4,     4,     3,     4,     1,     2,     1,     1,
       3,     2,     1,     1,     3,     1,     3,     1,     3,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     6,
       9,     8,     8,     8,     7,     7,     7,     6,     8,     7,
       7,     6,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     3,     4,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 92 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
    (yyval.expr) = new expr_attr;
    (yyval.expr)->instr = Q_arr->index;
}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
    //$$ = nextlist
    (yyval.expr) = new expr_attr;
    (yyval.expr)->nextlist = makelist(Q_arr->index);
    Q_arr -> emit("","","", OP_GOTO);
}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																			(yyval.expr) = new expr_attr;
																			string t = *((yyvsp[0].str_val));
																			symbol_table_entry *s = curr_symbol_table->lookup(t);
																			(yyval.expr)->name= t;
																			cout <<(yyval.expr)->name <<endl<<endl;
																			printf("RULE : primary_expression \t->\t\t identifier\n");
																		}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 120 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
 																			cout <<"b"<<endl;
 																			(yyval.expr) = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(INT_);
																			init_value tmp_init;
																			tmp_init.init_int = (yyvsp[0].int_val);
																			symbol_table_entry *ptr = curr_symbol_table->lookup(tmp);
																			ptr->initial_value = tmp_init;
																			ptr-> type = INT_ ;
																			(yyval.expr)->name= tmp;

																			quad * q = Q_arr -> emit(tmp, to_string((yyvsp[0].int_val)), OP_COPY);
																			printf("RULE : primary_expression \t->\t\t constant\n");
																		}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 135 "ass3_15CS10060.y" /* yacc.c:1646  */
    {cout <<"c"<<endl;
																			(yyval.expr) = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(DOUBLE_);
																			init_value tmp_init;
																			tmp_init.init_double = (yyvsp[0].float_val);
																			symbol_table_entry *ptr = curr_symbol_table->update(tmp, DOUBLE_, tmp_init, 0, NULL); // set offset
																			(yyval.expr)->name = tmp;


																			quad * q = Q_arr -> emit(tmp, to_string((yyvsp[0].float_val)), OP_COPY);
																			printf("RULE : primary_expression \t->\t\t constant\n");
																			}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 147 "ass3_15CS10060.y" /* yacc.c:1646  */
    {cout <<"d"<<endl;
																			(yyval.expr) = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(CHAR_);
																			init_value tmp_init;
																			tmp_init.init_char = (yyvsp[0].char_val);
																			symbol_table_entry *ptr = curr_symbol_table->update(tmp, CHAR_,tmp_init, 0, NULL); // set offset
																			(yyval.expr)->name = tmp;

																			quad * q = Q_arr -> emit(tmp, to_string((yyvsp[0].char_val)), OP_COPY);

																			printf("RULE : primary_expression \t->\t\t constant\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 158 "ass3_15CS10060.y" /* yacc.c:1646  */
    {cout <<"a"<<endl;
																			(yyval.expr) = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(INT_);
																			init_value tmp_init;
																			tmp_init.init_int = (yyvsp[0].int_val);
																			(yyval.expr)->addr = curr_symbol_table->update(tmp, INT_, tmp_init, 0, NULL); //  TO BE DONE set offset

																			quad * q = Q_arr -> emit(tmp, to_string((yyvsp[0].int_val)), OP_COPY);

																			printf("RULE : primary_expression \t->\t\t constant\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																			
																			(yyval.expr) = new expr_attr;
																			string tmp = curr_symbol_table -> gen_temp(PTR_);
																			(yyval.expr)->name = tmp;
																			(yyval.expr)->addr = curr_symbol_table->lookup(tmp); //  TO BE DONE set offset // TBD, STRING HANDLING!
																			(yyval.expr)->addr->type = PTR_;

																			quad * q = Q_arr -> emit(tmp, (*((yyvsp[0].str_val))), OP_COPY);																


																			printf("RULE : primary_expression \t->\t string_literal\n");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 180 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf("primary_expression -\t->\t (expression)\n");
																			
																			}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "ass3_15CS10060.y" /* yacc.c:1646  */
    {	cout <<"check"<<endl; cout << (yyvsp[0].expr)->name<<endl;

																				(yyval.expr) = (yyvsp[0].expr); printf("RULE:\t postfix_expression \t->\tprimary_expression\n");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 190 "ass3_15CS10060.y" /* yacc.c:1646  */
    {// to be done

																				/* 
																				//$$ = new expr_attr;
																				$$->addr = curr_symbol_table->gen_temp();//$1 id matrix type, only double type matrix value

																				$$->addr -> type = DOUBLE_;
																				Q_arr->emit($$->addr, );
																				*/

																				/* to be done*/printf(" RULE:\tpostfix_expression \t->\t postfix_expression [ expression ]\n");
																		}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 203 "ass3_15CS10060.y" /* yacc.c:1646  */
    {	

			      /*  string f = $1->loc;
        symboltable *fsym = GT.lookup(f)->nested_table;
        func_list *flist = ($3);
        list<func_def*>::iterator it;
        int c = 0;
        for(it = flist->func_def_list.begin(); it!=flist->func_def_list.end();it++)
        {
            func_def *f = *it;
            c++;
            Q_arr.emit(PARAM, f->param_name,"","");
        }
        string s = to_string(c);
        	Q_arr.emit(CALL,f,s,"");

cout <<"CHECK1"<<endl;		*/	cout << "we are here"<<endl;
																	        (yyval.expr) = (yyvsp[-3].expr);
																	        cout <<"CHECK1"<<endl;
																	        symbol_table *f_symbol = GT->lookup( (yyvsp[-3].expr)->name)->nested_table;

																	        func_param_list *flist = ((yyvsp[-1].f_param_list));
																	        int i;
																	        cout <<"CHECK1"<<endl;	
																	        int c = 0;
																	        //cout <<&(f_list->vec)<<endl<<endl;;
																	        for(i=0;i < (flist->vec).size() ;i++)
																	        {
																	            c++;
																	            Q_arr->emit("",(flist->vec)[i].name, "",OP_PARAM);
																	        }
																	        cout <<"CHECK1"<<endl;	
																	        string s = to_string(c);																        cout <<"CHECK2"<<endl;	
																	        cout<<"sf"<<endl;
																	        	Q_arr->emit("", (yyvsp[-3].expr)->name,s, OP_CALL);
																	        		cout <<"CHECK3"<<endl;	
																	        	printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( argument_expression_list_opt )\n");
																	      }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 243 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																			(yyval.expr) = (yyvsp[-2].expr);
																			cout <<"mckam"<<endl<<(yyvsp[-2].expr)->name<<endl;
																			Q_arr->emit("",(yyvsp[-2].expr)->name, "0", OP_CALL);

																		printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( )\n");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 249 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) =(yyvsp[-2].expr);
																			//not supported
																			printf(" RULE:\tpostfix_expression \t->\t postfix_expression . identifier\n");}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 252 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[-2].expr);printf(" RULE:\tpostfix_expression \t->\t postfix_expression -> identifier\n");}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 253 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																				 (yyval.expr) = new expr_attr;

																		        symbol_table_entry * f = curr_symbol_table->lookup((yyvsp[-1].expr)->name);
																		        (yyval.expr)->name = curr_symbol_table->gen_temp(f->type);														      

																		        printf(" RULE:\tpostfix_expression \t->\t postfix_expression ++\n");}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 260 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																				 (yyval.expr) = new expr_attr;

																		        symbol_table_entry * f = curr_symbol_table->lookup((yyvsp[-1].expr)->name);
																		        (yyval.expr)->name =curr_symbol_table->gen_temp(f->type);
																		        /*
																		        if(f->type.array_type.compare("array") == 0)
																		        {
																		            string temp = curr_sym->gentemp(f->type);
																		            Q_arr->emit(temp, $1->addr, *($1->inner), OP_ARRAY_ACCESS);
																		            Q_arr->emit($$->addr, temp, "", OP_COPY);
																		            Q_arr->emit(temp, temp, "1", OP_PLUS);
																		            Q_arr->emit($1->addr, temp, *($1->inner), ARRAY_DEREFERENCE);
																		        }
																		        */
																		        //else check once again
																		        //{
																		            Q_arr->emit( (yyval.expr)->name, (yyvsp[-1].expr)->name, "", OP_COPY);
																		            Q_arr->emit((yyvsp[-1].expr)->name, (yyvsp[-1].expr)->name, "1", OP_MINUS);

																		        //}   //corrected
																		        printf(" RULE:\tpostfix_expression \t->\t postfix_expression --\n");}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 282 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[-1].expr); printf(" RULE:\tpostfix_expression \t->\t postfix_expression .'");}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 286 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
			/*func_param *f = new func_param;
        f->param_name = $1->addr->name;
        $$ = new func_param_list;
        f->type = (curr_symbol_table->lookup(f->param_name)->type);
        $$->vec.push_back(f);*/
																				
																				(yyval.f_param_list) = new func_param_list;
																				func_param f;
																				cout <<"a"<<endl;
																				f.name = ((yyvsp[0].expr)) -> name;
																				cout <<"b"<<endl;
																				((yyval.f_param_list)->vec).push_back(f);

																				printf(" RULE:\targument_expression_list \t->\t assignment_expression\n");
																		}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 303 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																					
																			(yyval.f_param_list) = (yyvsp[-2].f_param_list) ;
																			func_param f;
																			f.name = ((yyvsp[0].expr)) -> name;
																			((yyval.f_param_list)->vec).push_back(f);
																			
																			printf(" RULE:\targument_expression_list \t->\t argument_expression_list , assignment_expression\n");
																		}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 315 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); printf(" RULE:\tunary_expression \t->\t postfix_expression\n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 316 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//Done
																				(yyval.expr) = new expr_attr;
																				string tmp = curr_symbol_table -> gen_temp((yyvsp[0].expr)->addr->type);
																				init_value tmp_init;
																			
																				(yyval.expr)->addr = curr_symbol_table->update(tmp, (yyvsp[0].expr)->addr->type, tmp_init, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																				quad *q = Q_arr -> emit(tmp, (yyvsp[0].expr)->addr->name, OP_UNARY_PLUS);


																				printf(" RULE:\tunary_expression \t->\t ++ unary_expression\n");}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 327 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				(yyval.expr) = new expr_attr;
																				string tmp = curr_symbol_table -> gen_temp((yyvsp[0].expr)->addr->type);
																				init_value tmp_init;
																			
																				(yyval.expr)->addr = curr_symbol_table->update(tmp, (yyvsp[0].expr)->addr->type, tmp_init, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																				quad *q = Q_arr -> emit(tmp, (yyvsp[0].expr)->addr->name, OP_UNARY_MINUS);
																				printf(" RULE:\tunary_expression \t->\t -- unary_expression\n");}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 336 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				(yyval.expr) = new expr_attr;
																				string tmp = curr_symbol_table -> gen_temp((yyvsp[0].expr)->addr->type);
																				init_value tmp_init;
																				(yyval.expr)->name = tmp;							

																				switch((yyvsp[-1].char_val))
																				{
																					case '&': 
																					{
																						(yyval.expr)->addr = curr_symbol_table->update(tmp, PTR_, tmp_init, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																						Q_arr ->emit(tmp, (yyvsp[0].expr)->name,OP_REFERENCE);
																						break;
																					}
																					case '*': 
																					{
																						(yyval.expr)->addr = curr_symbol_table->update(tmp, UNKNOWN_, tmp_init, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																						Q_arr ->emit(tmp, (yyvsp[0].expr)->name,OP_DEREFERENCE);
																						break;
																					}
																					case '-': 
																					{
																						(yyval.expr)->addr = curr_symbol_table->update(tmp, (yyvsp[0].expr)->addr-> type, tmp_init, 0, NULL); /*//  TO BE DONE set offset and initial val and size set size in update ac to type*/
																						Q_arr ->emit(tmp, (yyvsp[0].expr)->name,OP_UNARY_MINUS);
																						break;
																					}
																					default :
																					(yyval.expr) = (yyvsp[0].expr);


																				}
																			printf(" RULE:\tunary_expression \t->\t unary_operator cast_expression\n");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 371 "ass3_15CS10060.y" /* yacc.c:1646  */
    { (yyval.char_val) = '&';printf(" RULE:\tunary_operator \t->\t & \n");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 372 "ass3_15CS10060.y" /* yacc.c:1646  */
    { (yyval.char_val) = '*'; printf(" RULE:\tunary_operator \t->\t * \n");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 373 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.char_val) = '+';printf(" RULE:\tunary_operator \t->\t + \n");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 374 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.char_val) = '-'; printf(" RULE:\tunary_operator \t->\t - \n");}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 378 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																			(yyval.expr) = (yyvsp[0].expr);
																			printf(" RULE:\tcast_expression \t->\t unary_expression\n");}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 384 "ass3_15CS10060.y" /* yacc.c:1646  */
    {	

																/*to be done, doubt  what are cast expression for ?*/
																				(yyval.expr) = (yyvsp[0].expr);
																				printf(" RULE:\tmultiplicative_expression \t->\t cast_expression\n");}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 389 "ass3_15CS10060.y" /* yacc.c:1646  */
    {																															   (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name = curr_symbol_table->gen_temp(type);

												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_MULT);

													printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression * cast_expression\n");}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 475 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																				 (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name = curr_symbol_table->gen_temp(type);
												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_DIVIDE);


printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression / cast_expression\n");}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 580 "ass3_15CS10060.y" /* yacc.c:1646  */
    {

																				 (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;							   
												   
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name= curr_symbol_table->gen_temp(type);
												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_MODULO);


printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression %% cast_expression\n");}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 670 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);printf(" RULE:\tadditive_expression \t->\t multiplicative_expression\n");}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 672 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																			 (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name = (curr_symbol_table->gen_temp(type));
												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_PLUS);

printf(" RULE:\tadditive_expression \t->\t additive_expression + multiplicative_expression\n");}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 774 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																				printf(" RULE:\tadditive_expression \t->\t additive_expression - multiplicative_expression\n");

																				 (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;
												   		
												   		
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name = (curr_symbol_table->gen_temp(type));
												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_MINUS);
														}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 881 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr)= (yyvsp[0].expr);printf(" RULE:\tshift_expression \t->\t additive_expression\n");}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 882 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																					 (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name = (curr_symbol_table->gen_temp(type));
												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_SHIFT_LEFT);


																					//not supported
																					printf(" RULE:\tshift_expression \t->\t shift_expression << additive_expression\n");}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 986 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																					 (yyval.expr) = new expr_attr;
												        data_type type1, type2, type;
												        type1 = curr_symbol_table->lookup((yyvsp[-2].expr)->name)->type;
												        type2 = curr_symbol_table->lookup((yyvsp[0].expr)->name)->type;
												   
												   /* //array
												   if(type2.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type2);
												            Q_arr.emit(ARRAY_ACCESS, temp, $3->addr->name, *($3->inner));
												            $3->addr->name = temp;
												            $3->type.array_type = ""; //check
												        }
												        
												        if(type1.array_type.compare("array") == 0)
												        {
												            string temp = curr_sym->gentemp(type1);
												            Q_arr.emit(ARRAY_ACCESS, temp, $1->addr->name, *($1->inner));
												            $1->addr->name = temp;
												            $1->type.array_type = ""; //check
												        }
												        */
												        	//done
												        int flag = 0;
												        if(type1 == type2)
												        {
												            type = type1;
												            flag = 1;
												        }
												        if(type1 == DOUBLE_ && type2 == INT_)
												        {   
												            string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convI2D(e,(yyvsp[0].expr));
												            type = type1;
												        }
												        
												        else if(type1== INT_ && type2== DOUBLE_)
												        {   string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convI2D(e,(yyvsp[-2].expr));
												            type = type2;
												        }
												        if(type1== DOUBLE_ && type2==CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2D(e,(yyvsp[0].expr));
												            type = type1;

												         
												            
												        }
												        if(type1== CHAR_ && type2 == DOUBLE_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type2;
												            Q_arr->convC2D(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1 == CHAR_ && type2 == INT_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type2);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[-2].expr));
												            type = type2;
												            
												        }
												        if(type1== INT_ && type2== CHAR_)
												        {   
												        	string t = curr_symbol_table->gen_temp(type1);
												            symbol_table_entry *s = curr_symbol_table->lookup(t);
												            expr_attr *e = new expr_attr;
												            e->addr = curr_symbol_table->lookup(t);
												            e->addr-> type = type1;
												            Q_arr->convC2I(e,(yyvsp[0].expr));
												            type = type1;

												            
												        }
												        
												        (yyval.expr)->name = (curr_symbol_table->gen_temp(type));
												        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_SHIFT_RIGHT);

																				printf(" RULE:\tshift_expression \t->\t shift_expression >> additive_expression\n");}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1091 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) =(yyvsp[0].expr);

																				printf(" RULE:\trelational_expression \t->\t shift_expression\n");}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1094 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done

																				(yyval.expr) = new expr_attr;
																				(yyval.expr) -> name = curr_symbol_table->gen_temp( curr_symbol_table->lookup((yyval.expr)->name)-> type);
																		        (yyval.expr)->addr = curr_symbol_table->lookup((yyval.expr)->name);
																		        (yyval.expr)->addr->type = BOOL_;
																		        (yyval.expr)->truelist = makelist(Q_arr->index);
																		        (yyval.expr)->falselist = makelist(Q_arr->index + 1); // check
																		        Q_arr -> emit("", (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_IF_LESS);
																		        Q_arr-> emit("","","", OP_GOTO);

																			printf(" RULE:\trelational_expression \t->\t relational_expression < shift_expression\n");}
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1106 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done

																				(yyval.expr) = new expr_attr;
																				(yyval.expr) -> name = curr_symbol_table->gen_temp( curr_symbol_table->lookup((yyval.expr)->name)-> type);
																		        (yyval.expr)->addr = curr_symbol_table->lookup((yyval.expr)->name);
																		        (yyval.expr)->addr->type = BOOL_;
																		        (yyval.expr)->truelist = makelist(Q_arr->index);
																		        (yyval.expr)->falselist = makelist(Q_arr->index + 1); // check
																		        Q_arr -> emit("", (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_IF_GREATER);
																		        Q_arr-> emit("","","", OP_GOTO);


																		        printf(" RULE:\trelational_expression \t->\t relational_expression > shift_expression\n");}
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1119 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done

																				(yyval.expr) = new expr_attr;
																				(yyval.expr) -> name = curr_symbol_table->gen_temp( curr_symbol_table->lookup((yyval.expr)->name)-> type);
																		        (yyval.expr)->addr = curr_symbol_table->lookup((yyval.expr)->name);
																		        (yyval.expr)->addr->type = BOOL_;
																		        (yyval.expr)->truelist = makelist(Q_arr->index);
																		        (yyval.expr)->falselist = makelist(Q_arr->index + 1); // check
																		        Q_arr -> emit("", (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_IF_LESS_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);

																				
																		        printf(" RULE:\trelational_expression \t->\t relational_expression <= shift_expression\n");}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1132 "ass3_15CS10060.y" /* yacc.c:1646  */
    {	//done

																				(yyval.expr) = new expr_attr;
																				(yyval.expr) -> name = curr_symbol_table->gen_temp( curr_symbol_table->lookup((yyval.expr)->name)-> type);
																		        (yyval.expr)->addr = curr_symbol_table->lookup((yyval.expr)->name);
																		        (yyval.expr)->addr->type = BOOL_;
																		        (yyval.expr)->truelist = makelist(Q_arr->index);
																		        (yyval.expr)->falselist = makelist(Q_arr->index + 1); // check
																		        Q_arr -> emit("", (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_IF_GREATER_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);

																				printf(" RULE:\trelational_expression \t->\t relational_expression >= shift_expression\n");}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1147 "ass3_15CS10060.y" /* yacc.c:1646  */
    {	(yyval.expr)=(yyvsp[0].expr);printf(" RULE:\tequality_expression \t->\t relational_expression\n");}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1148 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				(yyval.expr) = new expr_attr;
																				(yyval.expr) -> name = curr_symbol_table->gen_temp( curr_symbol_table->lookup((yyval.expr)->name)-> type);
																		        (yyval.expr)->addr = curr_symbol_table->lookup((yyval.expr)->name);
																		        (yyval.expr)->addr->type = BOOL_;
																		        (yyval.expr)->truelist = makelist(Q_arr->index);
																		        (yyval.expr)->falselist = makelist(Q_arr->index + 1); // check
																		        Q_arr -> emit("", (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_IF_IS_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);


																		       	printf(" RULE:\tequality_expression \t->\t equality_expression == relational_expression\n");}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1161 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				(yyval.expr) = new expr_attr;
																				(yyval.expr) -> name = curr_symbol_table->gen_temp( curr_symbol_table->lookup((yyval.expr)->name)-> type);
																		        (yyval.expr)->addr = curr_symbol_table->lookup((yyval.expr)->name);
																		        (yyval.expr)->addr->type = BOOL_;
																		        (yyval.expr)->truelist = makelist(Q_arr->index);
																		        (yyval.expr)->falselist = makelist(Q_arr->index + 1); // check
																		        Q_arr -> emit("", (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_IF_NOT_EQUAL);
																		        Q_arr-> emit("","","", OP_GOTO);


																		        printf(" RULE:\tequality_expression \t->\t equality_expression != relational_expression\n");}
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1176 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);

        																		printf(" RULE:\tand_expression \t->\t equality_expression\n");}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1179 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																					/*
																					*/																					/*
																		       /*
																		        if(type2.array_type.compare("array") == 0)
																		        {
																		            string temp = curr_sym->gentemp(type2);
																		            Q_arr.emit(ARRAY_ACCESS, temp, $3->loc, *($3->inner));
																		            $3->loc = temp;
																		            $3->type.array_type = ""; //check
																		        }
																		        
																		        if(type1.array_type.compare("array") == 0)
																		        {
																		            string temp = curr_sym->gentemp(type1);
																		            Q_arr.emit(ARRAY_ACCESS, temp, $1->loc, *($1->inner));
																		            $1->loc = temp;
																		            $1->type.array_type = ""; //check
																		        }
																		        */

																		        
																		        (yyval.expr) = new expr_attr;
																		        symbol_table_entry *f = curr_symbol_table->lookup((yyvsp[-2].expr)->name);//check
																		        data_type t;
																		        t = f->type;
																		        (yyval.expr)->addr = curr_symbol_table->lookup( curr_symbol_table->gen_temp(t));
																		        (yyval.expr)->name =  (yyval.expr)->addr->name;
																		        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_LOGICAL_AND);printf(" RULE:\tand_expression \t->\t and_expression & equality_expression\n");
																		        

																		        }
#line 2999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1214 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) =(yyvsp[0].expr);printf(" RULE:\texclusive_or_expression \t->\t and_expression\n");}
#line 3005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1215 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																				
(yyval.expr) = new expr_attr;
																		        symbol_table_entry *f = curr_symbol_table->lookup((yyvsp[-2].expr)->name);//check
																		        data_type t;
																		        t = f->type;
																		        (yyval.expr)->addr = curr_symbol_table->lookup( curr_symbol_table->gen_temp(t));
																		        (yyval.expr)->name =  (yyval.expr)->addr->name;

																		        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_XOR);
																		        

																		        printf(" RULE:\texclusive_or_expression \t->\t exclusive_or_expression ^ and_expression\n");
																		       }
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1232 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);printf(" RULE:\tinclusive_or_expression \t->\t exclusive_or_expression\n");}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1233 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
(yyval.expr) = new expr_attr;
																		        symbol_table_entry *f = curr_symbol_table->lookup((yyvsp[-2].expr)->name);//check
																		        data_type t;
																		        t = f->type;
																		        (yyval.expr)->addr = curr_symbol_table->lookup( curr_symbol_table->gen_temp(t));
																		        (yyval.expr)->name =  (yyval.expr)->addr->name;

																		        Q_arr->emit((yyval.expr)->name, (yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_OR);

																		        printf(" RULE:\tinclusive_or_expression \t->\t inclusive_or | exclusive_or_expression\n");}
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1247 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) =(yyvsp[0].expr);printf(" RULE:\tlogical_and_expression \t->\t inclusive_or_expression\n");}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1248 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//DONE
																					data_type type;
																			        type = BOOL_;
																			        (yyval.expr) = new expr_attr;
																			        (yyval.expr)->addr = curr_symbol_table -> lookup( curr_symbol_table->gen_temp(type));
																			        //check
																			         Q_arr->backpatch((yyvsp[-4].expr)->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool((yyvsp[-5].expr));

																			        Q_arr->backpatch((yyvsp[0].expr)->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool((yyvsp[-1].expr));
																			        Q_arr-> emit((yyval.expr)->addr->name, (yyval.expr)->addr->name, (yyval.expr)->addr->name, OP_LOGICAL_AND);
																					Q_arr->backpatch((yyvsp[-5].expr)->falselist, (yyvsp[-2].expr)->instr);
																			        (yyval.expr)->truelist = merge((yyvsp[-5].expr)->truelist, (yyvsp[-1].expr)->truelist);
																			        (yyval.expr)->falselist = (yyvsp[-1].expr)->falselist;

printf(" RULE:\tlogical_and_expression \t->\t logical_and_expression && inclusive_or_expression\n");
																			}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1269 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) =(yyvsp[0].expr);printf(" RULE:\tlogical_or_expression \t->\t logical_and_expression\n");}
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1270 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																						data_type type;
																			        type = BOOL_;
																			        (yyval.expr) = new expr_attr;
																			        (yyval.expr)->addr = curr_symbol_table -> lookup( curr_symbol_table->gen_temp(type));
																			        (yyval.expr)->name = (yyval.expr)->addr->name;
																			        //check
																			         Q_arr->backpatch((yyvsp[-4].expr)->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool((yyvsp[-5].expr));

																			        Q_arr->backpatch((yyvsp[0].expr)->nextlist, Q_arr->index);
																			        Q_arr->convInt2Bool((yyvsp[-1].expr));
																			        Q_arr-> emit((yyval.expr)->addr->name, (yyval.expr)->addr->name, (yyval.expr)->addr->name, OP_LOGICAL_OR);
																					Q_arr->backpatch((yyvsp[-5].expr)->falselist, (yyvsp[-2].expr)->instr);
																			        (yyval.expr)->truelist = merge((yyvsp[-5].expr)->truelist, (yyvsp[-1].expr)->truelist);
																			        (yyval.expr)->falselist = (yyvsp[-1].expr)->falselist;

        printf(" RULE:\tlogical_or_expression \t->\t logical_or_expression || logical_and_expression\n");}
#line 3104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1291 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);printf(" RULE:\tconditional_expression \t->\t logical_or_expression\n");}
#line 3110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1292 "ass3_15CS10060.y" /* yacc.c:1646  */
    {

																		        (yyval.expr) = new expr_attr;
																		        list<int> I;
																		        data_type type;
																		        type = (yyvsp[-4].expr)->addr->type;
																		        (yyval.expr)->name = (curr_symbol_table->gen_temp(type));
																		        Q_arr->emit((yyval.expr)->addr->name, (yyvsp[0].expr)->addr->name,"", OP_COPY);
																		        I = makelist(Q_arr->index);
																		        Q_arr->emit("","","",OP_GOTO);
																		        Q_arr->backpatch((yyvsp[-3].expr)->nextlist, Q_arr->index);
																		        Q_arr->emit( (yyval.expr)->name, (yyvsp[-4].expr)->name, "", OP_COPY);
																		        I = merge(I, makelist(Q_arr->index));
																		        Q_arr->emit("", "", "", OP_GOTO);
																		        Q_arr -> backpatch((yyvsp[-7].expr)->nextlist, Q_arr -> index);
																		        Q_arr -> convInt2Bool((yyvsp[-8].expr));
																		        Q_arr -> backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].expr)->instr);
																		        Q_arr -> backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].expr)->instr);
																		        Q_arr -> backpatch(I, Q_arr -> index);

        printf(" RULE:\tconditional_expression \t->\t logical_or_expression ? expression : conditional_expression\n");}
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1316 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);printf(" RULE:\tassignment_expression \t->\t conditional_expression\n");}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1317 "ass3_15CS10060.y" /* yacc.c:1646  */
    {

																        Q_arr->emit((yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, "", OP_COPY);
																        (yyval.expr) = (yyvsp[-2].expr);


        printf(" RULE:\tassignment_expression \t->\t unary_expression assignment_operator assignment_expression\n");}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1327 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t = \n");}
#line 3160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1328 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t *= \n");}
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1329 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t /= \n");}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1330 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t %%= \n");}
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1331 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t += \n");}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1332 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t -= \n");}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1333 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t <<= \n");}
#line 3196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1334 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t >>= \n");}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1335 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t &=  \n");}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1336 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t ^= \n");}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1337 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t |=  \n");}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1341 "ass3_15CS10060.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);

		printf(" RULE:\texpression \t->\t assignment_expression\n");}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1344 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[-2].expr);printf(" RULE:\texpression \t->\t expression, assignment_expression\n");}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1348 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);printf(" RULE:\tconstant_expression \t->\t conditional_expression\n");}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1352 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																					// not supported
																					// consider only 1 declaration specifier
																					// TO BE DONE PERHAPS FOR function
																				printf(" RULE:\tdeclaration \t->\t declaration_specifiers ;\n");}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1357 "ass3_15CS10060.y" /* yacc.c:1646  */
    {         															
																	              	//done
																	              	(yyval.dec_list) = (yyvsp[-1].dec_list);
																	              	vector<expr_attr>::iterator it;
																	              	symbol_table_entry *ptr;
																	              	
																	              	for(it = ((yyvsp[-1].dec_list)->vec).begin() ; it != ((yyvsp[-1].dec_list)->vec).end(); ++it )
																	              	{
																	              		ptr = curr_symbol_table->lookup(it->name);


																						if (it->isPointer == true)
																						{
																							ptr->type = PTR_;
																							ptr->offset = curr_symbol_table -> offset;
																							curr_symbol_table -> offset += size_of_type((yyvsp[-2].declara).type);
																						}
																						else if (ptr->type == UNKNOWN_)
																						{
																							ptr->type = (yyvsp[-2].declara).type;
																							ptr->offset = curr_symbol_table -> offset;
																							curr_symbol_table -> offset += size_of_type((yyvsp[-2].declara).type);
																						}

																						
																	              	}
																	              	delete (yyvsp[-1].dec_list);
																					printf(" RULE:\tdeclaration \t->\t declaration_specifiers init_declarator_list ; \n");
																			}
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1389 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				(yyval.declara) = (yyvsp[-1].declara);

																				printf(" RULE:\tdeclaration_specifiers \t->\t type_specifiers declaration_specifiers_opt\n");}
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1396 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_specifiers_opt \t->\t empty\n");}
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1397 "ass3_15CS10060.y" /* yacc.c:1646  */
    {// not supported
																				printf(" RULE:\tdeclaration_specifiers_opt \t->\t declaration_specifiers\n");}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1401 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
		int i;

		
		 
																				(yyval.dec_list) = new declar_list;
																				((yyval.dec_list)->vec).push_back(*((yyvsp[0].expr)));
cout <<"0th elem is " <<((yyval.dec_list)->vec).begin()->addr	<<endl;
																				//cout <<"Pushing "<<($$->vec)[($$->vec).size()-1].addr->name<<endl<<endl<<endl;

																				printf(" RULE:\tinit_declarator_list \t->\t init_declarator\n");}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1412 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
		//print symbol table
		int i;
		
																				//cout <<"$1 = "<<$1 <<endl;cout <<"0th elem is " <<($1->vec).begin()->addr	<<endl;

																					(yyval.dec_list) = (yyvsp[-2].dec_list);
																					//cout <<"0th elem is " <<($1->vec).begin()->addr	<<endl;
																					//cout <<"$$ = "<<$$<<endl;
																					((yyval.dec_list)->vec).push_back(*((yyvsp[0].expr)));
      																			  //cout <<"Pushing "<<($$->vec)[($$->vec).size()-1].addr->name<<endl<<endl<<endl;

																	              	
																	              	
																	              	



																				  

																				printf(" RULE:\tinit_declarator_list \t->\t init_declarator_list, init_declarator\n");}
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1436 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				(yyval.expr) = (yyvsp[0].expr);
																				//cout <<"here loc ="<<$$<<endl;
																				printf(" RULE:\tinit_declarator \t->\t declarator\n");}
#line 3357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1440 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																				 (yyval.expr) = (yyvsp[-2].expr);
																				// to be done typecheck														
																				Q_arr->emit((yyvsp[-2].expr)->name, (yyvsp[0].expr)->name, OP_COPY);
																				(yyvsp[-2].expr)-> addr -> initial_value = (yyvsp[-2].expr) -> addr -> initial_value;
																				printf(" RULE:\tinit_declarator \t->\t declarator = initializer\n");

																				}
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1451 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
											//done
											(yyval.declara).type = VOID_;
											(yyval.declara).width = SIZE_OF_VOID;
											printf(" RULE:\ttype_specifiers \t->\t  VOID\n");
										}
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1457 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
											(yyval.declara).type = CHAR_;
											(yyval.declara).width = SIZE_OF_CHAR;
										printf(" RULE:\ttype_specifiers \t->\t CHAR \n");}
#line 3390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1461 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t SHORT \n");}
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1462 "ass3_15CS10060.y" /* yacc.c:1646  */
    { (yyval.declara).type = INT_; (yyval.declara).width = SIZE_OF_INT; printf(" RULE:\ttype_specifiers \t->\t INT \n");}
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1463 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t LONG \n");}
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1464 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t FLOAT \n");}
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1465 "ass3_15CS10060.y" /* yacc.c:1646  */
    { (yyval.declara).type = DOUBLE_; (yyval.declara).width = SIZE_OF_DOUBLE;  printf(" RULE:\ttype_specifiers \t->\t DOUBLE \n");}
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1466 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.declara).type = MATRIX_;/*to be done*/ (yyval.declara).type = MATRIX_;   printf(" RULE:\ttype_specifiers \t->\t MATRIX \n");}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1467 "ass3_15CS10060.y" /* yacc.c:1646  */
    { printf(" RULE:\ttype_specifiers \t->\t SIGNED  \n");}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1468 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t UNSIGNED \n");}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1469 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.declara).type = BOOL_; (yyval.declara).width = SIZE_OF_BOOL; printf(" RULE:\ttype_specifiers \t->\t BOOL  \n");}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1473 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done
																		(yyval.expr) = (yyvsp[0].expr);
																		//cout <<"here loc ="<<$$<<endl;
																			 printf(" RULE:\tdeclarator \t->\t direct_declarator\n");}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1477 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done	
																			(yyval.expr) = (yyvsp[0].expr);
																			(yyval.expr) -> isPointer =true;

																			printf(" RULE:\tdeclarator \t->\t pointer_opt direct_declarator\n");
																		}
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1486 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//done

																	
																	(yyval.expr) = new expr_attr;
																	//$$ ->addr = curr_symbol_table->lookup((*$1));
																	(yyval.expr)->name = (*(yyvsp[0].str_val));
																	//cout <<$$->addr->name<<endl;
																	//cout << type_string( $$ -> addr -> type)<<endl;
																	//cout <<"here loc ="<<$$<<endl;
																	printf(" RULE:\tdirect_declarator \t->\t identifier\n");}
#line 3479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1496 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t (declarator)");}
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1497 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t direct_declarator[]");}
#line 3491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1498 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																	// to be done for matrix
																	printf(" RULE:\tdirect_declarator \t->\t direct_declarator[assignment_expression]\n");}
#line 3499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1501 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																symbol_table_entry *tmp;
																vector<func_param> l = (yyvsp[-1].f_param_list)->vec;
														        
														        symbol_table *new_sym = new symbol_table;
														        new_sym -> name = string("Table for ")+(yyvsp[-3].expr)->name;
														        (yyval.expr) = (yyvsp[-3].expr);
														        cout <<endl<<endl<<(yyval.expr)->name <<endl<<endl<<endl;
														        GT->lookup((yyval.expr)->name)->type = FUNCTION_;
														        (yyval.expr)->no_of_params = l.size();
														        GT->lookup((yyval.expr)->name)-> nested_table = new_sym;
														        curr_symbol_table = new_sym;

														        vector<func_param>::iterator it;
														        for(it = l.begin(); it != l.end(); it++)
														        {
														            tmp = new_sym -> lookup(it->name);
														            tmp -> type = it->type;
														          }

														        Q_arr -> emit((yyvsp[-3].expr)->name, "","",_FUNCTION_START);

																// to be done for function
																	printf(" RULE:\tdirect_declarator \t->\t direct_declarator(parameter_type_list)\n");
																}
#line 3529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1527 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																        symbol_table *new_sym = new symbol_table;
																        (yyval.expr) = (yyvsp[-2].expr);
																        cout <<endl<<endl<<(yyval.expr)->name <<endl<<endl<<endl;
																        GT->lookup((yyval.expr)->name)->type = FUNCTION_;
																        (yyval.expr)->no_of_params = 0;
																        GT->lookup((yyval.expr)->name)-> nested_table = new_sym;
																        curr_symbol_table = new_sym;
																        Q_arr -> emit((yyvsp[-2].expr)->name, "","",_FUNCTION_START);
																		// to be done for function
																		printf(" RULE:\tdirect_declarator \t->\t direct_declarator()\n");}
#line 3545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1538 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																	// to be done for function
																	printf(" RULE:\tdirect_declarator \t->\t direct_declarator(identifier_list)\n");}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1544 "ass3_15CS10060.y" /* yacc.c:1646  */
    {
																				// to be done - pointer
																				printf(" RULE:\tpointer \t->\t *\n");}
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1547 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpointer \t->\t * pointer\n");}
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1551 "ass3_15CS10060.y" /* yacc.c:1646  */
    {// done
																		(yyval.f_param_list) = (yyvsp[0].f_param_list);
																		printf(" RULE:\tparameter_type_list \t->\t parameter_list\n");
																	}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1558 "ass3_15CS10060.y" /* yacc.c:1646  */
    {// done;
																		(yyval.f_param_list) = new func_param_list;
																		(yyval.f_param_list)->vec.push_back(*((yyvsp[0].f_par)));


																		printf(" RULE:\tparameter_list \t->\t parameter_declaration\n");}
#line 3587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1564 "ass3_15CS10060.y" /* yacc.c:1646  */
    {/*done*/
																		(yyval.f_param_list) = (yyvsp[-2].f_param_list);
																		((yyval.f_param_list) -> vec).push_back(*((yyvsp[0].f_par)));
																		printf(" RULE:\tparameter_list \t->\t parameter_list, parameter_declaration\n");}
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1571 "ass3_15CS10060.y" /* yacc.c:1646  */
    {/*done*/
																		//GT->lookup($2->name)->type = $1.type;

																		(yyval.f_par) = new func_param;
																		(yyval.f_par) -> name = (yyvsp[0].expr)->name;
																		(yyval.f_par) ->type = (yyvsp[-1].declara).type;
																		printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers declarator\n");}
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1578 "ass3_15CS10060.y" /* yacc.c:1646  */
    {/*done*/
																		(yyval.f_par) = new func_param;
																		(yyval.f_par) -> name = "";
																		(yyval.f_par) ->type = (yyvsp[0].declara).type;
																		printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers\n");
																	}
#line 3619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1587 "ass3_15CS10060.y" /* yacc.c:1646  */
    {/*to be done*/printf(" RULE:\tidentifier_list \t->\t identifier\n");}
#line 3625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1588 "ass3_15CS10060.y" /* yacc.c:1646  */
    {/*to be done*/printf(" RULE:\tidentifier_list \t->\t identifier_list, identifier\n");}
#line 3631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1592 "ass3_15CS10060.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); printf(" RULE:\tinitializer \t->\t assignment_expression \n");}
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1593 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer \t->\t { initializer_row_list } \n");}
#line 3643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1597 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row_list \t->\t initializer_row\n");}
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1598 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row_list \t->\t initializer_row_list ; initializer_row \n");}
#line 3655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1602 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t initializer\n");}
#line 3661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1603 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t designation initializer\n");}
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1604 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t initializer_row, initializer\n");}
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1605 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t initializer_row, designation initializer\n");}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1609 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignation \t->\t designator_list = \n");}
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1613 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator_list \t->\t designator\n");}
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1614 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator_list \t->\t designator_list designator\n");}
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1618 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator \t->\t [ constant_expression ] \n");}
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1619 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator \t->\t .identifier\n");}
#line 3709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1623 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t labeled_statement\n");}
#line 3715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1624 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t compound_statement\n");}
#line 3721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1625 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t expression_statement\n");}
#line 3727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1626 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t selection_statement\n");}
#line 3733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1627 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t iteration_statement\n");}
#line 3739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1628 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t jump_statement\n");}
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1632 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlabeled_statement \t->\t identifier : statement\n");}
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1633 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlabeled_statement \t->\t case constant_expression : statement\n");}
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1634 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlabeled_statement \t->\t default : statement\n");}
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1638 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tcompound_statement \t->\t {}\n");}
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1639 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tcompound_statement \t->\t { block_item_list } \n");}
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1643 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item_list \t->\t block_item\n");}
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1644 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item_list \t->\t block_item_list block_item\n");}
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1648 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item \t->\t declaration\n");}
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1649 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item \t->\t statement\n");}
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1653 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texpression_statement \t->\t ;");}
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1654 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texpression_statement \t->\t expression;");}
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1657 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tselection_statement \t->\t if(expression) statement\n");}
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1658 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tselection_statement \t->\t if(expression) statement else statement\n");}
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1659 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tselection_statement \t->\t switch(expression) statement\n");}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1663 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t while(expression) statement\n");}
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1664 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t do statement while (expression)\n");}
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1665 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;expression;expression)\n");}
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1666 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;expression;expression)\n");}
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1667 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;;expression)\n");}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1668 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;expression;)\n");}
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1669 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;;expression)\n");}
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1670 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;;)\n");}
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1671 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;expression;)\n");}
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1672 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;;)\n");}
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1673 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration expression; expression)\n");}
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1674 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration;expression)\n");}
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1675 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration expression;)\n");}
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1676 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration ; )\n");}
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1679 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t goto identifier;\n");}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1680 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t continue;\n");}
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1681 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t break;\n");}
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1682 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t return;\n");}
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1683 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t return expression;\n");}
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1687 "ass3_15CS10060.y" /* yacc.c:1646  */
    {GT->name = string("Global Table");printf(" RULE:\ttranslation_unit \t->\t external_decalaration\n");}
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1688 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttranslation_unit \t->\t translation_unit external_decalaration\n");}
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1692 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texternal_decalaration \t->\t function_definition\n");}
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1693 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texternal_decalaration \t->\t declaration\n");}
#line 3967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1697 "ass3_15CS10060.y" /* yacc.c:1646  */
    {//incomplete
																	        symbol_table_entry *ret;
																	        
																	        expr_attr *new_dec = (yyvsp[-1].expr);
																	        data_type type = (yyvsp[-2].declara).type;

																	        Q_arr -> emit( (yyvsp[-1].expr)->name ,"","", _FUNCTION_END);
																	        symbol_table_entry *func = GT->lookup((yyvsp[-1].expr)->name);

																	        if(func->nested_table != NULL)
																	        {
																	            if(func -> type == PTR_)
																	            {
																	            	type = PTR_;
																	            }
																	            ret = func->nested_table->lookup("retVal");
																	            ret->type = type;
																	            ret->offset = curr_symbol_table->offset;
																	            ret->size = size_of_type(type);
																	        }
																	        curr_symbol_table = GT;
																	        (yyval.expr) = (yyvsp[-1].expr);

      																		  printf(" RULE:\tfunction_definition \t->\t declaration_specifiers declarator compound_statement\n");
      																		}
#line 3997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1722 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tfunction_definition \t->\t declaration_specifiers declarator declaration_list compound_statement\n");}
#line 4003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1726 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_list \t->\t declaration\n");}
#line 4009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1727 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_list \t->\t declaration_list declaration\n");}
#line 4015 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4019 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1730 "ass3_15CS10060.y" /* yacc.c:1906  */

void yyerror(const char* s)
{
	cout << s<<endl;
}
