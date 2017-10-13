
%{
	/*
	Keyword
	identifier
	constant
	string_literal
	punctuator
	*/
	#define	IDENTIFIER 		0
	#define	CONSTANT 		1
	#define STRING_LITERAL	2
	#define PUNCTUATOR 		3
	#define	KEYWORD 		4
%}	
identifier 				{identifier_non_digit}({identifier_non_digit}|{digit})*
identifier_non_digit		[_A-Za-z]
digit 					[0-9]

constant    				({integer_constant}|{floating_constant}|{character_constant}|{zero_constant})
zero_constant 				0
integer_constant  			({non_zero_digit}{digit}*) 
non_zero_digit    			[1-9]
floating_constant 		{fractional_constant}({exponent_part})?
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

punctuator			\[|\]|\(|\)|\{|\}|\.|(->)|(\+\+)|(\-\-)|\&|\*|\+|\-|~|\!|\/|\%|(<<)|(>>)|<|>|(<=)|(>=)|(==)|(\!=)|\^|\||(\&\&)|(\|\|)|(=)|(\*=)|(\/=)|(\%=)|(\+=)|(\-=)|(<<=)|(>>=)|(\&=)|(\^=)|(\|=)|\,|\#|(\.\')
%%

"unsigned"			|
"break"				|
"return"			|
"void"		|
"case"		|
"float"		|
"short"		|
"char"		|
"for"		|
"signed"	|
"while"		|
"goto"		|
"Bool"		|
"continue"	|
"if"		|
"default"	|
"do"		|
"int"		|
"switch"	|
"double"	|
"long"		|
"else"		|
"Matrix"					{printf("Found Keyword '%s'", yytext); return KEYWORD;}

{string_literal}			{
								printf("Found string_literal '%s'", yytext);
								return STRING_LITERAL;
							}
{constant}					{
								printf("Found constant '%s'", yytext);
								return CONSTANT;
							}
"/*"						{
								printf("Found comment: /*");
								int i, last_i = 0;

								while( (i = input() ) && i !=EOF)
								{
									printf("%c",i);
									if(i == '/' && last_i =='*')
									break;
									last_i = i;

								}
								
							//if ( i== 0 || i == EOF )
									//yyerror("End of file in commnet\n");
						}


					
{punctuator}				{
							printf("Found punctuator '%s'", yytext);
							return PUNCTUATOR;
						}
{identifier}				{
							printf("Found identifier '%s'", yytext);
							return IDENTIFIER;
						}



%%

int main(int argc, char **argv)
{
	yylex();
}



