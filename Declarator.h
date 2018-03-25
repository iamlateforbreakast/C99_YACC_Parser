

typedef struct Declarator
{
  unsigned int type;
  char * name;
  unsigned int state;
} Declarator;

extern Declarator declarator;

void Declarator_init()
{
  declarator.type = 0;
  if (declarator.name) 
  {
    free(declarator.name);
  }
}

void Declarator_setState(int state)
{
  declarator.state = state;
}
