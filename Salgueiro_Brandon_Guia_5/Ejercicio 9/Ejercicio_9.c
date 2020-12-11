#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I;
    int num;
    int mas=0;
    int menos=0;
    for (I=1;I<21;I++)
    {
        printf("\nIngrese su sueldo de la persona %d : ", I);
        scanf("%d", &num);
        if (num>2000)
        {
            mas=mas+1;
        }
        else
        {
            menos=menos+1;
        }
    }
    printf("\nLos que ganan mas de 2000 son: %d", mas);
    printf("\nLos que ganan menos de 2000 son: %d", menos);
    return 0;
}
