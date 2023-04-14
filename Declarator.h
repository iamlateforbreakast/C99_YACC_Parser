
#ifndef _DECLARATOR_
#define _DECLARATOR_
typedef enum E_DeclarationType
{
  E_VARIABLE,
  E_FUNCTION,
  E_TYPE
} DeclarationType;

typedef struct Declarator
{
  DeclarationType type;
  char * name;
  unsigned int state;
} Declarator;

extern Declarator declarator;

void Declarator_init();

void Declarator_setState(int state);

void Declarator_setName(char * name);

#endif /* _DECLARATOR_ */
