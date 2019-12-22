
#include "demo.h"
#include <malloc.h>

typedef struct Demo_struct
{
    int m_i;
    int m_j;
}Demo_St, *PDemo_St;

Demo* Demo_create(int i, int j)
{
    PDemo_St ret = (PDemo_St)malloc(sizeof(Demo_St));

    if (ret != NULL)
    {
        ret->m_i = i;
        ret->m_j = j;
    }

    return ret;
}

int Demo_getI(Demo* pthis)
{
    return ((PDemo_St)pthis)->m_i;
}

int Demo_getJ(Demo* pthis)
{
    return ((PDemo_St)pthis)->m_j;
}

void Demo_free(Demo **pthis)
{
    if (*pthis != NULL)
    {
        free(*pthis);
        *pthis = NULL;
    }
}

