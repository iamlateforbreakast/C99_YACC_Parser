#lex C99_Parser.l
flex C99_Parser.l
#yacc -dy C99_Parser.y
bison -dy C99_Parser.y
#yacc C99_Parser.y
bison C99_Parser.y
gcc main.c lex.yy.c y.tab.c Declarator.c -o C99_Parser
