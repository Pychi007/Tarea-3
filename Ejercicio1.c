#include <stdio.h>

int main()
{
    float a;
    int des;
    float mult;
    float fin;
    float precio;
    printf("¿Cual es el precio del producto?\n");
    scanf("%f",&a);
    printf("¿Cual es el descuento del producto?\n");
    scanf("%i",&des);

    mult=des*0.01;
    fin=mult*a;
    precio=a-fin;
    printf("El precio final es: %f",precio);
    return 0;
}
