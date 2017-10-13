/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 26 "ass6_14CS10054.y" /* yacc.c:1909  */

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

#line 199 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
