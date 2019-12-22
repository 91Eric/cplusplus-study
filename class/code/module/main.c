#include <stdio.h>
#include "demo.h"


int main()
{
    Demo *d = Demo_create(1,2);
    if (!d)
    {
        printf("malloc failed\n");
        return -1;
    }
    printf("mi = %d\n", Demo_getI(d));
    // printf("mi = %d\n", d->m_i);
    Demo_free(&d);

}