#include <stdio.h>

int main()
{
    int dia1;
    int mes1;
    int ano1;
    int dia2;
    int mes2;
    int ano2;

printf("Insira o dia: ");
scanf("%d", &dia1);
printf("Insira o mes: ");
scanf("%d", &mes1);
printf("Insira o ano: ");
scanf("%d", &ano1);
printf("Insira o dia: ");
scanf("%d", &dia2);
printf("Insira o mes: ");
scanf("%d", &mes2);
printf("Insira o ano: ");
scanf("%d", &ano2);

    if (ano1 < ano2)
    {
        printf("Primeiro");
    }
    else if (ano1 > ano2)
    {
        printf("Segundo");
    }
    else
    {
        if (mes1 < mes2)
        {
            printf("Primeiro");
        }
        else if (mes1 > mes2)
        {
            printf("Segundo");
        }
        else
        {
            if (dia1 < dia2)
            {
                printf("Primeiro");
            }
            else if (dia1 > dia2)
            {
                printf("Segundo");
            }
            else
            {
                printf("mesmo dia");
            }
        }
    }
    return (0);
}