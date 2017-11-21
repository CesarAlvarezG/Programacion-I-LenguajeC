#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,suma,promedio;
    printf("Programa para el calculo del promedio de cinco notas\n");
    printf("Nota1 = ");
    scanf("%f",&a);
    printf("Nota2 = ");
    scanf("%f",&b);
    printf("Nota3 = ");
    scanf("%f",&c);
    printf("Nota4 = ");
    scanf("%f",&d);
    printf("Nota5 = ");
    scanf("%f",&e);
    suma=a+b+c+d+e;
    promedio=suma/5;
    printf("El promedio es: %.2f\n",promedio);
    if(promedio<=5&&promedio>=0)
    {
        if(promedio>=3)
        {
            printf("Gano la materia");
        }else{
            if(promedio<2)
            {
                printf("Perdio la materia");
            }else{
                    printf("Habilita la materia");
                }
        }

    }else{
            printf("Nota invalida");
        }
    return 0;
}
