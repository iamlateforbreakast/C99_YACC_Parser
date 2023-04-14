#ifndef _DECLARATORLIST_
#define _DECLARATORLIST_

#include "Declarator.h"

typedef struct DeclaratorList DeclaratorList;

typedef struct DeclaratorList
{
  Declarator * declarator;
  DeclaratorList *next;
} DeclaratorList;

#endif /* _DECLARATORLIST_ */
