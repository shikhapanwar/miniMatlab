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

#line 75 "y.tab.c" /* yacc.c:339  */

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
    CONSTANT = 259,
    STRING_LITERAL = 260,
    LEFT_CURL = 261,
    RCB = 262,
    ARROW = 263,
    PLUS_PLUS = 264,
    MINUS_MINUS = 265,
    NEW = 266,
    LEFT_SHIFT = 267,
    RIGHTSH = 268,
    LE = 269,
    GE = 270,
    ET = 271,
    NE = 272,
    DAND = 273,
    DOR = 274,
    QM = 275,
    COL = 276,
    POW = 277,
    OR = 278,
    SCOL = 279,
    ASSIGN = 280,
    MULTA = 281,
    DIVA = 282,
    REMA = 283,
    POWA = 284,
    PLUSA = 285,
    MINUSA = 286,
    LSA = 287,
    RSA = 288,
    ANDA = 289,
    ORA = 290,
    BREAK = 291,
    VOID = 292,
    CHAR = 293,
    INT = 294,
    FLOAT = 295,
    SHORT = 296,
    LONG = 297,
    UNSIGNED = 298,
    SIGNED = 299,
    RETURN = 300,
    IF = 301,
    DO = 302,
    SWITCH = 303,
    GOTO = 304,
    CASE = 305,
    FOR = 306,
    WHILE = 307,
    BOOL = 308,
    CONTINUE = 309,
    DEFAULT = 310,
    ELSE = 311,
    MATRIX = 312,
    DOUBLE = 313
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define LEFT_CURL 261
#define RCB 262
#define ARROW 263
#define PLUS_PLUS 264
#define MINUS_MINUS 265
#define NEW 266
#define LEFT_SHIFT 267
#define RIGHTSH 268
#define LE 269
#define GE 270
#define ET 271
#define NE 272
#define DAND 273
#define DOR 274
#define QM 275
#define COL 276
#define POW 277
#define OR 278
#define SCOL 279
#define ASSIGN 280
#define MULTA 281
#define DIVA 282
#define REMA 283
#define POWA 284
#define PLUSA 285
#define MINUSA 286
#define LSA 287
#define RSA 288
#define ANDA 289
#define ORA 290
#define BREAK 291
#define VOID 292
#define CHAR 293
#define INT 294
#define FLOAT 295
#define SHORT 296
#define LONG 297
#define UNSIGNED 298
#define SIGNED 299
#define RETURN 300
#define IF 301
#define DO 302
#define SWITCH 303
#define GOTO 304
#define CASE 305
#define FOR 306
#define WHILE 307
#define BOOL 308
#define CONTINUE 309
#define DEFAULT 310
#define ELSE 311
#define MATRIX 312
#define DOUBLE 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    70,    65,     2,
      59,    60,    66,    67,    64,    68,    63,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      71,     2,    72,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    24,    25,    26,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    42,    43,    47,    48,    49,
      50,    54,    55,    56,    57,    61,    65,    66,    67,    68,
      72,    73,    74,    78,    79,    80,    84,    85,    86,    87,
      88,    92,    93,    94,    98,    99,   103,   104,   108,   109,
     113,   114,   118,   119,   123,   124,   128,   129,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   147,
     148,   152,   156,   157,   161,   165,   166,   169,   170,   174,
     175,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   193,   194,   198,   199,   200,   201,   202,   203,
     204,   208,   209,   213,   217,   218,   222,   223,   227,   228,
     232,   233,   237,   238,   242,   243,   244,   245,   249,   253,
     254,   258,   259,   263,   264,   265,   266,   267,   268,   272,
     273,   274,   278,   279,   283,   284,   288,   289,   293,   294,
     297,   298,   299,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   319,   320,   321,
     322,   323,   327,   328,   332,   333,   337,   338,   342,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "LEFT_CURL", "RCB", "ARROW", "PLUS_PLUS",
  "MINUS_MINUS", "NEW", "LEFT_SHIFT", "RIGHTSH", "LE", "GE", "ET", "NE",
  "DAND", "DOR", "QM", "COL", "POW", "OR", "SCOL", "ASSIGN", "MULTA",
  "DIVA", "REMA", "POWA", "PLUSA", "MINUSA", "LSA", "RSA", "ANDA", "ORA",
  "BREAK", "VOID", "CHAR", "INT", "FLOAT", "SHORT", "LONG", "UNSIGNED",
  "SIGNED", "RETURN", "IF", "DO", "SWITCH", "GOTO", "CASE", "FOR", "WHILE",
  "BOOL", "CONTINUE", "DEFAULT", "ELSE", "MATRIX", "DOUBLE", "'('", "')'",
  "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'/'", "'%'",
  "'<'", "'>'", "$accept", "primary_expression", "postfix_expression",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    40,
      41,    91,    93,    46,    44,    38,    42,    43,    45,    47,
      37,    60,    62
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     120,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     5,   120,   112,   -67,   -67,   -67,   -67,
      23,   -29,    -3,   -67,   685,     4,     0,   -67,   -67,   -67,
     -67,   -17,   -67,   -67,    23,   244,    41,   -67,     5,   -67,
     693,   644,   262,     4,   -67,   -67,     3,    28,   -67,   -67,
     -67,   641,   641,   -67,    36,   455,    10,   376,    25,    90,
     641,    32,    42,    81,   119,   641,   -67,   -67,   -67,   -67,
     -67,   652,   727,   641,   -67,    44,    11,   169,     9,   180,
      72,   144,   151,   173,   214,   -67,   -67,     6,   -67,   -67,
     -67,   -67,   310,   -67,   -67,   -67,   -67,   -67,   -67,    29,
     -67,   -67,   -67,   -67,   -67,   -67,    23,   138,   140,   -67,
     -12,   146,   153,   376,   -67,   -67,   -67,   -67,    12,   641,
     166,   641,   228,   -67,   -67,   238,   410,   641,   -67,   376,
      82,   259,   -67,   -67,   -67,   328,   641,   260,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   641,
     -67,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     -67,   641,   -67,   -67,   641,   261,   -67,     7,   205,    41,
      -8,   -67,   -67,   -67,   120,   -67,   267,   211,   213,   -67,
     -67,   107,   216,   108,   -67,   376,   477,    34,   487,   115,
     -67,   -67,   -67,   -67,   116,   -67,   126,   -67,   -67,   -67,
     -67,   -67,    44,    44,    11,    11,   169,   169,   169,   169,
       9,     9,   180,    72,   144,   151,   173,   -10,   -67,   215,
     -67,   -67,    29,    29,   -67,   -67,   -67,   -67,   -67,   -67,
     641,   376,   641,   376,   -67,   499,    38,   523,   565,    51,
     376,   -67,   641,   -67,   641,   -67,   205,   -67,    41,   217,
     220,   123,   -67,   376,   139,   575,   589,    80,   376,   145,
     599,   -67,   -67,   -67,   -67,   -67,   376,   -67,   -67,   376,
     376,   150,   376,   164,   609,   -67,   376,   376,   172,   -67,
     -67,   -67,   376,   -67,   376,   376,   179,   -67,   -67,   376,
     -67,   -67,   -67,   376,   -67,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    81,    82,    84,    86,    83,    85,    90,    89,    91,
      88,    87,   165,     0,    75,     0,   162,   164,    94,    72,
       0,   101,     0,    77,    79,    92,     0,    76,    74,     1,
     163,     0,   102,    73,     0,     0,     0,   168,     0,   166,
       0,     0,     0,    93,    95,    78,    79,     2,     3,     4,
     132,     0,     0,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    24,
       6,    17,    25,     0,    26,    30,    33,    36,    41,    44,
      46,    48,    50,    52,    54,    56,    69,     0,   136,   137,
     123,   124,     0,   134,   125,   126,   127,   128,     2,     0,
     110,    80,   169,   167,   108,    99,   107,     0,   103,   104,
       0,     0,     0,     0,    18,    19,   159,   160,     0,     0,
       0,     0,     0,    25,    71,     0,     0,     0,   158,     0,
       0,     0,    12,    13,    14,     0,     0,     0,    58,    59,
      60,    61,    67,    62,    63,    64,    65,    66,    68,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,   133,   135,     0,     0,   114,     0,   112,     0,
       0,   119,   106,    98,     0,   100,     0,     0,     0,   129,
     161,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     131,     5,    11,     9,     0,    15,     0,    10,    57,    27,
      28,    29,    31,    32,    34,    35,    39,    40,    37,    38,
      42,    43,    45,    47,    49,    51,    53,     0,    70,     0,
     122,   111,     0,     0,   115,   118,   120,   105,   109,    96,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
       0,     8,     0,     7,     0,   121,   113,   116,     0,     0,
     140,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,   143,    16,    55,   117,    97,     0,   144,   152,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,   141,
     149,   151,     0,   150,     0,     0,     0,   154,   155,     0,
     146,   147,   148,     0,   153,   145
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -67,   -67,   -33,   -67,   -66,    86,    88,    97,
      98,   114,   135,   141,   137,   154,   -67,   -38,   -32,   -67,
     -53,   131,   -15,     1,   -67,   -67,   272,   -67,    -7,   282,
     297,   -67,   -67,   142,   -67,   -31,   -67,    91,    92,   -67,
     155,   -57,   -67,    17,   -67,   247,   -67,   -67,   -67,   -67,
     -67,   321,   -67,   -67
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    70,    71,   204,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   149,
      87,   125,    12,    38,    28,    22,    23,    14,    46,    25,
      26,   107,   108,   109,   110,   176,   177,   178,   179,   180,
     181,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      15,    16,    17,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     120,    13,   118,    18,   100,   101,    24,   150,    18,    37,
     112,   254,   130,    31,   231,    27,    13,   235,   114,   115,
      88,    33,   124,   158,   159,   102,    18,   123,    36,    19,
     170,   232,    98,    48,    49,    99,   190,    21,    51,    52,
     123,    39,   106,    44,    98,    48,    49,    99,   185,   113,
      51,    52,   186,   174,   171,   175,   189,   103,   247,    20,
     116,    34,   265,    41,    20,    42,   191,   100,   193,   119,
     171,    21,   200,   197,   199,   270,   171,    88,   154,   155,
     160,   161,    20,   206,   121,   209,   210,   211,    65,    21,
     174,   126,   175,   122,    66,    67,    68,    69,   171,   182,
      65,   127,   171,   205,   284,   128,    66,    67,    68,    69,
     151,   198,    29,   152,   153,   171,   227,   208,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   124,   164,   244,   228,
     129,   123,   201,   246,   171,   249,   171,   100,   234,     1,
       2,     3,     4,     5,     6,     7,     8,     1,     2,     3,
       4,     5,     6,     7,     8,     9,   165,   241,   243,    10,
      11,   171,   171,     9,   166,   250,   251,    10,    11,   171,
     252,   156,   157,   277,   260,   106,   262,   171,   253,   261,
     171,   167,   264,   271,   267,   269,   162,   163,   183,   279,
     100,   100,   257,   171,   184,   286,   278,   187,   259,   171,
     292,   285,   281,   283,   171,   188,   273,   288,   192,   289,
     272,   123,   290,   291,   294,   293,   100,   274,   171,   297,
     298,   296,   299,   168,   169,   300,   171,   301,   302,   303,
     212,   213,   304,   171,   214,   215,   305,    47,    48,    49,
      35,    50,   194,    51,    52,   216,   217,   218,   219,   195,
     220,   221,   202,   207,   230,    98,    48,    49,    53,   233,
     238,    51,    52,   239,   240,   242,   276,   255,   222,   275,
      54,     1,     2,     3,     4,     5,     6,     7,     8,    55,
      56,    57,    58,    59,    60,    61,    62,     9,    63,    64,
     223,    10,    11,    65,   225,   229,    45,   224,    43,    66,
      67,    68,    69,    47,    48,    49,    35,   172,    32,    51,
      52,    65,   226,   256,   111,   258,   237,    66,    67,    68,
      69,    98,    48,    49,    53,   236,    30,    51,    52,   173,
       0,     0,     0,     0,     0,     0,    54,     1,     2,     3,
       4,     5,     6,     7,     8,    55,    56,    57,    58,    59,
      60,    61,    62,     9,    63,    64,     0,    10,    11,    65,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    47,
      48,    49,    35,     0,     0,    51,    52,    65,   203,     0,
       0,     0,     0,    66,    67,    68,    69,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    98,    48,    49,     0,     0,     0,    51,
      52,    55,    56,    57,    58,    59,    60,    61,    62,     0,
      63,    64,     0,     0,   196,    65,     0,     0,     0,     0,
       0,    66,    67,    68,    69,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,    98,    48,
      49,     0,     0,     9,    51,    52,     0,    10,    11,    65,
       0,     0,     0,     0,     0,    66,    67,    68,    69,   117,
      98,    48,    49,     0,     0,     0,    51,    52,     0,     0,
      98,    48,    49,     0,     0,     0,    51,    52,     0,     0,
       0,   245,    98,    48,    49,     0,     0,     0,    51,    52,
       0,   248,     0,     0,    65,     0,     0,     0,     0,     0,
      66,    67,    68,    69,     0,     0,    98,    48,    49,     0,
       0,     0,    51,    52,     0,     0,    65,     0,     0,     0,
       0,     0,    66,    67,    68,    69,    65,   266,     0,     0,
       0,     0,    66,    67,    68,    69,     0,     0,    65,   263,
       0,     0,     0,     0,    66,    67,    68,    69,    98,    48,
      49,     0,     0,     0,    51,    52,     0,     0,    98,    48,
      49,     0,    65,     0,    51,    52,     0,     0,    66,    67,
      68,    69,    98,    48,    49,     0,     0,     0,    51,    52,
       0,     0,    98,    48,    49,     0,     0,     0,    51,    52,
       0,     0,    98,    48,    49,     0,     0,     0,    51,    52,
       0,     0,     0,     0,    65,   268,     0,     0,     0,     0,
      66,    67,    68,    69,    65,   280,     0,     0,     0,     0,
      66,    67,    68,    69,    98,    48,    49,   104,    65,   282,
      51,    52,     0,     0,    66,    67,    68,    69,    65,   287,
     131,   132,   133,   134,    66,    67,    68,    69,    65,   295,
       0,     0,     0,     0,    66,    67,    68,    69,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,    35,     0,     0,     0,     0,     0,     9,     0,    35,
      65,    10,    11,     0,   105,     0,    66,    67,    68,    69,
      36,   135,     0,   136,     0,   137,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       1,     2,     3,     4,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,     0,     0,     9,     0,     0,     0,
      10,    11,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148
};

static const yytype_int16 yycheck[] =
{
      57,     0,    55,     3,    36,    36,    13,    73,     3,    24,
      42,    21,    65,    20,     7,    14,    15,    25,    51,    52,
      35,    24,    60,    14,    15,    40,     3,    60,    25,    24,
      24,    24,     3,     4,     5,     6,    24,    66,     9,    10,
      73,    24,    41,    60,     3,     4,     5,     6,    60,    21,
       9,    10,    64,    61,    64,    63,   113,    40,    24,    59,
      24,    64,    24,    59,    59,    61,   119,    99,   121,    59,
      64,    66,   129,   126,   127,    24,    64,    92,    67,    68,
      71,    72,    59,   136,    59,   151,   152,   153,    59,    66,
      61,    59,    63,     3,    65,    66,    67,    68,    64,   106,
      59,    59,    64,   135,    24,    24,    65,    66,    67,    68,
      66,   126,     0,    69,    70,    64,   169,   149,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   174,    65,   195,   171,
      21,   174,    60,   196,    64,   198,    64,   179,   179,    37,
      38,    39,    40,    41,    42,    43,    44,    37,    38,    39,
      40,    41,    42,    43,    44,    53,    22,    60,    60,    57,
      58,    64,    64,    53,    23,    60,    60,    57,    58,    64,
      64,    12,    13,    60,   241,   184,   243,    64,    62,   242,
      64,    18,   245,   250,   247,   248,    16,    17,    60,    60,
     232,   233,   233,    64,    64,    60,   263,    61,   240,    64,
      60,   268,   265,   266,    64,    62,   254,   270,    52,   276,
     252,   254,   279,   280,    60,   282,   258,   258,    64,   286,
     287,   284,    60,    19,    20,   292,    64,   294,   295,    60,
     154,   155,   299,    64,   156,   157,   303,     3,     4,     5,
       6,     7,    24,     9,    10,   158,   159,   160,   161,    21,
     162,   163,     3,     3,     3,     3,     4,     5,    24,    64,
       3,     9,    10,    62,    61,    59,    56,    62,   164,    62,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     165,    57,    58,    59,   167,   174,    34,   166,    26,    65,
      66,    67,    68,     3,     4,     5,     6,     7,    21,     9,
      10,    59,   168,   232,    62,   233,   184,    65,    66,    67,
      68,     3,     4,     5,    24,   180,    15,     9,    10,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,     3,
       4,     5,     6,    -1,    -1,     9,    10,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,     3,     4,     5,    -1,    -1,    -1,     9,
      10,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    -1,    -1,    24,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    53,     9,    10,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    24,
       3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    24,     3,     4,     5,    -1,    -1,    -1,     9,    10,
      -1,    24,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,    10,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    59,    24,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,     3,     4,
       5,    -1,    -1,    -1,     9,    10,    -1,    -1,     3,     4,
       5,    -1,    59,    -1,     9,    10,    -1,    -1,    65,    66,
      67,    68,     3,     4,     5,    -1,    -1,    -1,     9,    10,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,    10,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,     3,     4,     5,     3,    59,    60,
       9,    10,    -1,    -1,    65,    66,    67,    68,    59,    60,
       8,     9,    10,    11,    65,    66,    67,    68,    59,    60,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    53,    -1,     6,
      59,    57,    58,    -1,    60,    -1,    65,    66,    67,    68,
      25,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      37,    38,    39,    40,    41,    42,    43,    44,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    38,    39,    40,    41,    42,    43,    44,    53,
      57,    58,    95,    96,   100,   123,   124,   125,     3,    24,
      59,    66,    98,    99,   101,   102,   103,    96,    97,     0,
     124,   101,   103,    24,    64,     6,    25,    95,    96,   116,
     126,    59,    61,   102,    60,    99,   101,     3,     4,     5,
       7,     9,    10,    24,    36,    45,    46,    47,    48,    49,
      50,    51,    52,    54,    55,    59,    65,    66,    67,    68,
      74,    75,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    93,    95,   114,
     115,   116,   117,   118,   119,   120,   121,   122,     3,     6,
      91,   108,    95,   116,     3,    60,    96,   104,   105,   106,
     107,    62,    91,    21,    77,    77,    24,    24,    93,    59,
     114,    59,     3,    77,    90,    94,    59,    59,    24,    21,
      93,     8,     9,    10,    11,    59,    61,    63,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    92,
      79,    66,    69,    70,    67,    68,    12,    13,    14,    15,
      71,    72,    16,    17,    65,    22,    23,    18,    19,    20,
      24,    64,     7,   118,    61,    63,   108,   109,   110,   111,
     112,   113,   101,    60,    64,    60,    64,    61,    62,   114,
      24,    93,    52,    93,    24,    21,    24,    93,    95,    93,
     114,    60,     3,    60,    76,    91,    93,     3,    91,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    82,
      83,    83,    84,    85,    86,    87,    88,    93,    91,    94,
       3,     7,    24,    64,   108,    25,   113,   106,     3,    62,
      61,    60,    59,    60,   114,    24,    93,    24,    24,    93,
      60,    60,    64,    62,    21,    62,   110,   108,   111,    91,
     114,    93,   114,    60,    93,    24,    24,    93,    60,    93,
      24,   114,    91,    90,   108,    62,    56,    60,   114,    60,
      60,    93,    60,    93,    24,   114,    60,    60,    93,   114,
     114,   114,    60,   114,    60,    60,    93,   114,   114,    60,
     114,   114,   114,    60,   114,   114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    78,    79,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    83,    83,    83,    83,
      83,    84,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    95,    95,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   103,   103,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     3,     2,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     2,     0,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     5,     7,     4,     3,
       4,     1,     2,     1,     1,     3,     2,     1,     1,     3,
       1,     3,     1,     3,     1,     2,     3,     4,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       5,     7,     5,     5,     6,     9,     8,     8,     8,     7,
       7,     7,     6,     8,     7,     7,     6,     3,     2,     2,
       2,     3,     1,     2,     1,     1,     3,     4,     1,     2
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
#line 23 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf("RULE : primary_expression \t->\t\t identifier\n");}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 24 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf("RULE : primary_expression \t->\t\t constant\n");}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf("RULE : primary_expression \t->\t string_literal\n");}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 26 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf("primary_expression -\t->\t (expression)\n");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 30 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf("RULE:\t postfix_expression \t->\tprimary_expression\n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 31 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression [ expression ]\n");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 32 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( argument_expression_list_opt )\n");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 33 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression ( )\n");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 34 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression . identifier\n");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 35 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression -> identifier\n");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 36 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression ++\n");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 37 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression --\n");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 38 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpostfix_expression \t->\t postfix_expression .'");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 42 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\targument_expression_list \t->\t assignment_expression\n");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 43 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\targument_expression_list \t->\t argument_expression_list , assignment_expression\n");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 47 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_expression \t->\t postfix_expression\n");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 48 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_expression \t->\t ++ unary_expression\n");}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 49 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_expression \t->\t -- unary_expression\n");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 50 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_expression \t->\t unary_operator cast_expression\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 54 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_operator \t->\t & \n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 55 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_operator \t->\t * \n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 56 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_operator \t->\t + \n");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 57 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tunary_operator \t->\t - \n");}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 61 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tcast_expression \t->\t unary_expression\n");}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 65 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tmultiplicative_expression \t->\t cast_expression\n");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 66 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression * cast_expression\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 67 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression / cast_expression\n");}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 68 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tmultiplicative_expression \t->\t multiplicative_expression %% cast_expression\n");}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 72 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tadditive_expression \t->\t multiplicative_expression\n");}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 73 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tadditive_expression \t->\t additive_expression + multiplicative_expression\n");}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 74 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tadditive_expression \t->\t additive_expression - multiplicative_expression\n");}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 78 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tshift_expression \t->\t additive_expression\n");}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 79 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tshift_expression \t->\t shift_expression << additive_expression\n");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 80 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tshift_expression \t->\t shift_expression >> additive_expression\n");}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 84 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\trelational_expression \t->\t shift_expression\n");}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 85 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\trelational_expression \t->\t relational_expression < shift_expression\n");}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 86 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\trelational_expression \t->\t relational_expression > shift_expression\n");}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\trelational_expression \t->\t relational_expression <= shift_expression\n");}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 88 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\trelational_expression \t->\t relational_expression >= shift_expression\n");}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 92 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tequality_expression \t->\t relational_expression\n");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 93 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tequality_expression \t->\t equality_expression == relational_expression\n");}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 94 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tequality_expression \t->\t equality_expression != relational_expression\n");}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 98 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tand_expression \t->\t equality_expression\n");}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 99 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tand_expression \t->\t and_expression & equality_expression\n");}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texclusive_or_expression \t->\t and_expression\n");}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texclusive_or_expression \t->\t exclusive_or_expression ^ and_expression\n");}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 108 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinclusive_or_expression \t->\t exclusive_or_expression\n");}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 109 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinclusive_or_expression \t->\t inclusive_or | exclusive_or_expression\n");}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 113 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlogical_and_expression \t->\t inclusive_or_expression\n");}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 114 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlogical_and_expression \t->\t logical_and_expression && inclusive_or_expression\n");}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 118 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlogical_or_expression \t->\t logical_and_expression\n");}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlogical_or_expression \t->\t logical_or_expression || logical_and_expression\n");}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 123 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tconditional_expression \t->\t logical_or_expression\n");}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tconditional_expression \t->\t logical_or_expression ? expression : conditional_expression\n");}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 128 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_expression \t->\t conditional_expression\n");}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 129 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_expression \t->\t unary_expression assignment_operator assignment_expression\n");}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 133 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t = \n");}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t *= \n");}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 135 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t /= \n");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 136 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t %%= \n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 137 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t += \n");}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 138 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t -= \n");}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 139 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t <<= \n");}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 140 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t >>= \n");}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 141 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t &=  \n");}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 142 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t ^= \n");}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 143 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tassignment_operator \t->\t |=  \n");}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 147 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texpression \t->\t assignment_expression\n");}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 148 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texpression \t->\t expression, assignment_expression\n");}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 152 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tconstant_expression \t->\t conditional_expression\n");}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration \t->\t declaration_specifiers ;\n");}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration \t->\t declaration_specifiers init_declarator_list ; \n");}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 161 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_specifiers \t->\t type_specifiers declaration_specifiers_opt\n");}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_specifiers_opt \t->\t empty\n");}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_specifiers_opt \t->\t declaration_specifiers\n");}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 169 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinit_declarator_list \t->\t init_declarator\n");}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 170 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinit_declarator_list \t->\t init_declarator_list, init_declarator\n");}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinit_declarator \t->\t declarator\n");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 175 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinit_declarator \t->\t declarator = initializer\n");}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 179 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t  VOID\n");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 180 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t CHAR \n");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 181 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t SHORT \n");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 182 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t INT \n");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 183 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t LONG \n");}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t FLOAT \n");}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 185 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t DOUBLE \n");}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 186 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t MATRIX \n");}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 187 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t SIGNED  \n");}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t UNSIGNED \n");}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 189 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttype_specifiers \t->\t BOOL  \n");}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclarator \t->\t direct_declarator\n");}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclarator \t->\t pointer_opt direct_declarator\n");}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 198 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t identifier\n");}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 199 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t (declarator)");}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 200 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t direct_declarator[]");}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 201 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t direct_declarator[assignment_expression]\n");}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 202 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t direct_declarator(parameter_type_list)\n");}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 203 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t direct_declarator()\n");}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 204 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdirect_declarator \t->\t direct_declarator(identifier_list)\n");}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpointer \t->\t *\n");}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 209 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tpointer \t->\t * pointer\n");}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 213 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tparameter_type_list \t->\t parameter_list\n");}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 217 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tparameter_list \t->\t parameter_declaration\n");}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 218 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tparameter_list \t->\t parameter_list, parameter_declaration\n");}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 222 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers declarator\n");}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 223 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tparameter_declaration \t->\t declaration_specifiers\n");}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tidentifier_list \t->\t identifier\n");}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 228 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tidentifier_list \t->\t identifier_list, identifier\n");}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 232 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer \t->\t assignment_expression \n");}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 233 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer \t->\t { initializer_row_list } \n");}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 237 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row_list \t->\t initializer_row\n");}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 238 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row_list \t->\t initializer_row_list ; initializer_row \n");}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 242 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t initializer\n");}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 243 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t designation initializer\n");}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 244 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t initializer_row, initializer\n");}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 245 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tinitializer_row \t->\t initializer_row, designation initializer\n");}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 249 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignation \t->\t designator_list = \n");}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 253 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator_list \t->\t designator\n");}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 254 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator_list \t->\t designator_list designator\n");}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 258 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator \t->\t [ constant_expression ] \n");}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 259 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdesignator \t->\t .identifier\n");}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 263 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t labeled_statement\n");}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 264 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t compound_statement\n");}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 265 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t expression_statement\n");}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 266 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t selection_statement\n");}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 267 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t iteration_statement\n");}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 268 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tstatement \t->\t jump_statement\n");}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 272 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlabeled_statement \t->\t identifier : statement\n");}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 273 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlabeled_statement \t->\t case constant_expression : statement\n");}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 274 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tlabeled_statement \t->\t default : statement\n");}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 278 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tcompound_statement \t->\t {}\n");}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 279 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tcompound_statement \t->\t { block_item_list } \n");}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 283 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item_list \t->\t block_item\n");}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 284 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item_list \t->\t block_item_list block_item\n");}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 288 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item \t->\t declaration\n");}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 289 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tblock_item \t->\t statement\n");}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 293 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texpression_statement \t->\t ;");}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 294 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texpression_statement \t->\t expression;");}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 297 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tselection_statement \t->\t if(expression) statement\n");}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 298 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tselection_statement \t->\t if(expression) statement else statement\n");}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 299 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tselection_statement \t->\t switch(expression) statement\n");}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 303 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t while(expression) statement\n");}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 304 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t do statement while (expression)\n");}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 305 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;expression;expression)\n");}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 306 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;expression;expression)\n");}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 307 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;;expression)\n");}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 308 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;expression;)\n");}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 309 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;;expression)\n");}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 310 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(expression;;)\n");}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 311 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;expression;)\n");}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 312 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(;;)\n");}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 313 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration expression; expression)\n");}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 314 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration;expression)\n");}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 315 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration expression;)\n");}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 316 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\titeration_statement \t->\t for(declaration ; )\n");}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 319 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t goto identifier;\n");}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 320 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t continue;\n");}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 321 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t break;\n");}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 322 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t return;\n");}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 323 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tjump_statement \t->\t return expression;\n");}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 327 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttranslation_unit \t->\t external_decalaration\n");}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 328 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\ttranslation_unit \t->\t translation_unit external_decalaration\n");}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 332 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texternal_decalaration \t->\t function_definition\n");}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 333 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\texternal_decalaration \t->\t declaration\n");}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 337 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tfunction_definition \t->\t declaration_specifiers declarator compound_statement\n");}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 338 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tfunction_definition \t->\t declaration_specifiers declarator declaration_list compound_statement\n");}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 342 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_list \t->\t declaration\n");}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 343 "ass3_15CS10060.y" /* yacc.c:1646  */
    {printf(" RULE:\tdeclaration_list \t->\t declaration_list declaration\n");}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2648 "y.tab.c" /* yacc.c:1646  */
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
#line 346 "ass3_15CS10060.y" /* yacc.c:1906  */

#include "lex.yy.c"
