all: parser_binary lexer_binary

lexer_binary: ass3_15CS10060_lexer.c y.tab.c 
	cc ass3_15CS10060_lexer.c -ly -ll -o lexer_binary
parser_binary: ass3_15CS10060_parser.c y.tab.c 
	cc ass3_15CS10060_parser.c -ly -ll -o parser_binary


y.tab.c: ass3_15CS10060.y lex.yy.c
	yacc ass3_15CS10060.y
lex.yy.c: ass3_15CS10060.l
	flex ass3_15CS10060.l

clean:
	rm lexer_binary parser_binary y.tab.c lex.yy.c
