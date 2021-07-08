#include "pile.h"
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>

void cree(struct element **p)
{
    *p=(struct element*)malloc(sizeof(struct element));
    *p=NULL;
}
unsigned vide(struct element *p)
{
    return p==NULL;
}
int dernier(struct element *p)
{
    return p->cle;
}
void empiler(int x,struct element **p)
{ 
    struct element *e=(struct element*)malloc(sizeof(struct element));
    e->cle=x;
    e->suivant=*p;
    *p=e;
}
void depiler(struct element **p)
{
   assert(*p!=NULL);
   struct element *q=*p;
   *p=q->suivant;
   free(q);
}
