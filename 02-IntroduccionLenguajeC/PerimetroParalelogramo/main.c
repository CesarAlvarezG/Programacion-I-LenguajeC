#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,lado,a,b,perimetro;
    printf("Programa para el calculo del perimetro de un paralelogramo\n");
    printf("  _____\n");
    printf(" /    /\n");
    printf("/____/\n");
    printf("Base = ");
    scanf("%f",&base);
    printf("Lado = ");
    scanf("%f",&lado);
    a=base*2;
    b=lado*2;
    perimetro=a+b;
    printf("Perimetro = %f",perimetro);
    return 0;
}
