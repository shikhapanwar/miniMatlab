
%{
	#include <stdio.h>
	#include <string.h>
	extern FILE* yyin;
	extern int yylex();
	extern int yyparse();
	void yyerror(const char* s);

%}


identifier 				{identifier_non_digit}({identifier_non_digit}|{digit})*
identifier_non_digit		[_A-Za-z]
digit 					[0-9]

constant    				({integer_constant}|{floating_constant}|{character_constant}|{zero_constant})
zero_constant 				0
integer_constant  			({non_zero_digit}{digit}*) 
non_zero_digit    			[1-9]
floating_constant 		({fractional_constant}({exponent_part})?)|({digit_sequence}({exponent_part})?)
fractional_constant 	((({digit_sequence})?\.{digit_sequence})|{digit_sequence}\.)
exponent_part  		 ((e({sign})?{digit_sequence})|(E{sign}?{digit_sequence}))
sign        [+-]
digit_sequence			{digit}+
character_constant 		\'{c_char_sequence}\'
c_char_sequence   		{c_char}{c_char}*
c_char        			(([^\'\\\n])|({escape_sequence}))
escape_sequence		[\'\"\?\\\a\b\f\r\t\v]


string_literal			\"({s_char_sequence})?\"
s_char_sequence		({s_char}{s_char}*)
s_char 				[^\'\"\\\n]|{escape_sequence}






punctuator			\[|\]|\(|\)|\.|\&|\*|\+|\-|~|\!|\/|\%|<|>|\#|\,

%%


"++"     	{return PLUS_PLUS;}
"--"		{return MINUS_MINUS;}
"->" 		{return ARROW;}
".'" 		{return NEW;}
"{"			{return LEFT_CURL;}
"}"			{return RCB;}
"<<"		{return LEFT_SHIFT;}
">>" 		{return RIGHTSH;}
"<="		{return LE;}
">="		{return GE;}
"==" 		{return ET;}
"!=" 		{return NE;}
"&&" 		{return DAND;}
"||"		{return DOR;}
"?"			{return QM;}
":"			{return COL;}
"^" 		{return POW;}
";"			{return SCOL;}
"|"  		{return OR;}
"=" 		{return ASSIGN;}
"*="		{return MULTA;}
"/="		{return DIVA;}
"+=" 		{return PLUSA;}
"-="		{return MINUSA;}
"%="		{return REMA;}
"^="		{return POWA;}
"<<="		{return LSA;}
">>="		{return RSA;}
"&="		{return ANDA;}
"|=" 		{return ORA;}

"unsigned"	{return UNSIGNED;}
"break"		{return BREAK;}
"return"	{return RETURN;}
"void"		{return VOID;}
"case"		{return CASE;}
"float"		{return FLOAT;}
"short"		{return SHORT;}
"char"		{return CHAR;}
"for"		{return FOR;}
"signed"	{return SIGNED;}
"while"		{return WHILE;}
"goto"		{return GOTO;}
"Bool"		{return BOOL;}
"continue"	{return CONTINUE;}
"if"		{return IF;}
"default"	{return DEFAULT;}
"do"		{return DO;}
"int"		{return INT;}
"switch"	{return SWITCH;}
"double"	{return DOUBLE;}
"long"		{return LONG;}
"else"		{return ELSE;}
"Matrix"	{return MATRIX;}

{string_literal}			{
								return STRING_LITERAL;
							}
{constant}					{

								return CONSTANT;
							}
"/*"						{

								int i, last_i = 0;

								while( (i = input() ) && i !=EOF)
								{
									
									if(i == '/' && last_i =='*')
									break;
									last_i = i;

								}
								
							//if ( i== 0 || i == EOF )
									//yyerror("End of file in commnet\n");
						}


"//"					{

						int i;

								while( (i = input() ) && i !=EOF)
								{

									if(i == '\n')
									break;					

								}
					}


{punctuator}				{
							return yytext[0];
						}
{identifier}				{ 
							return IDENTIFIER;
						}



%%




