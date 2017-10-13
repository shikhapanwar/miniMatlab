a.out: main.o lib.a
	g++ main.o ass2_15CS10060.c
main.o: main.c myl.h
	g++ -Wall -c main.c
lib.a: ass2_15CS10060.o
	ar -rcs lib.a ass2_15CS10060.o
ass2_15CS10060.o: ass2_15CS10060.c myl.h
	g++ -Wall -c ass2_15CS10060.c
clean:
	rm a.out main.o lib.a ass2_15CS10060.o
