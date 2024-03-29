/* main.c */

#include <stdio.h>
#include <stdlib.h>

#include "y.tab.h"
#include "DeclaratorList.h"

extern int yyparse();
extern void scanString(const char * buffer);

DeclaratorList declarartorList;

typedef struct {
  unsigned int length;
  unsigned char *buffer;
} String;

String* load_file(char * s)
{
  String *result = NULL;

  FILE* f=fopen(s ,"rb");
  if (f)
  {
    result = (String*)malloc(sizeof(String));
    fseek(f, 0, SEEK_END);
    result->length=ftell(f);
    fseek(f, 0 , SEEK_SET);
        
    result->buffer = (char*)malloc(result->length+1);
    fread(result->buffer,result->length, 1, f);
    result->buffer[result->length] = 0;
    fclose(f);
  }

  return result;
}

int main(int argc, char **argv)
{
  String* s;
  
  if (argc == 2)
  {
    s = load_file(argv[1]);
    if (!s)
    {
      printf("Error: Cannot open file %s\n", argv[1]);
      exit( 1 );
    }
    else
    {
//      yy_scan_string(s->buffer);
      scanString(s->buffer);
      yyparse();
    }
  }
  

  return 0;
}
