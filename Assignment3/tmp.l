%{
int num_lines = 0;
int num_chars = 0;
%}
%%
\n ++num_lines; ++num_chars;
. ++num_chars;
%%
int main(int argc, char **argv)
{
yylex();
printf("# of lines = %d, # of chars = %d\n",
num_lines, num_chars );
}


working

/*

digits [0-9]
ltr [a-zA-Z]
alphanum [a-zA-Z0-9]
%%
(-|\+)*{digits}+ printf("found number: ’%s’\n", yytext);
{ltr}(_|{alphanum})* printf("found identifer: ’%s’\n", yytext);
’.’ printf("found character: {%s}\n", yytext);
. { /* absorb others */ }
%%
int main(int argc, char **argv)
{
yylex();
}

*/