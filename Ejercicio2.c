#include <stdio.h>

int main()
{
    int dia;
    int hora;
    int min;
    int segdia, seghora, segmin, final;

    printf("Escriba los dias\n");
    scanf("%i",&dia);

    printf("Escriba las horas\n");
    scanf("%i",&hora);

    printf("Escriba los minutos\n");
    scanf("%i",&min);

    segdia=dia*24*3600;
    seghora=hora*3600;
    segmin=min*60;
    final=segdia+seghora+segmin;
    printf("Segundos totales: %i",final);
    return 0;
}
