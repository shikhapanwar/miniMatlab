/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass6_14CS10054.y" /* yacc.c:339  */
 /* C Declarations and Definitions */
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
extern int yylex();
void yyerror(string s);
//extern int yydebug;
extern int yyparse();


#include "ass6_14CS10054_translator.h"
//#include "myl.h"

Quad_Array Q_arr;
symboltable GT;
symboltable *sym = &GT;
symboltable *curr_sym = &GT;
type_inf *global_type;
int global_width;
vector<string> string_lits;
int literal_count = 0;

#line 90 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KEYWORD_restrict = 258,
    KEYWORD_unsigned = 259,
    KEYWORD_auto = 260,
    KEYWORD_enum = 261,
    KEYWORD_break = 262,
    KEYWORD_extern = 263,
    KEYWORD_return = 264,
    KEYWORD_void = 265,
    KEYWORD_case = 266,
    KEYWORD_float = 267,
    KEYWORD_short = 268,
    KEYWORD_volatile = 269,
    KEYWORD_char = 270,
    KEYWORD_for = 271,
    KEYWORD_signed = 272,
    KEYWORD_while = 273,
    KEYWORD_const = 274,
    KEYWORD_goto = 275,
    KEYWORD_sizeof = 276,
    KEYWORD_bool = 277,
    KEYWORD_continue = 278,
    KEYWORD_if = 279,
    KEYWORD_static = 280,
    KEYWORD_complex = 281,
    KEYWORD_default = 282,
    KEYWORD_inline = 283,
    KEYWORD_struct = 284,
    KEYWORD_imaginary = 285,
    KEYWORD_do = 286,
    KEYWORD_int = 287,
    KEYWORD_switch = 288,
    KEYWORD_double = 289,
    KEYWORD_long = 290,
    KEYWORD_typedef = 291,
    KEYWORD_else = 292,
    KEYWORD_register = 293,
    KEYWORD_union = 294,
    IDENTIFIER = 295,
    INT_CONSTANT = 296,
    FLOAT_CONSTANT = 297,
    CHAR_CONSTANT = 298,
    STRING_LITERAL = 299,
    POINTER_OP = 300,
    INCREMENT_OP = 301,
    DECREMENT_OP = 302,
    LEFT_SHIFT = 303,
    RIGHT_SHIFT = 304,
    LESS_EQ_OP = 305,
    GREATER_EQ_OP = 306,
    EQ_OP = 307,
    NOT_EQ_OP = 308,
    AND_OP = 309,
    OR_OP = 310,
    ELLIPSIS = 311,
    MUL_ASSIGNMENT = 312,
    DIV_ASSIGNMENT = 313,
    MOD_ASSIGNMENT = 314,
    ADD_ASSIGNMENT = 315,
    SUB_ASSIGNMENT = 316,
    LEFT_ASSIGNMENT = 317,
    RIGHT_ASSIGNMENT = 318,
    AND_ASSIGNMENT = 319,
    XOR_ASSIGNMENT = 320,
    OR_ASSIGNMENT = 321
  };
#endif
/* Tokens.  */
#define KEYWORD_restrict 258
#define KEYWORD_unsigned 259
#define KEYWORD_auto 260
#define KEYWORD_enum 261
#define KEYWORD_break 262
#define KEYWORD_extern 263
#define KEYWORD_return 264
#define KEYWORD_void 265
#define KEYWORD_case 266
#define KEYWORD_float 267
#define KEYWORD_short 268
#define KEYWORD_volatile 269
#define KEYWORD_char 270
#define KEYWORD_for 271
#define KEYWORD_signed 272
#define KEYWORD_while 273
#define KEYWORD_const 274
#define KEYWORD_goto 275
#define KEYWORD_sizeof 276
#define KEYWORD_bool 277
#define KEYWORD_continue 278
#define KEYWORD_if 279
#define KEYWORD_static 280
#define KEYWORD_complex 281
#define KEYWORD_default 282
#define KEYWORD_inline 283
#define KEYWORD_struct 284
#define KEYWORD_imaginary 285
#define KEYWORD_do 286
#define KEYWORD_int 287
#define KEYWORD_switch 288
#define KEYWORD_double 289
#define KEYWORD_long 290
#define KEYWORD_typedef 291
#define KEYWORD_else 292
#define KEYWORD_register 293
#define KEYWORD_union 294
#define IDENTIFIER 295
#define INT_CONSTANT 296
#define FLOAT_CONSTANT 297
#define CHAR_CONSTANT 298
#define STRING_LITERAL 299
#define POINTER_OP 300
#define INCREMENT_OP 301
#define DECREMENT_OP 302
#define LEFT_SHIFT 303
#define RIGHT_SHIFT 304
#define LESS_EQ_OP 305
#define GREATER_EQ_OP 306
#define EQ_OP 307
#define NOT_EQ_OP 308
#define AND_OP 309
#define OR_OP 310
#define ELLIPSIS 311
#define MUL_ASSIGNMENT 312
#define DIV_ASSIGNMENT 313
#define MOD_ASSIGNMENT 314
#define ADD_ASSIGNMENT 315
#define SUB_ASSIGNMENT 316
#define LEFT_ASSIGNMENT 317
#define RIGHT_ASSIGNMENT 318
#define AND_ASSIGNMENT 319
#define XOR_ASSIGNMENT 320
#define OR_ASSIGNMENT 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "ass6_14CS10054.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char charval;
  string *str;
  exp_attr *expr_attr;
  declaration *decclist;
  init_dec_list *init_dec_list_;
  type_inf *type_;
  func_def *func_def_;
  func_list *func_list_;

#line 275 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 290 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  370

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    82,    75,     2,
      67,    68,    76,    77,    74,    78,    71,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    90,
      83,    89,    84,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    86,    73,    79,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   167,   167,   175,   183,   193,   207,   220,   233,   243,
     249,   253,   273,   274,   290,   291,   292,   314,   334,   335,
     340,   349,   362,   363,   387,   411,   442,   443,   447,   451,
     455,   459,   463,   467,   474,   475,   479,   482,   578,   675,
     776,   777,   874,   974,   975,  1029,  1084,  1085,  1113,  1143,
    1172,  1204,  1205,  1234,  1267,  1268,  1300,  1303,  1334,  1337,
    1368,  1369,  1407,  1408,  1445,  1446,  1488,  1491,  1516,  1519,
    1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1530,
    1534,  1539,  1548,  1551,  1656,  1659,  1662,  1666,  1669,  1672,
    1675,  1678,  1685,  1689,  1698,  1703,  1710,  1710,  1710,  1710,
    1713,  1718,  1724,  1725,  1732,  1733,  1734,  1740,  1741,  1742,
    1743,  1744,  1745,  1749,  1753,  1755,  1756,  1759,  1760,  1761,
    1762,  1763,  1765,  1766,  1768,  1769,  1771,  1773,  1774,  1775,
    1778,  1780,  1786,  1797,  1802,  1807,  1836,  1840,  1844,  1848,
    1919,  1933,  1937,  1940,  1944,  1948,  1957,  1961,  1972,  1978,
    1982,  1988,  1990,  1995,  2001,  2007,  2015,  2025,  2047,  2054,
    2058,  2065,  2073,  2077,  2081,  2088,  2092,  2096,  2099,  2106,
    2113,  2117,  2123,  2127,  2137,  2141,  2145,  2149,  2153,  2157,
    2163,  2167,  2171,  2178,  2182,  2190,  2196,  2205,  2210,  2216,
    2221,  2228,  2244,  2261,  2267,  2281,  2290,  2307,  2313,  2317,
    2320,  2324,  2328,  2332,  2343,  2374,  2378,  2385,  2389,  2396,
    2400,  2455,  2459
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEYWORD_restrict", "KEYWORD_unsigned",
  "KEYWORD_auto", "KEYWORD_enum", "KEYWORD_break", "KEYWORD_extern",
  "KEYWORD_return", "KEYWORD_void", "KEYWORD_case", "KEYWORD_float",
  "KEYWORD_short", "KEYWORD_volatile", "KEYWORD_char", "KEYWORD_for",
  "KEYWORD_signed", "KEYWORD_while", "KEYWORD_const", "KEYWORD_goto",
  "KEYWORD_sizeof", "KEYWORD_bool", "KEYWORD_continue", "KEYWORD_if",
  "KEYWORD_static", "KEYWORD_complex", "KEYWORD_default", "KEYWORD_inline",
  "KEYWORD_struct", "KEYWORD_imaginary", "KEYWORD_do", "KEYWORD_int",
  "KEYWORD_switch", "KEYWORD_double", "KEYWORD_long", "KEYWORD_typedef",
  "KEYWORD_else", "KEYWORD_register", "KEYWORD_union", "IDENTIFIER",
  "INT_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT", "STRING_LITERAL",
  "POINTER_OP", "INCREMENT_OP", "DECREMENT_OP", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_EQ_OP", "GREATER_EQ_OP", "EQ_OP", "NOT_EQ_OP",
  "AND_OP", "OR_OP", "ELLIPSIS", "MUL_ASSIGNMENT", "DIV_ASSIGNMENT",
  "MOD_ASSIGNMENT", "ADD_ASSIGNMENT", "SUB_ASSIGNMENT", "LEFT_ASSIGNMENT",
  "RIGHT_ASSIGNMENT", "AND_ASSIGNMENT", "XOR_ASSIGNMENT", "OR_ASSIGNMENT",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "M", "N", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "enum_specifier",
  "enumerator_list", "enumerator", "enumeration_constant",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "assignment_expression_opt",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "translation_unit", "external_declaration",
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
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,   123,   125,    44,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    58,    61,
      59
};
# endif

#define YYPACT_NINF -284

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-284)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1222,  -284,  -284,  -284,    -4,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,    -6,  1222,  1222,  -284,  1222,  1222,  1148,
    -284,  -284,   -43,     7,  -284,    -5,    38,  -284,    -7,  -284,
     467,    57,    14,  -284,  -284,  -284,  -284,  -284,  -284,     7,
    -284,    74,  -284,     0,    34,  -284,  -284,    38,    -5,  -284,
     300,   854,  -284,    -6,  -284,   735,  1184,   140,    57,    78,
    -284,   -29,   930,  -284,  -284,  -284,  -284,    81,    84,   734,
     930,   110,  -284,   147,   974,    90,   123,   105,  -284,   154,
     135,  -284,  -284,  -284,  -284,   990,   990,   657,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,   155,   292,   930,
    -284,   -16,    86,   124,   -11,    27,   150,   146,   148,   178,
     -12,  -284,  -284,     2,  -284,  -284,  -284,  -284,   162,  -284,
    -284,  -284,  -284,  -284,  -284,   810,  -284,  -284,  -284,  -284,
    -284,    -5,   168,  -284,   163,  -284,    30,    45,  1034,   157,
    -284,   -24,  -284,  -284,  -284,  -284,  -284,  -284,  -284,    11,
     151,   579,   173,   156,   657,  -284,  -284,   930,   500,   500,
     930,   500,   657,  -284,  -284,    31,  1255,  -284,  1255,   176,
     201,  -284,  -284,   870,   930,   205,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,   930,  -284,   930,
     930,   930,   930,   930,   930,   930,   930,   930,   930,   930,
     930,   930,   930,   930,   930,   193,    -9,   930,  -284,  -284,
     388,   930,   208,  -284,   130,   854,    24,  -284,  -284,  -284,
    1112,  -284,   209,   930,    45,   183,  -284,   185,   930,  -284,
    -284,   500,   182,   930,   167,   930,  -284,   190,   182,  -284,
    -284,    48,  -284,   195,  -284,  -284,  -284,   914,  -284,  -284,
      87,  -284,    51,  -284,  -284,  -284,  -284,  -284,   -16,   -16,
      86,    86,   124,   124,   124,   124,   -11,   -11,    27,   150,
     146,  -284,  -284,  -284,  -284,  -284,   194,  -284,  -284,   750,
    -284,  -284,  -284,  -284,  -284,  -284,   199,  -284,  -284,   202,
    -284,   175,  -284,   182,   207,   206,   259,   500,   207,   810,
    -284,  -284,   930,  -284,   930,   930,   930,  -284,  -284,  -284,
     854,  -284,  -284,   930,   930,   212,  -284,   220,  -284,   136,
    -284,   148,  -284,   182,  -284,   221,  -284,  -284,   500,   930,
    -284,   794,  -284,   193,   200,   500,   203,   500,  -284,    88,
    -284,  -284,  -284,  -284,  -284,   253,   211,   930,   930,  -284,
    -284,  -284,  -284,   500,   224,  -284,  -284,  -284,   500,  -284
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   128,   108,    98,     0,    96,   100,   105,   102,   129,
     101,   107,   127,   109,    97,   110,   130,   111,   103,   106,
     104,    99,   208,     0,    84,    86,   112,    88,    90,     0,
     205,   207,   121,     0,   133,     0,   145,    82,     0,    92,
      94,   132,     0,    85,    87,    89,    91,     1,   206,     0,
     126,     0,   122,   124,     0,   149,   147,   146,     0,    83,
       0,     0,   211,     0,   210,     0,   152,   144,   131,     0,
     117,     0,     0,   134,   150,   148,    93,    94,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     2,     0,
       4,     5,     6,     7,     8,     0,     0,     0,   183,    28,
      29,    30,    31,    32,    33,   189,    10,    22,    34,     0,
      36,    40,    43,    46,    51,    54,    56,    58,    60,    62,
      64,    66,    79,     0,   187,   188,   174,   175,     2,   185,
     176,   177,   178,   179,     4,     0,   162,    95,   212,   209,
     159,   158,     0,   151,   153,   155,     0,   144,   142,   143,
     118,     0,   119,   123,    34,    81,   125,   202,   203,     0,
       0,   199,     0,     0,     0,    26,   201,     0,     0,     0,
       0,     0,     0,    23,    24,     0,   113,   161,   115,     0,
       0,    16,    17,     0,     0,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    68,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   190,   184,
       0,     0,     0,   165,     0,     0,     0,   170,   157,   139,
       0,   140,     0,     0,   143,    29,   141,     0,     0,   120,
     204,     0,   198,   199,     0,     0,   200,     0,     3,   182,
       2,     0,   180,     0,     9,   114,   116,     0,    15,    12,
       0,    20,     0,    14,    67,    37,    38,    39,    41,    42,
      44,    45,    49,    50,    47,    48,    52,    53,    55,    57,
      59,     2,     2,     2,    80,   186,     0,   173,   163,     0,
     166,   169,   171,   154,   156,   160,     0,   138,   135,     0,
     181,     0,     2,     3,    27,     0,     0,     0,     0,     0,
      35,    13,     0,    11,     0,     0,     0,   172,   164,   167,
       0,   136,   137,   199,   199,     0,     2,     0,   193,     0,
      21,     3,     3,     3,   168,     0,     3,     2,     0,     0,
      18,     0,    61,    63,     0,     0,     0,     0,     3,     0,
      19,     2,   197,     2,   194,   191,     0,     0,   199,     2,
     195,    65,     3,     0,     0,     3,     2,   192,     0,   196
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,   -75,   -65,  -284,  -284,  -284,   -72,  -284,   -89,     9,
      15,     8,    18,    83,    85,    82,    22,    33,  -284,   -71,
     -39,  -284,   -64,   -76,   -15,     3,  -284,   241,  -284,   -90,
      13,  -284,   280,   -61,  -284,    20,  -284,   -18,   295,  -284,
     192,     6,   -53,  -284,  -284,  -284,   115,  -284,   -57,   -59,
      50,  -283,  -284,   134,  -150,  -284,   -14,  -284,   141,  -284,
    -284,  -284,  -205,  -284,  -284,   333,  -284,  -284
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   162,   215,   106,   107,   260,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   197,   123,   156,    22,    63,    38,    39,    24,    25,
     177,    26,    51,    52,    53,    27,    28,    77,    41,   237,
     148,    42,    57,   142,   143,   144,   145,   146,   179,   223,
     224,   225,   226,   227,   125,   126,   127,   128,   129,   130,
     131,   132,   244,   133,    29,    30,    31,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     154,   155,   137,    23,   160,    40,   320,   176,   154,   155,
     153,    50,   165,   169,   149,   159,    50,    54,   249,   250,
     198,   252,   136,   173,   174,    62,    64,    43,    44,    49,
      45,    46,    23,   175,    34,    34,    32,   154,   301,   206,
     207,     1,    56,    -3,   152,   124,   282,    50,     1,   239,
     138,   139,     9,   220,    34,   216,    55,    12,   320,     9,
     199,    35,    35,    75,    12,   200,   201,    58,    33,   141,
      36,    36,   208,   209,   176,    -3,   217,    74,   283,   210,
     211,    35,   176,    59,    37,   217,   176,    55,   176,    72,
     153,   300,   218,   221,   234,   222,   136,   242,   231,   254,
     175,   240,    73,   248,   232,   217,   251,   247,   175,   236,
     265,   266,   267,   291,    36,   253,   307,   178,   335,   336,
     262,   313,   217,   228,    66,   217,    67,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,     1,   261,   286,   243,    70,    71,   154,
     155,   150,   151,   362,     9,   311,   356,   328,   264,    12,
       1,   312,   217,   202,   203,   147,   290,    55,   310,    74,
      61,     9,   204,   205,   157,   306,    12,   161,   284,   242,
     166,   303,   238,   305,   178,   154,   136,   163,   348,   255,
     167,   256,   178,   168,   296,   352,   178,   354,   178,   299,
     180,   181,   182,   288,   289,   124,   314,   315,   316,   340,
     341,   268,   269,   365,   272,   273,   274,   275,   369,   270,
     271,   170,   183,   171,   184,   212,   185,   324,   276,   277,
     319,   213,    -3,   141,   214,   219,   229,   230,   325,   241,
     245,   258,   154,   154,   257,   263,   246,   281,   287,   295,
     136,   338,   333,   297,    74,   298,   217,   302,   304,   242,
     242,   334,   347,   308,   317,   323,   342,   343,   344,   321,
     136,   346,   322,   330,   326,   349,   357,   327,   358,   309,
     337,   136,   319,   355,   363,   154,   361,   339,   351,   345,
     359,   368,   366,   353,   242,   278,   280,   364,   279,    76,
     367,   360,   136,     1,     2,     3,     4,    78,     5,    79,
       6,    80,     7,     8,     9,    10,    81,    11,    82,    12,
      83,    84,    13,    85,    86,    14,    15,    87,    16,    69,
      17,    88,    18,    89,    19,    20,   331,    68,    21,   233,
      90,    91,    92,    93,    94,   294,    95,    96,   332,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   329,
     292,   285,    48,     0,     0,     0,     0,    97,     0,     0,
       0,     0,    60,    98,     0,    99,   100,   101,   102,   103,
     104,   196,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     1,     2,     3,     4,    78,     5,    79,     6,    80,
       7,     8,     9,    10,    81,    11,    82,    12,    83,    84,
      13,    85,    86,    14,    15,    87,    16,     0,    17,    88,
      18,    89,    19,    20,     0,     0,    21,     0,    90,    91,
      92,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
      60,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       1,     2,     3,     4,     0,     5,     0,     6,   105,     7,
       8,     9,    10,     0,    11,     0,    12,     0,     0,    13,
       0,     0,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,     0,     0,    21,     0,    78,     0,    79,
       0,    80,     0,     0,     0,     0,    81,     0,    82,     0,
      83,    84,     0,    85,    86,     0,     0,    87,     0,     0,
       0,    88,     0,    89,     0,     0,     0,     0,     0,    60,
      90,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,    60,     0,     0,    99,   100,   101,   102,   103,
     104,     0,     1,     2,     3,     4,     0,     5,     0,     6,
     105,     7,     8,     9,    10,     0,    11,     0,    12,     0,
      84,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,     0,    21,     0,   134,
      91,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       1,     2,     0,     4,     0,     0,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,    84,    13,
       0,     0,     0,    15,     0,     0,     0,    17,     0,    18,
       0,    19,    20,     0,     0,     0,     0,   134,    91,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     1,     2,
       3,     4,     0,     5,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,    84,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,    84,     0,    21,   134,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,    97,     0,     0,     0,     0,     0,    60,     0,    99,
     100,   101,   102,   103,   104,    84,     0,    97,     0,   221,
       0,   222,   135,   318,   158,    99,   100,   101,   102,   103,
     104,    84,     0,     0,   134,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,    97,     0,   221,     0,   222,   135,   350,     0,    99,
     100,   101,   102,   103,   104,    84,     0,    97,     0,   221,
       0,   222,   135,     0,     0,    99,   100,   101,   102,   103,
     104,    84,     0,     0,   134,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,    97,     0,     0,     0,     0,   135,     0,     0,    99,
     100,   101,   102,   103,   104,    84,     0,    97,   259,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    84,     0,     0,   134,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,    97,     0,     0,     0,     0,   309,     0,     0,    99,
     100,   101,   102,   103,   104,    84,     0,    97,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    84,     0,     0,   134,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,    84,     0,   172,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,     0,     0,   134,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,    99,
     235,   101,   102,   103,   104,     1,     2,     3,     4,     0,
       5,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,    47,     0,
      21,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,   293,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       0,     0,    21,     0,   140,     1,     2,     3,     4,     0,
       5,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,     0,    13,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,     1,     2,
      21,     4,     0,     0,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,     0,     0,    13,     0,     0,
       0,    15,     0,     0,     0,    17,     0,    18,     0,    19,
      20
};

static const yytype_int16 yycheck[] =
{
      72,    72,    61,     0,    80,    23,   289,    97,    80,    80,
      71,    40,    84,    88,    67,    79,    40,    35,   168,   169,
     109,   171,    61,    95,    96,    40,    40,    24,    25,    72,
      27,    28,    29,    97,    40,    40,    40,   109,   243,    50,
      51,     3,    36,    55,    73,    60,    55,    40,     3,    73,
      65,    65,    14,   128,    40,   120,    36,    19,   341,    14,
      76,    67,    67,    57,    19,    81,    82,    74,    72,    66,
      76,    76,    83,    84,   164,    87,    74,    57,    87,    52,
      53,    67,   172,    90,    90,    74,   176,    67,   178,    89,
     151,   241,    90,    69,   147,    71,   135,   161,    68,    68,
     164,    90,    68,   167,    74,    74,   170,   164,   172,   148,
     199,   200,   201,    89,    76,   172,    68,    97,   323,   324,
     184,    70,    74,   141,    67,    74,    69,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,     3,   183,   221,   161,    73,    74,   221,
     221,    73,    74,   358,    14,    68,    68,   307,   197,    19,
       3,    74,    74,    77,    78,    25,   225,   147,   257,   149,
      89,    14,    48,    49,    90,   250,    19,    67,   217,   243,
      90,   245,    25,   248,   164,   257,   225,    40,   338,   176,
      67,   178,   172,    88,   233,   345,   176,   347,   178,   238,
      45,    46,    47,    73,    74,   220,   281,   282,   283,    73,
      74,   202,   203,   363,   206,   207,   208,   209,   368,   204,
     205,    67,    67,    88,    69,    75,    71,   302,   210,   211,
     289,    85,    54,   230,    86,    73,    68,    74,   303,    88,
      67,    40,   314,   315,    68,    40,    90,    54,    40,    40,
     289,   326,   316,    70,   234,    70,    74,    90,    68,   323,
     324,   320,   337,    68,    70,    90,   331,   332,   333,    70,
     309,   336,    70,   312,    68,   339,   351,    18,   353,    72,
      68,   320,   341,   348,   359,   357,   357,    67,    88,    68,
      37,   366,    68,    90,   358,   212,   214,   362,   213,    58,
     365,    90,   341,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    49,
      30,    31,    32,    33,    34,    35,   314,    42,    38,   147,
      40,    41,    42,    43,    44,   230,    46,    47,   315,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   309,
     226,   220,    29,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    10,    90,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    -1,    -1,    38,    -1,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    72,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      90,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
       3,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    21,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    21,    -1,    22,    -1,    -1,
      25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    21,    -1,    38,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    72,    -1,    75,
      76,    77,    78,    79,    80,    21,    -1,    67,    -1,    69,
      -1,    71,    72,    73,    90,    75,    76,    77,    78,    79,
      80,    21,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    67,    -1,    69,    -1,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    21,    -1,    67,    -1,    69,
      -1,    71,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    21,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    21,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    21,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    21,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    21,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    21,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,     0,    -1,
      38,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    56,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    38,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,     3,     4,
      38,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    38,   115,   116,   119,   120,   122,   126,   127,   155,
     156,   157,    40,    72,    40,    67,    76,    90,   117,   118,
     128,   129,   132,   116,   116,   116,   116,     0,   156,    72,
      40,   123,   124,   125,   128,   126,   132,   133,    74,    90,
      72,    89,   115,   116,   147,   158,    67,    69,   129,   123,
      73,    74,    89,    68,   126,   132,   118,   128,     7,     9,
      11,    16,    18,    20,    21,    23,    24,    27,    31,    33,
      40,    41,    42,    43,    44,    46,    47,    67,    73,    75,
      76,    77,    78,    79,    80,    90,    94,    95,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   113,   115,   145,   146,   147,   148,   149,
     150,   151,   152,   154,    40,    72,   111,   140,   115,   147,
      40,   116,   134,   135,   136,   137,   138,    25,   131,   133,
      73,    74,    73,   124,    97,   110,   114,    90,    90,   113,
     114,    67,    92,    40,    67,    97,    90,    67,    88,    92,
      67,    88,    67,    97,    97,   113,   120,   121,   126,   139,
      45,    46,    47,    67,    69,    71,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    89,   112,    99,    76,
      81,    82,    77,    78,    48,    49,    50,    51,    83,    84,
      52,    53,    75,    85,    86,    93,    93,    74,    90,    73,
      92,    69,    71,   140,   141,   142,   143,   144,   128,    68,
      74,    68,    74,   131,   133,    76,   111,   130,    25,    73,
      90,    88,   113,   115,   153,    67,    90,   139,   113,   145,
     145,   113,   145,   139,    68,   121,   121,    68,    40,    68,
      96,   111,   113,    40,   111,    99,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   103,   103,   104,   105,
     106,    54,    55,    87,   111,   149,   114,    40,    73,    74,
     140,    89,   144,    56,   137,    40,   111,    70,    70,   111,
     145,   153,    90,   113,    68,    93,    92,    68,    68,    72,
      99,    68,    74,    70,    92,    92,    92,    70,    73,   140,
     142,    70,    70,    90,    92,    93,    68,    18,   145,   141,
     111,   107,   108,   113,   140,   153,   153,    68,    92,    67,
      73,    74,    93,    93,    93,    68,    93,    92,   145,   113,
      73,    88,   145,    90,   145,    93,    68,    92,    92,    37,
      90,   110,   153,    92,    93,   145,    68,    93,    92,   145
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   126,
     127,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   140,   140,   140,   141,   141,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   145,   145,   145,   145,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   152,   152,   153,   153,
     154,   154,   154,   154,   154,   155,   155,   156,   156,   157,
     157,   158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     6,     1,     6,     1,     9,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     4,     5,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     6,     6,     5,     4,
       4,     1,     0,     1,     0,     1,     2,     2,     3,     1,
       2,     1,     0,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     1,     2,     3,     4,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     3,     1,     1,     1,
       2,     8,    12,     5,     8,     9,    14,     8,     1,     0,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     1,     2
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
#line 167 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    (yyval.expr_attr) = new exp_attr;
    (yyval.expr_attr)->instr = Q_arr.index;
}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 175 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    //$$ = nextlist
    (yyval.expr_attr) = new exp_attr;
    (yyval.expr_attr)->nextlist = makelist(Q_arr.index);
    Q_arr.emit(GOTO,"","","");
}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 184 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        string t = (*((yyvsp[0].str)));     //done
        //cout<<t<<"\n";
        symtab *h = curr_sym->lookup(t);
        (yyval.expr_attr)->loc = t;
        //h -> nested_table = NULL;
        //$$->array = NULL;
    }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 194 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = "int";
        opcodeType op = COPY;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(op,(yyval.expr_attr)->loc, (yyvsp[0].intval));
        init_value *init = new init_value;
        init->int_val = (yyvsp[0].intval);                     
        curr_sym->lookup((yyval.expr_attr)->loc)->init_val = init;
        (yyval.expr_attr)->is_pointer_type = 0;

    }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 208 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = "double";
        opcodeType op = COPY;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(op,(yyval.expr_attr)->loc, (yyvsp[0].floatval));
        init_value *init = new init_value;
        init->double_val = (yyvsp[0].floatval);
        curr_sym->lookup((yyval.expr_attr)->loc)->init_val = init;
        (yyval.expr_attr)->is_pointer_type = 0;
    }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 221 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = "char";
        opcodeType op = COPY;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(op,(yyval.expr_attr)->loc, (yyvsp[0].charval));
        init_value *init = new init_value;
        init->char_val = (yyvsp[0].charval);
        curr_sym->lookup((yyval.expr_attr)->loc)->init_val = init;
        (yyval.expr_attr)->is_pointer_type = 0;
    }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 234 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        string s = ".LC";
        string temp = to_string(literal_count);
        s = s + temp;
        (yyval.expr_attr)->loc = s;
        literal_count++;
        string_lits.push_back(*(yyvsp[0].str));
    }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 244 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = (yyvsp[-1].expr_attr);
    }
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 250 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = (yyvsp[0].expr_attr);
    }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 254 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf t = curr_sym->lookup((yyvsp[-3].expr_attr)->loc)->type;
        string s;
        type_inf t1;
        t1.type_name = "int";
	int idx;
	string s1;
	idx = t.idx;
	s = curr_sym->gentemp(t1);
        Q_arr.emit(COPY, s, 0);
        (yyvsp[-3].expr_attr) -> inner = new string(s);    //temporary for inner dimension
	s = *((yyvsp[-3].expr_attr)->inner);
	s1 = to_string(idx);
        
        Q_arr.emit(MULT, s, s, s1);
        Q_arr.emit(PLUS, s, s, (yyvsp[-1].expr_attr)->loc);
        Q_arr.emit(MULT, s, s, string("4"));
        (yyval.expr_attr) = (yyvsp[-3].expr_attr);
    }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 273 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 275 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        string f = (yyvsp[-3].expr_attr)->loc;
        symboltable *fsym = GT.lookup(f)->nested_table;
        func_list *flist = ((yyvsp[-1].func_list_));
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
    }
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 290 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 291 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 293 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
     
        (yyval.expr_attr) = new exp_attr;

        string s = (yyvsp[-1].expr_attr)->loc;
        symtab * f = curr_sym->lookup((yyvsp[-1].expr_attr)->loc);
        (yyval.expr_attr)->loc = curr_sym->gentemp(f->type);
        if(f->type.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(f->type);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-1].expr_attr)->loc, *((yyvsp[-1].expr_attr)->inner));
            Q_arr.emit(COPY, (yyval.expr_attr)->loc, temp, "");
            Q_arr.emit(PLUS, temp, temp, "1");
            Q_arr.emit(ARRAY_DEREFERENCE, (yyvsp[-1].expr_attr)->loc, temp, *((yyvsp[-1].expr_attr)->inner));
        }
        else
        {
            Q_arr.emit(COPY, (yyval.expr_attr)->loc, (yyvsp[-1].expr_attr)->loc, "");
            Q_arr.emit(PLUS, (yyvsp[-1].expr_attr)->loc, (yyvsp[-1].expr_attr)->loc, "1");  
        }   //corrected
    }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 315 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        symtab * f = curr_sym->lookup((yyvsp[-1].expr_attr)->loc);
        (yyval.expr_attr)->loc = curr_sym->gentemp(f->type);
        if(f->type.array_type.compare("array") == 0)
        {
            //emit
            string temp = curr_sym->gentemp(f->type);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-1].expr_attr)->loc, *((yyvsp[-1].expr_attr)->inner));
            Q_arr.emit(COPY, (yyval.expr_attr)->loc, temp, "");
            Q_arr.emit(MINUS, temp, temp, "1");
            Q_arr.emit(ARRAY_DEREFERENCE, (yyvsp[-1].expr_attr)->loc, temp, *((yyvsp[-1].expr_attr)->inner));
        }
        else
        {
            Q_arr.emit(COPY, (yyval.expr_attr)->loc, (yyvsp[-1].expr_attr)->loc, "");
            Q_arr.emit(MINUS, (yyvsp[-1].expr_attr)->loc, (yyvsp[-1].expr_attr)->loc, "1");    
        }//corrected
    }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 334 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 335 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 341 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //do this
        func_def *f = new func_def;
        f->param_name = (yyvsp[0].expr_attr)->loc;
        (yyval.func_list_) = new func_list;
        f->type = &(curr_sym->lookup(f->param_name)->type);
        (yyval.func_list_)->func_def_list.push_back(f);
    }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 350 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //do this
        func_def *f = new func_def;
        f->param_name = (yyvsp[0].expr_attr)->loc;
        (yyval.func_list_) = new func_list;
        f->type = &(curr_sym->lookup(f->param_name)->type);
	(yyval.func_list_) = (yyvsp[-2].func_list_);
        (yyval.func_list_)->func_def_list.push_back(f);
    }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 362 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 364 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //check code again
        opcodeType op;
        op = PLUS;
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
        if(type.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            Q_arr.emit(PLUS, temp, temp, "1");
            Q_arr.emit(ARRAY_DEREFERENCE, (yyvsp[0].expr_attr)->loc, temp, *((yyvsp[0].expr_attr)->inner));
        }
        else
            Q_arr.emit(op, (yyval.expr_attr)->loc, (yyvsp[0].expr_attr)->loc, "1");

        type = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        
        op = COPY;
        Q_arr.emit(op, (yyvsp[0].expr_attr)->loc, (yyval.expr_attr)->loc, "");
    }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 388 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        opcodeType op;
        op = MINUS;
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        if(type.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            Q_arr.emit(MINUS, temp, temp, "1");
            Q_arr.emit(ARRAY_DEREFERENCE, (yyvsp[0].expr_attr)->loc, temp, *((yyvsp[0].expr_attr)->inner));
        }
        else
            Q_arr.emit(op, (yyval.expr_attr)->loc, (yyvsp[0].expr_attr)->loc, "1");

        type = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        
        op = COPY;
        Q_arr.emit(op, (yyvsp[0].expr_attr)->loc, (yyval.expr_attr)->loc, "");        
    }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 412 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = string("int");
        if((yyvsp[-1].charval) == '-')
        {
            (yyval.expr_attr) = new exp_attr; 
            (yyval.expr_attr)->loc = curr_sym->gentemp(type);
            Q_arr.emit(UNARY_MINUS,(yyval.expr_attr)->loc,(yyvsp[0].expr_attr)->loc,"");
        }
        else if((yyvsp[-1].charval) == '&')
        {
            (yyval.expr_attr) = new exp_attr;
	    type.pointer_type = "ptr";
	    type.pointer_count = 1;
	    type.size = 8;
            (yyval.expr_attr)->loc = curr_sym->gentemp(type);
            Q_arr.emit(REFERENCE,(yyval.expr_attr)->loc,(yyvsp[0].expr_attr)->loc,"");
        }
        else if((yyvsp[-1].charval) == '*')
        {
            (yyval.expr_attr) = new exp_attr; 
            (yyval.expr_attr)->loc = curr_sym->gentemp(type);
            Q_arr.emit(DEREFERENCE,(yyval.expr_attr)->loc,(yyvsp[0].expr_attr)->loc,"");
        }
        else
        {
            (yyval.expr_attr) = (yyvsp[0].expr_attr);
        }
    }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 442 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 443 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 448 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.charval) = '&';
    }
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 452 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.charval) = '*';
    }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 456 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.charval) = '+';
    }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 460 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.charval) = '-';
    }
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 464 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.charval) = '~';
    }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 468 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.charval) = '!';
    }
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 474 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 475 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 480 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 483 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
   if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        int flag = 0;
        if(type1.type_name == type2.type_name)
        {
            type.type_name = type1.type_name;
            flag = 1;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convI2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
        }
        else if(type1.type_name.compare("int")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convI2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convC2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("int")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(MULT, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);

    }
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 579 "ass6_14CS10054.y" /* yacc.c:1646  */
    {

     (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        int flag = 0;
        if(type1.type_name == type2.type_name)
        {
            type.type_name = type1.type_name;
            flag = 1;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convI2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
        }
        else if(type1.type_name.compare("int")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convI2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convC2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("int")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(DIVIDE, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 676 "ass6_14CS10054.y" /* yacc.c:1646  */
    {

        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        int flag = 0;
        if(type1.type_name == type2.type_name)
        {
            type.type_name = type1.type_name;
            flag = 1;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convI2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
        }
        else if(type1.type_name.compare("int")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convI2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convC2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("int")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(MODULO, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);

    }
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 776 "ass6_14CS10054.y" /* yacc.c:1646  */
    {(yyval.expr_attr) = (yyvsp[0].expr_attr);}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 778 "ass6_14CS10054.y" /* yacc.c:1646  */
    {

        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        int flag = 0;
        if(type1.type_name == type2.type_name)
        {
            type.type_name = type1.type_name;
            flag = 1;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convI2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
        }
        else if(type1.type_name.compare("int")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convI2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convC2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("int")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(PLUS, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 875 "ass6_14CS10054.y" /* yacc.c:1646  */
    {

        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        int flag = 0;
        if(type1.type_name == type2.type_name)
        {
            type.type_name = type1.type_name;
            flag = 1;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convI2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
        }
        else if(type1.type_name.compare("int")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convI2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
        }
        if(type1.type_name.compare("double")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2D(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
                    }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("double")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type2;
            Q_arr.convC2D(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("char")==0 && type2.type_name.compare("int")==0)
        {   
            string t = curr_sym->gentemp(type2);
            symtab *s = curr_sym->lookup(t, type2.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[-2].expr_attr));
            type.type_name = type2.type_name;
            
        }
        if(type1.type_name.compare("int")==0 && type2.type_name.compare("char")==0)
        {   
            string t = curr_sym->gentemp(type1);
            symtab *s = curr_sym->lookup(t, type1.type_name);
            exp_attr *e = new exp_attr;
            e->loc = t;
            e->type = type1;
            Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            type.type_name = type1.type_name;
            
        }
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(MINUS, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);

    }
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 974 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 976 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        int flag = 0;
        if(type1.type_name.compare("int") == 0)
        {

        }
        else
        {
            if(type1.type_name.compare("double") == 0)
            {
                type1.type_name = "int";
                string t = curr_sym->gentemp(type1);
                symtab *s = curr_sym->lookup(t, "int");
                exp_attr *e = new exp_attr;
                e->loc = t;
                e->type.type_name = "int";
                Q_arr.convD2I(e,(yyvsp[0].expr_attr));
            }
            else if(type1.type_name.compare("char") == 0)
            {
                type1.type_name = "int";
                string t = curr_sym->gentemp(type1);
                symtab *s = curr_sym->lookup(t, "int");
                exp_attr *e = new exp_attr;
                e->loc = t;
                e->type.type_name = "int";
                Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            }
        }
        type1.type_name = "int";
        (yyval.expr_attr)->loc = curr_sym->gentemp(type1);
        Q_arr.emit(SHIFT_LEFT, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1030 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        int flag = 0;
        if(type1.type_name.compare("int") == 0)
        {
        }
        else
        {
            if(type1.type_name.compare("double") == 0)
            {
                type1.type_name = "int";
                string t = curr_sym->gentemp(type1);
                symtab *s = curr_sym->lookup(t, "int");
                exp_attr *e = new exp_attr;
                e->loc = t;
                e->type.type_name = "int";
                Q_arr.convD2I(e,(yyvsp[0].expr_attr));
            }
            else if(type1.type_name.compare("char") == 0)
            {
                type1.type_name = "int";
                string t = curr_sym->gentemp(type1);
                symtab *s = curr_sym->lookup(t, "int");
                exp_attr *e = new exp_attr;
                e->loc = t;
                e->type.type_name = "int";
                Q_arr.convC2I(e,(yyvsp[0].expr_attr));
            }
        }
        type1.type_name = "int";
        (yyval.expr_attr)->loc = curr_sym->gentemp(type1);
        Q_arr.emit(SHIFT_RIGHT, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1084 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1086 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type.type_name = "bool";
        (yyval.expr_attr)->loc = curr_sym->gentemp((yyval.expr_attr)->type);
        (yyval.expr_attr)->truelist = makelist(Q_arr.index);
        (yyval.expr_attr)->falselist = makelist(Q_arr.index + 1);
        Q_arr.emit(IF_LESS, "", (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
        Q_arr.emit(GOTO,"","","");
    }
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1114 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type.type_name = "bool";
        (yyval.expr_attr)->loc = curr_sym->gentemp((yyval.expr_attr)->type);
        (yyval.expr_attr)->truelist = makelist(Q_arr.index);
        (yyval.expr_attr)->falselist = makelist(Q_arr.index + 1);
        Q_arr.emit(IF_GREATER, "", (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
        Q_arr.emit(GOTO,"","","");
    }
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1144 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;
        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type.type_name = "bool";
        (yyval.expr_attr)->loc = curr_sym->gentemp((yyval.expr_attr)->type);
        (yyval.expr_attr)->truelist = makelist(Q_arr.index);
        (yyval.expr_attr)->falselist = makelist(Q_arr.index + 1);
        Q_arr.emit(IF_LESS_EQUAL, "", (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
        Q_arr.emit(GOTO,"","","");
    }
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1173 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type.type_name = "bool";
        (yyval.expr_attr)->loc = curr_sym->gentemp((yyval.expr_attr)->type);
        (yyval.expr_attr)->truelist = makelist(Q_arr.index);
        (yyval.expr_attr)->falselist = makelist(Q_arr.index + 1);
        Q_arr.emit(IF_GREATER_EQUAL, "", (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
        Q_arr.emit(GOTO,"","","");
    }
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1204 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1206 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type.type_name = "bool";
        (yyval.expr_attr)->loc = curr_sym->gentemp((yyval.expr_attr)->type);
        (yyval.expr_attr)->truelist = makelist(Q_arr.index);
        (yyval.expr_attr)->falselist = makelist(Q_arr.index + 1);
        Q_arr.emit(IF_IS_EQUAL,"",(yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
        Q_arr.emit(GOTO,"","","");
    }
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1235 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type.type_name = "bool";
        (yyval.expr_attr)->loc = curr_sym->gentemp((yyval.expr_attr)->type);
        (yyval.expr_attr)->truelist = makelist(Q_arr.index);
        (yyval.expr_attr)->falselist = makelist(Q_arr.index + 1);
        Q_arr.emit(IF_NOT_EQUAL,"",(yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
        Q_arr.emit(GOTO,"","","");
    }
#line 3132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1267 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1269 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        symtab *f = curr_sym->lookup((yyvsp[-2].expr_attr)->loc);//check
        type_inf t;
        t = f->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(t);
        Q_arr.emit(LOGICAL_AND, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 3171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1301 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1304 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        symtab *f = curr_sym->lookup((yyvsp[-2].expr_attr)->loc);//check
        type_inf t;
        t = f->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(t);
        Q_arr.emit(XOR, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1335 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1338 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-2].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
            (yyvsp[-2].expr_attr)->loc = temp;
            (yyvsp[-2].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        symtab *f = curr_sym->lookup((yyvsp[-2].expr_attr)->loc);//check
        type_inf t;
        t = f->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(t);
        Q_arr.emit(OR, (yyval.expr_attr)->loc, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc);
    }
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1368 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1370 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2;
        type1 = curr_sym->lookup((yyvsp[-5].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[-1].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-1].expr_attr)->loc, *((yyvsp[-1].expr_attr)->inner));
            (yyvsp[-1].expr_attr)->loc = temp;
            (yyvsp[-1].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-5].expr_attr)->loc, *((yyvsp[-5].expr_attr)->inner));
            (yyvsp[-5].expr_attr)->loc = temp;
            (yyvsp[-5].expr_attr)->type.array_type = ""; //check
        }
        
        type_inf type;
        type.type_name = "bool";
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type = type;
        Q_arr.backpatch((yyvsp[-4].expr_attr)->nextlist, Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-5].expr_attr));

        Q_arr.backpatch((yyvsp[0].expr_attr)->nextlist, Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-1].expr_attr));

        Q_arr.backpatch((yyvsp[-5].expr_attr)->truelist, (yyvsp[-2].expr_attr)->instr);
        (yyval.expr_attr)->truelist = (yyvsp[-1].expr_attr)->truelist;
        (yyval.expr_attr)->falselist = merge((yyvsp[-5].expr_attr)->falselist, (yyvsp[-1].expr_attr)->falselist);
    }
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1407 "ass6_14CS10054.y" /* yacc.c:1646  */
    { }
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1409 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2;
        type1 = curr_sym->lookup((yyvsp[-5].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[-1].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-1].expr_attr)->loc, *((yyvsp[-1].expr_attr)->inner));
            (yyvsp[-1].expr_attr)->loc = temp;
            (yyvsp[-1].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-5].expr_attr)->loc, *((yyvsp[-5].expr_attr)->inner));
            (yyvsp[-5].expr_attr)->loc = temp;
            (yyvsp[-5].expr_attr)->type.array_type = ""; //check
        }
        
        type_inf type;
        type.type_name = "bool";
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->type = type;
         Q_arr.backpatch((yyvsp[-4].expr_attr)->nextlist, Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-5].expr_attr));

        Q_arr.backpatch((yyvsp[0].expr_attr)->nextlist, Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-1].expr_attr));
Q_arr.backpatch((yyvsp[-5].expr_attr)->falselist, (yyvsp[-2].expr_attr)->instr);
        (yyval.expr_attr)->truelist = merge((yyvsp[-5].expr_attr)->truelist, (yyvsp[-1].expr_attr)->truelist);
        (yyval.expr_attr)->falselist = (yyvsp[-1].expr_attr)->falselist;
    }
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1446 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1447 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2;
        type1 = curr_sym->lookup((yyvsp[-4].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type1);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[-4].expr_attr)->loc, *((yyvsp[-4].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        (yyval.expr_attr) = new exp_attr;
        list<int> I;
        type_inf type;
        type = curr_sym->lookup((yyvsp[-4].expr_attr)->loc)->type;
        (yyval.expr_attr)->loc = curr_sym->gentemp(type);
        Q_arr.emit(COPY, (yyval.expr_attr)->loc, (yyvsp[0].expr_attr)->loc,"");
        I = makelist(Q_arr.index);
        Q_arr.emit(GOTO,"","","");
        Q_arr.backpatch((yyvsp[-3].expr_attr)->nextlist, Q_arr.index);
        Q_arr.emit(COPY, (yyval.expr_attr)->loc, (yyvsp[-4].expr_attr)->loc, "");
        I = merge(I, makelist(Q_arr.index));
        Q_arr.emit(GOTO,"", "", "");
        Q_arr.backpatch((yyvsp[-7].expr_attr)->nextlist, Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-8].expr_attr));
        Q_arr.backpatch((yyvsp[-8].expr_attr)->truelist, (yyvsp[-5].expr_attr)->instr);
        Q_arr.backpatch((yyvsp[-8].expr_attr)->falselist, (yyvsp[-1].expr_attr)->instr);
        Q_arr.backpatch(I, Q_arr.index);
    }
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1489 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1492 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        type_inf type1, type2, type;
        type1 = curr_sym->lookup((yyvsp[-2].expr_attr)->loc)->type;
        type2 = curr_sym->lookup((yyvsp[0].expr_attr)->loc)->type;

        if(type2.array_type.compare("array") == 0)
        {
            string temp = curr_sym->gentemp(type2);
            Q_arr.emit(ARRAY_ACCESS, temp, (yyvsp[0].expr_attr)->loc, *((yyvsp[0].expr_attr)->inner));
            (yyvsp[0].expr_attr)->loc = temp;
            (yyvsp[0].expr_attr)->type.array_type = ""; //check
        }
        
        if(type1.array_type.compare("array") == 0)
        {
            Q_arr.emit(ARRAY_DEREFERENCE, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc, *((yyvsp[-2].expr_attr)->inner));
        }
        else
            Q_arr.emit(COPY, (yyvsp[-2].expr_attr)->loc, (yyvsp[0].expr_attr)->loc, "");
        (yyval.expr_attr) = (yyvsp[-2].expr_attr);
   }
#line 3425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1517 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1519 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1519 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1520 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1521 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1522 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1523 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1524 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1525 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1526 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1527 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1531 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = (yyvsp[0].expr_attr);
    }
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1535 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
     }
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1540 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1549 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1552 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        init_dec_list *new_dec = new init_dec_list;
        new_dec = (yyvsp[-1].init_dec_list_);
        int size = 0;
        type_inf *type = (yyvsp[-2].type_);
        if(type->type_name.compare("int")==0) size = 4;
        if(type->type_name.compare("double")==0) size = 8;
        if(type->type_name.compare("char")==0) size = 1;

        list<declaration*>::iterator it;
        for(it = (yyvsp[-1].init_dec_list_)->dec_list.begin(); it != (yyvsp[-1].init_dec_list_)->dec_list.end(); it++)
        {
            declaration *new_dec = *it;
    	    if(new_dec->type!=NULL){
            if(new_dec->type->type_name.compare("function")==0)
            {
                string name = new_dec->dec_name;
                curr_sym = &GT;
                Q_arr.emit(_FUNCTION_END,name,"","");
            }
            
            symtab *ret, *f;
            symboltable *nest;
            if(new_dec->type->type_name.compare("function")==0)
            {
                f = curr_sym->lookup(new_dec->dec_name, type->type_name);
                nest = f->nested_table;
                ret = nest->lookup("retVal", type->type_name, new_dec->pointer_count);
                f->offset = curr_sym->offset;
                f->size = size;
                f->init_val = NULL;
                continue;
            }
            }
            symtab *f1 = curr_sym->lookup(new_dec->dec_name, type->type_name);
        f1->nested_table = NULL;
            if(new_dec->alist == vector<int>() && new_dec->pointer_count == 0)
            {
                f1->offset = curr_sym->offset;
                f1->type = *type;
                f1 = curr_sym->lookup(new_dec->dec_name, type->type_name);
            
                if(new_dec->init != NULL)
                {
                    string x = new_dec->init->loc;
                    Q_arr.emit(COPY, new_dec->dec_name, x, "");
                    f1->init_val = curr_sym->lookup(x,f1->type.type_name)->init_val;
                }
                else
                    new_dec->init = NULL;
            }

            else if(new_dec -> pointer_count > 0)
            {
                symtab *sp;
                for(sp = curr_sym->sym_table; sp < &curr_sym->sym_table[curr_sym->no_of_entries]; sp++)
                {
                    if(!sp->id.empty() && !sp->id.compare(new_dec->dec_name))
                    {
                        sp->offset = curr_sym->offset-4;
                        sp->pointer_count = new_dec->pointer_count;
                        sp->type = *type;
                        sp->type.pointer_type = "ptr";
                        sp->size = 4;
                    }
                }
            }

            else if(new_dec->alist!=vector<int>())
            {
                symtab *sp;
              for(sp = curr_sym->sym_table; sp < &curr_sym->sym_table[curr_sym->no_of_entries]; sp++)
                {
                    if(!sp->id.empty() && !sp->id.compare(new_dec->dec_name))
                    {
                        int temp_size = size;
                        sp->offset = curr_sym->offset-4;
                        //sp->pointer_count = new_dec->pointer_count;
                        sp->type = *type;
			sp->type.type_name = type->type_name;
                        sp->type.array_type = "array";
                        sp->type.pointer_type = "";
                       for(int i = 0; i < new_dec->alist.size(); i++)
                        {
                            sp->type.array_list.push_back(new_dec->alist[i]);
                        }
                        for (int i = 0; i < sp->type.array_list.size(); ++i)
                        {
                            temp_size = temp_size * sp->type.array_list[i];
                        }
                        sp->size = temp_size;
                        curr_sym->offset = curr_sym->offset + temp_size;
                    }
                }
                
            }

            
        }
        //imcomplete
    }
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1657 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1660 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1663 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.type_) = (yyvsp[0].type_);
    }
#line 3649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1667 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1670 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1673 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1676 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1679 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    }
#line 3684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1686 "ass6_14CS10054.y" /* yacc.c:1646  */
    {   (yyval.init_dec_list_) = new init_dec_list;
        (yyval.init_dec_list_)->dec_list.push_back((yyvsp[0].decclist));
    }
#line 3692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1690 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyvsp[-2].init_dec_list_)->dec_list.push_back((yyvsp[0].decclist));
        (yyval.init_dec_list_) = (yyvsp[-2].init_dec_list_);
    }
#line 3701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1699 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.decclist) = (yyvsp[0].decclist);
        (yyval.decclist)->init = NULL;
    }
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1704 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.decclist) = (yyvsp[-2].decclist);
        (yyval.decclist)->init = (yyvsp[0].expr_attr);
    }
#line 3719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1710 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1710 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1710 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1710 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1714 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
            (yyval.type_) = new type_inf;
			(yyval.type_)->type_name = string("void"); 
		}
#line 3752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1719 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
            (yyval.type_) = new type_inf;
			(yyval.type_)->type_name = string("char");
			(yyval.type_)->next = NULL;
		}
#line 3762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1724 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1726 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
            (yyval.type_) = new type_inf;
			(yyval.type_)->type_name = string("int");
			(yyval.type_)->next = NULL;
			
		}
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1732 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1733 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1735 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.type_) = new type_inf;
		(yyval.type_)->type_name = string("double");
		(yyval.type_)->next = NULL;
	}
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1740 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1741 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1742 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1743 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1744 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1750 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
			(yyval.type_) = (yyvsp[0].type_);
		}
#line 3839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1754 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1755 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1756 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1765 "ass6_14CS10054.y" /* yacc.c:1646  */
    {printf("enumerator_list -> enumerator\n");}
#line 3863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1768 "ass6_14CS10054.y" /* yacc.c:1646  */
    {printf("enumerator -> enumeration_constant\n");}
#line 3869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1771 "ass6_14CS10054.y" /* yacc.c:1646  */
    {}
#line 3875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1773 "ass6_14CS10054.y" /* yacc.c:1646  */
    {printf("type_qualifier -> const\n");}
#line 3881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1774 "ass6_14CS10054.y" /* yacc.c:1646  */
    {printf("type_qualifier -> restrict\n");}
#line 3887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1775 "ass6_14CS10054.y" /* yacc.c:1646  */
    {printf("type_qualifier -> volatile\n");}
#line 3893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1778 "ass6_14CS10054.y" /* yacc.c:1646  */
    {printf("function_specifier -> inline\n");}
#line 3899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1781 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.decclist) = (yyvsp[0].decclist);
        (yyval.decclist)->pointer_count = (yyvsp[-1].type_)->pointer_count;
        //printf("declarator -> pointer direct_declarator\n");
    }
#line 3909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1787 "ass6_14CS10054.y" /* yacc.c:1646  */
    {

		(yyval.decclist) = (yyvsp[0].decclist);
        (yyval.decclist)->pointer_count = 0;
			//printf("declarator -> direct_declarator\n");
	}
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1798 "ass6_14CS10054.y" /* yacc.c:1646  */
    {//printf("direct_declarator -> IDENTIFIER\n");
        (yyval.decclist) = new declaration; 
        (yyval.decclist)->dec_name = *((yyvsp[0].str));
    }
#line 3929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1803 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.decclist) = (yyvsp[-1].decclist);
        //printf("direct_declarator -> (declarator)\n");
    }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1808 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
	
        (yyval.decclist) = (yyvsp[-4].decclist);
	//$$ = new declaration;
	//symtab *t = curr_sym->lookup($1->dec_name);
	//t->type.array_type = "array";
	//t->type.idx = 0;
	//$1->type->array_type = "array";
	/*for(int i=0; i<curr_sym->no_of_entries; i++)
	{
		if(curr_sym->sym_table[i].id.compare($4->loc)==0)
		{
			curr_sym->sym_table[i].type.array_type = "array";
			$1->type->array_type = "array";
			 
		}
	}*/
        int idx = curr_sym->lookup((yyvsp[-1].expr_attr)->loc)->init_val->int_val;
	/*$$->type->array_type = "array";
	$$->type->idx = idx;*/
	//$$ = $1;
	//t->type.idx = idx;
        (yyval.decclist)->alist.push_back(idx);
	//$$->type->array_type = "array";
	//$$->type->idx = idx; 

        //printf("direct_declarator -> direct_declarator[type_qualifier_list_opt assignment_expression_opt]\n");
    }
#line 3971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1837 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("direct_declarator ->direct_declarator [static type_qualifier_list assignment_expression]\n");
    }
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1841 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("direct_declarator -> direct_declarator[type_qualifier_list static assignment_expression]\n");
    }
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1845 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("direct_declarator -> direct_declarator[type_qualifier_list_opt *]\n");
    }
#line 3995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1849 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //name of func is available
        list<func_def*> l = (yyvsp[-1].func_list_)->func_def_list;
        
        symboltable *new_sym = new symboltable;
        (yyval.decclist) = (yyvsp[-3].decclist);
        string name = (yyval.decclist)->dec_name;
        //cout<<name<<"\n";
        (yyval.decclist)->type = new type_inf;
        (yyval.decclist)->type->type_name = string("function");
        (yyval.decclist)->type->no_of_params = l.size();
        symtab *func_lookup = sym->lookup((yyval.decclist)->dec_name, (yyval.decclist)->type->type_name);
		for(int i=0; i < sym->no_of_entries; i++)
       		{
	    	if(sym->sym_table[i].id.compare((yyval.decclist)->dec_name)==0)
	    	{
				sym->sym_table[i].type.type_name = "function";
				sym->sym_table[i].type.no_of_params = l.size();
	    	}
        }
        /*symtab *sp1;
        for(sp1 = sym->sym_table; sp1 < &sym->sym_table[sym->no_of_entries]; sp1++)
        {
            //cout<<s<<"\n";
            //cout<<"loop\n";
            if(!sp1->id.empty() && !sp1->id.compare($$->dec_name))
            {
                sp1->type = *($$->type);
            }
        }*/
        
        //cout<<"direct_dec "<<$$->dec_name<<"\n";
        func_lookup -> nested_table = new_sym;

        list<func_def*>::iterator it;
        for(it = l.begin(); it != l.end(); it++)
        {
            func_def *temp = *it;
            //cout<<temp->param_name<<"\n";
            //cout<<temp->param_name<<"\n";
            new_sym -> lookup(temp->param_name, temp->type->type_name);
	    for(int i = 0; i<new_sym->no_of_entries; i++)
	    {
		if(new_sym->sym_table[i].id.compare(temp->param_name)==0)
		{
			if(temp->type->array_type.compare("array")==0){
				new_sym->sym_table[i].type.array_type = "array";
				new_sym->sym_table[i].type.idx = temp->type->idx;
				}
		}
	    }

            //func_lookup->nested_table -> lookup(temp->param_name, temp->type->type_name);
        }

        symtab *sp;
        for(sp = sym->sym_table; sp < &sym->sym_table[sym->no_of_entries]; sp++)
        {
            //cout<<s<<"\n";
            //cout<<"loop\n";
            if(!sp->id.empty() && !sp->id.compare((yyval.decclist)->dec_name))
            {
                sp->nested_table = new_sym;
            }
        }
        curr_sym = new_sym;
        //cout<<curr_sym->sym_table[0].id<<"\n";
        //printf("direct_declarator -> direct_declarator (parameter_type_list)\n");
        Q_arr.emit(_FUNCTION_START, name,"","");
    }
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1920 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("direct_declarator -> direct_declarator (identifier_list_opt)\n");

    }
#line 4079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1934 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    //printf("assignment_expression_opt -> assignment_expression\n");
   }
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1941 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("type_qualifier_list_opt -> type_qualifier_list\n");
    }
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1949 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("pointer -> '*'\n");
        (yyval.type_) = new type_inf;
        (yyval.type_)->type_name = string("ptr");
        (yyval.type_)->next = NULL;
        (yyval.type_)->pointer_type = string("ptr");
        (yyval.type_)->pointer_count = 1;
    }
#line 4108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1958 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
    //    printf("pointer -> *type_qualifier_list\n");
    }
#line 4116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1962 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("pointer -> *pointer\n");
        (yyval.type_) = new type_inf;
        (yyval.type_)->type_name = string("ptr");
        (yyval.type_)->next = NULL;
        (yyval.type_)->pointer_type = string("ptr");
        
        (yyval.type_)->pointer_count = (yyvsp[0].type_)->pointer_count + 1;
        
    }
#line 4131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1973 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("pointer -> *type_qualifier_list pointer\n");
    }
#line 4139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1979 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("type_qualifier_list -> type_qualifier\n");
    }
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1983 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("type_qualifier_list -> type_qualifier_list type_qualifier\n");
    }
#line 4155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1990 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.func_list_) = new func_list;
    }
#line 4163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1996 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.func_list_) = new func_list;
        (yyval.func_list_) = (yyvsp[0].func_list_);
        //printf("parameter_type_list -> parameter_list\n");
    }
#line 4173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2002 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("parameter_type_list -> parameter_list, ELLIPSIS\n");
    }
#line 4181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2008 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //create a new list
        (yyval.func_list_) = new func_list;
        (yyval.func_list_)->func_def_list.push_back((yyvsp[0].func_def_));

        //printf("parameter_list -> parameter_declaration\n");
    }
#line 4193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2016 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //make use of old list

        (yyvsp[-2].func_list_)->func_def_list.push_back((yyvsp[0].func_def_));
        (yyval.func_list_) = (yyvsp[-2].func_list_);
        //printf("parameter_list -> parameter_list, parameter_declaration\n");
    }
#line 4205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2026 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.func_def_) = new func_def;
        (yyval.func_def_)->type = (yyvsp[-1].type_);
	if((yyvsp[0].decclist)->alist.size()>0)
		{(yyval.func_def_)->type->array_type = "array";(yyval.func_def_)->type->idx = (yyvsp[0].decclist)->alist[0];(yyval.func_def_)->type->type_name = (yyvsp[-1].type_)->type_name;
	}
	for(int i=0; i<curr_sym->no_of_entries; i++)
	{
		if(curr_sym->sym_table[i].id.compare((yyvsp[0].decclist)->dec_name)==0)
		{
			if((yyvsp[0].decclist)->type->array_type.compare("array")==0 || curr_sym->sym_table[i].type.array_type.compare("array")==0)
			{
				curr_sym->sym_table[i].type.array_type = "array";
				(yyval.func_def_)->type->array_type = "array";
			}
		}
	}
	(yyval.func_def_)->param_name = (yyvsp[0].decclist)->dec_name;

        //printf("parameter_declaration -> declaration_specifiers declarator\n");
    }
#line 4231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2048 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("parameter_declaration -> declaration_specifiers\n");
    }
#line 4239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2055 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("identifier_list -> IDENTIFIER\n");
    }
#line 4247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2059 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("identifier_list -> identifier_list, IDENTIFIER\n");
    }
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2066 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.type_) = (yyvsp[0].type_);
        //printf("type_name -> specifier_qualifier_list\n");
    }
#line 4264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2074 "ass6_14CS10054.y" /* yacc.c:1646  */
    {//printf("initializer -> assignment_expression\n");
        (yyval.expr_attr) = (yyvsp[0].expr_attr);
    }
#line 4272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2078 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("initializer -> {initializer_list}\n");
    }
#line 4280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2082 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("initializer -> {initializer_list, }\n");
    }
#line 4288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2089 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("initializer_list -> initializer\n");
    }
#line 4296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2093 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("initializer_list -> designation initializer\n");
    }
#line 4304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2097 "ass6_14CS10054.y" /* yacc.c:1646  */
    {//printf("initializer_list -> initializer_list, initializer\n");
    }
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2100 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("initializer_list -> initializer_list, designation initializer\n");
    }
#line 4319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2107 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("designation -> designator_list -\n");
    }
#line 4327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2114 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("designator_list -> designator\n");
    }
#line 4335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2118 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("designator_list -> designator_list designator\n");
    }
#line 4343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2124 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("designator -> [constant_expression]\n");
    }
#line 4351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2128 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("designator -> IDENTIFIER\n");
    }
#line 4359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2138 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("statement -> labeled_statement\n");
    }
#line 4367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2142 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("statement -> compound_statement\n");
    }
#line 4375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2146 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("statement -> expression_statement\n");
    }
#line 4383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2150 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("statement -> selection_statement\n");
    }
#line 4391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2154 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("statement -> iteration_statement\n");
    }
#line 4399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2158 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("statement -> jump_statement\n");
    }
#line 4407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2164 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("labeled_statement -> IDENTIFIER : statement\n");
    }
#line 4415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2168 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("labeled_statement -> case constant_expression : statement\n");
    }
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 2172 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("labeled_statement -> default : statement\n");
    }
#line 4431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2179 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("compound_statement -> {}\n");
    }
#line 4439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2183 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = (yyvsp[-1].expr_attr);
        //printf("compound_statement -> {block_item_list}\n");
    }
#line 4448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2191 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = (yyvsp[0].expr_attr);
        Q_arr.backpatch((yyvsp[0].expr_attr)->nextlist, Q_arr.index);
        //printf("block_item_list -> block_item\n");
    }
#line 4458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2197 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        Q_arr.backpatch((yyvsp[-2].expr_attr)->nextlist, (yyvsp[-1].expr_attr)->instr);
        (yyval.expr_attr) = new exp_attr;
        (yyval.expr_attr)->nextlist = (yyvsp[0].expr_attr)->nextlist;
        //printf("block_item_list -> block_item_list block_item\n");
    }
#line 4469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 2206 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        //printf("block_item -> declaration\n");
    }
#line 4478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 2211 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("block_item -> statement\n");
    }
#line 4486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 2217 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        //printf("expression_statement -> ;\n");
    }
#line 4495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 2222 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //$$ = $1;
        //printf("expression_statement -> expression ;\n");
    }
#line 4504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 2229 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        //if($3->type.type_name.compare("bool"))
        Q_arr.backpatch((yyvsp[-4].expr_attr)->nextlist, Q_arr.index);

        //cout<<$3->type.type_name<<"\n";
        Q_arr.convInt2Bool((yyvsp[-5].expr_attr));
        
        Q_arr.backpatch((yyvsp[-5].expr_attr)->truelist, (yyvsp[-2].expr_attr)->instr);
        //$$->nextlist

        (yyval.expr_attr)->nextlist = merge((yyvsp[0].expr_attr)->nextlist, (yyvsp[-1].expr_attr)->nextlist);
        (yyval.expr_attr)->nextlist = merge((yyval.expr_attr)->nextlist, (yyvsp[-5].expr_attr)->falselist);
        //printf("selection_statement -> if (expression) statement\n");
    }
#line 4524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 2245 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;

        Q_arr.backpatch((yyvsp[-8].expr_attr)->nextlist , Q_arr.index);

        Q_arr.convInt2Bool((yyvsp[-9].expr_attr));

        (yyval.expr_attr)->nextlist = merge((yyvsp[-5].expr_attr)->nextlist, (yyvsp[-4].expr_attr)->nextlist);

        Q_arr.backpatch((yyvsp[-9].expr_attr)->truelist, (yyvsp[-6].expr_attr)->instr);
        Q_arr.backpatch((yyvsp[-9].expr_attr)->falselist, (yyvsp[-2].expr_attr)->instr);

        (yyval.expr_attr)->nextlist = merge((yyval.expr_attr)->nextlist, (yyvsp[0].expr_attr)->nextlist);
        (yyval.expr_attr)->nextlist = merge((yyval.expr_attr)->nextlist, (yyvsp[-1].expr_attr)->nextlist);
        //printf("selection_statement -> if(expression) statement else statement\n");
    }
#line 4545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 2262 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("selection_statement -> switch(expression) statement\n");
    }
#line 4553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 2268 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        Q_arr.emit(GOTO,"","","");
        Q_arr.backpatch(makelist(Q_arr.index-1),(yyvsp[-6].expr_attr)->instr);    

        Q_arr.backpatch((yyvsp[-3].expr_attr)->nextlist,Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-4].expr_attr));

        (yyval.expr_attr) = new exp_attr;
        Q_arr.backpatch((yyvsp[0].expr_attr)->nextlist, (yyvsp[-6].expr_attr)->instr);
        Q_arr.backpatch((yyvsp[-4].expr_attr)->truelist, (yyvsp[-1].expr_attr)->instr);
        (yyval.expr_attr)->nextlist = (yyvsp[-4].expr_attr)->falselist;
        //printf("iteration_statement -> while(expression) statement\n");
    }
#line 4571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 2282 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        Q_arr.convInt2Bool((yyvsp[-2].expr_attr));
        Q_arr.backpatch((yyvsp[-6].expr_attr)->nextlist, (yyvsp[-5].expr_attr)->instr);
        Q_arr.backpatch((yyvsp[-2].expr_attr)->truelist, (yyvsp[-7].expr_attr)->instr);
        (yyval.expr_attr)->nextlist = (yyvsp[-2].expr_attr)->falselist;
        //printf("iteration_statement -> do statement while(expression);\n");
    }
#line 4584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 2291 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
    
        Q_arr.emit(GOTO,"","","");
        Q_arr.backpatch(makelist(Q_arr.index-1),(yyvsp[-5].expr_attr)->instr);    
        Q_arr.backpatch((yyvsp[-7].expr_attr)->nextlist, Q_arr.index);
        Q_arr.convInt2Bool((yyvsp[-8].expr_attr));

        Q_arr.backpatch((yyvsp[-3].expr_attr)->nextlist,(yyvsp[-9].expr_attr)->instr);
        Q_arr.backpatch((yyvsp[-8].expr_attr)->truelist,(yyvsp[-1].expr_attr)->instr);
        Q_arr.backpatch((yyvsp[0].expr_attr)->nextlist,(yyvsp[-5].expr_attr)->instr);
    
        (yyval.expr_attr)->nextlist = (yyvsp[-8].expr_attr)->falselist;

        //printf("iteration_statement -> for(expression_opt expression_opt expression_opt) statement\n");
    }
#line 4605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 2308 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("iteration_statement -> for (declaration expression_opt expression_opt) statement\n");
    }
#line 4613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 2314 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("expression_opt -> expression\n");
    }
#line 4621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 2321 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("jump_statement -> goto IDENTIFIER :\n");
    }
#line 4629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2325 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("jump_statement -> continue ;\n");
    }
#line 4637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2329 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("jump_statement -> break;\n");
    }
#line 4645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2333 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;

        if(curr_sym->lookup("retVal")->type.type_name.compare("void")==0)
        {
            Q_arr.emit(RETURN_VOID,"","","");
        }
        
        //printf("jump_statement -> return;\n");
    }
#line 4660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2344 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type1, type2, type3;
        type1 = curr_sym->lookup("retVal")->type;
        type2 = curr_sym->lookup((yyvsp[-1].expr_attr)->loc)->type;
        for(int i=0; i<sym->no_of_entries;i++)
	{
		if(sym->sym_table[i].id.compare((yyvsp[-1].expr_attr)->loc)==0)
			type3 = sym->sym_table[i].type;
	}
	if(type3.type_name.compare("function")==0)
	{	
		string t = curr_sym->gentemp(type1);
		Q_arr.emit(COPY, t, (yyvsp[-1].expr_attr)->loc, "");
		Q_arr.emit(RETURN,t,"","");
	}
	else if(type1.type_name == type2.type_name)
        {
            Q_arr.emit(RETURN, (yyvsp[-1].expr_attr)->loc, "", "");
        }
	
        //printf("jump_statement -> return expression;\n");

    }
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2375 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("translation_unit -> external_declaration\n");
    }
#line 4697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2379 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("translation_unit -> translation_unit external_declaration\n");
    }
#line 4705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 2386 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("external_declaration -> function_definition\n");
    }
#line 4713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 2390 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("external_declaration -> declaration\n");
    }
#line 4721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 2397 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");
    }
#line 4729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 2401 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //sym->nested_table = NULL;
        //curr_sym->nested_table = NULL;
        
        declaration *new_dec = (yyvsp[-1].decclist);
        int size = 0;
        type_inf *type = (yyvsp[-2].type_);
        if(type->type_name.compare("int")==0) size = 4;
        if(type->type_name.compare("double")==0) size = 8;
        if(type->type_name.compare("char")==0) size = 1;
        if(type->type_name.compare("void")==0) size = 0;
        //cout<<$2->type->type_name;
        symboltable *gt = &GT;
        Q_arr.emit(_FUNCTION_END,new_dec->dec_name,"","");
        symtab *func = gt->lookup((yyvsp[-1].decclist)->dec_name);
        //cout<<"func_def "<<$2->dec_name<<"\n";
        //func->nested_table = new symboltable;
        if(func->nested_table != NULL)
        {
            //cout<<"nested\n";
            //cout<<new_dec->dec_name<<" "<<new_dec->pointer_count<<type->type_name<<"\n";
            if((yyvsp[-1].decclist)->pointer_count>0)
                type->pointer_type = "ptr";
            symtab *ret = func->nested_table->lookup("retVal", type->type_name, (yyvsp[-1].decclist)->pointer_count);
            /*symtab *sp;
            for(sp = func->nested_table->sym_table; sp < &func->nested_table->sym_table[func->nested_table->no_of_entries]; sp++)
            {
                //cout<<s<<"\n";
                //cout<<"loop\n";
                if(!sp->id.empty() && !sp->id.compare($$->dec_name))
                {

                    sp->type = *type;
                    sp->pointer_count = $2->pointer_count;
                }
            }*/
        
            if((yyvsp[-1].decclist)->pointer_count>0)
            {
                ret->pointer_count = (yyvsp[-1].decclist)->pointer_count;
                ret->type.pointer_type = "ptr";
            }
            ret->offset = curr_sym->offset;
            ret->size = size;
            ret->init_val = NULL;
        }
        //curr_sym = func->nested_table;
        curr_sym = gt;
        (yyval.decclist) = (yyvsp[-1].decclist);
        //printf("function_definition -> declaration_specifiers declarator compound_statement\n");
    }
#line 4785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2456 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("declaration_list -> declaration\n");
    }
#line 4793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2460 "ass6_14CS10054.y" /* yacc.c:1646  */
    {
        //printf("declaration_list -> declaration_list declaration\n");
    }
#line 4801 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4805 "y.tab.c" /* yacc.c:1646  */
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
#line 2467 "ass6_14CS10054.y" /* yacc.c:1906  */

void yyerror(string s) 
{
	cout << s << endl;
}


