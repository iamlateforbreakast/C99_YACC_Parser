all: C99_Parser

C99_Parser: main.c C99_Parser.l C99_Parser.y Declarator.c Declarator.h
	flex C99_Parser.l
	bison -dy -Wcounterexamples C99_Parser.y
	bison C99_Parser.y
	gcc lex.yy.c y.tab.c Declarator.c DeclaratorList.c main.c -o C99_Parser

clean:
	rm -f C99_Parser *.o lex.yy.c y.tab.[ch] C99_Parser.tab.c
