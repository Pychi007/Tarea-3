#include <stdio.h>
#include <math.h>
int main()
{
    int segundos;
    int dia, hora, min;
    float res1, res2;
    int seg;
    printf("Ingrese los segundos\n");
    scanf("%i",&segundos);

    //Dias
    dia= truncl(segundos/86400);
    printf("Dias: %i\n",dia);
    res1=segundos-(dia*86400);
    //Horas
    hora=truncl(res1/3600);
    printf("Horas: %i\n",hora);
    res2=res1-(hora*3600);
    //Minutos
    min=truncl(res2/60);
    printf("Minutos: %i\n",min);
    seg=res2-(min*60);
    //Segundos
    printf("Segundos: %i\n",seg);
    return 0;
}
