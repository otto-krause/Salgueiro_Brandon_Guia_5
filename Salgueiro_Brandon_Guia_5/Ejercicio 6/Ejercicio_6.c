#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nota;
    float pf;
    float pro;
    int II=1;
    float proc;
    int I=1;
    for (I=1;I<31;I++)
    {
        printf("\nAlumno Numero %d", I);
        pf=0;
        Nota=0;
        pro=0;
        for (II=1;II<11;II++)
            {
            printf("\ningrese la nota de la materia %d : ", II);
            scanf("%d", &Nota);
            pro=pro+Nota;
        }
        pf=pro/10;
        printf("\nEl promedio del alumno es: %.3f\n", pf);
        proc=proc+pf;

    }
    proc=proc/30;
    printf("\nEl promedio del curso es: %.3f \n", proc);
    return 0;
    }
