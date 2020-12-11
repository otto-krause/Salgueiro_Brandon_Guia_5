#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I;
    int II;
    int nv;
    int co=0;
    int cot=0;
    int c=0;
    int f=0;
    int m=0;
    for (I=1;I<21;I++)
    {
        co=0;
        for(II=0;II<15;II++)
        {
            printf("\ningrese unidades vendidas: ");
            scanf("%d", &nv);
            co=co+nv;
            if (nv>c)
            {
                c=nv;

            }
            nv=0;
        }
        printf("\nEl vendedor %d vendio: %d\n", I, co);
        cot=cot+co;
        if (c>m)
        {
            m=c;
            f=I;
        }
        c=0;
    }
    printf("\ntotal vendido: %d", cot);
    printf("\nEl vendedor %d tuvo la mayor venta diaria: %d", f, m);
    return 0;
}
