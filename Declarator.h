

typedef struct Declarator
{
  unsigned int type;
  char * name;
  unsigned int state;
} Declarator;

extern Declarator declarator;

void Declarator_init();

void Declarator_setState(int state);

void Declarator_setName(char * name);
