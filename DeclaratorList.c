#include "DeclaratorList.h"
#include "Declarator.h"


typedef struct DeclaratorList
{
  Declarator * declarator;
  DeclaratorList *next;
} DeclaratorList;

DeclaratorList * DeclaratorList_new()
{
}

void DeclaratorList_add(Declarator * declarator)
{
  #
}

void DeclaratorList_print()
{
}
