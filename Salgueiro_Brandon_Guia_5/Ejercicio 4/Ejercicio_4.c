#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ft;
    int num=0;
    int h=1;
    printf("ingrese un numero: ");
    scanf("%d",&ft);
    while(ft>0)
    {
         num=num+1;
        h=h*num;
        ft--;
    }
    printf("El factorial es: %d", h);

    return 0;
}
