#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Insira nota 1: ");
    scanf("%f", &nota1);
    printf("Insira nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("Media: %0.2f\n", media);

    if (media < 0)
    {
        printf("Por favor insira numeros positivos");
    }
    else if (media >= 5)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }

    return 0;
}