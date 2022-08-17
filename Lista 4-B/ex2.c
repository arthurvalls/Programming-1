#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade=0, pessoas=0;
    int maisNovo, maisVelho;
    float mediaIdade;

    while(1)
    {
        printf("Insira idade: ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            printf("\nFim da leitura!\n");
            break;
        }
       
        mediaIdade = mediaIdade + idade;
       
        if (idade > maisVelho)
        {
            maisVelho = idade;
        }
        if (idade < maisNovo)
        {
            maisNovo = idade;
        }
        pessoas++;
    }
    mediaIdade = mediaIdade / pessoas;

    printf("Quantidade de pessoas: %d", pessoas);
    printf("\nIdade media do grupo: %.1f", mediaIdade);
    printf("\nMaior idade: %d", maisVelho);
    printf("\nMenor idade: %d", maisNovo);

    return 0;
}