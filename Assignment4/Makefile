
a.out : lex.yy.c y.tab.c ass4_15CS10060_translator.h ass4_15CS10060_translator.cxx
	g++ -Wall -std=c++11   ass4_15CS10060_translator.cxx y.tab.c lex.yy.c ass6_translator_test.cpp -lfl -o a.out 

y.tab.c: ass3_15CS10060.y lex.yy.c
	yacc ass3_15CS10060.y
lex.yy.c: ass3_15CS10060.l y.tab.h
	flex ass3_15CS10060.l
y.tab.h: ass3_15CS10060.y
	yacc -dtv ass3_15CS10060.y 

clean:
	rm a.out y.tab.h y.tab.c lex.yy.c