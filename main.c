#include "pile.h"
#include <stdio.h>


void main()
{
    struct element *p;
    cree(&p);
    empiler(10,&p);
    printf("%d",dernier(p));
}
/* this shit is hard to manipulate */
/* sometimes not reallu that hard */
