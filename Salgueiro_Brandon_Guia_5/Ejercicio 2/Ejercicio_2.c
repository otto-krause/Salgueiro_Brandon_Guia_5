#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float p=0;
    int num;
    int num1;
    int p1;
    printf("ingrese un valor: ");
    scanf("%d", &num);
    p1=num;
    for (i=0;i<14;i++)
    {
        num1=0;
        printf("\ningrese un valor: ");
        scanf("%d", &num1);
        p=p+num1;
        if (num>num1)
        {
        }
        else
        {
            num=num1;
        }

    }
    p=(p+p1)/15;
    printf("El promedio total es: %.3f\n", p);
    printf("El mayor es: %d", num);
    return 0;
}
