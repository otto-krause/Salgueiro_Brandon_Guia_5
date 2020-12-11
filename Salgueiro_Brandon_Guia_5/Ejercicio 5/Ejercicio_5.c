#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num1;
    int num2;
    int AU=1;
    printf("ingrese un numero base: ");
    scanf("%d", &num1);
    printf("ingrese un numero exponente: ");
    scanf("%d", &num2);
    for (i=0;i<num2;i++)
    {
        AU=AU*num1;
    }
    printf("La potencia es: %d", AU);
    return 0;
}
