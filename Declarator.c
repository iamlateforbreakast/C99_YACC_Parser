#include "Declarator.h"

Declarator declarator;

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

void Declarator_setName(char * name)
{
}
