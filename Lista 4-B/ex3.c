#include <stdlib.h>
#include <stdio.h>

int main()
{
    int quantidadeNotas = 0;
    float notas, media, mediaTotal;

    while (1)
    {

        printf("Insira sua nota: ");
        scanf("%f", &notas);
        if (notas < 0)
        {
            printf("Fim do programa.");
            exit(0);
        }
       
       
       media = media + notas;
       
        if (quantidadeNotas == 2)
        {
            mediaTotal = media / 3;
            printf("\nSua media: %.2f\n\n", mediaTotal);
            media = 0;
            quantidadeNotas = 0;
            continue;
        }
        quantidadeNotas++;
    }
    return 0;
}
