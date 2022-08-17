#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int i, n, *pvetor;
    float media;
    /* Define um valor para n , scanf ou n = */
    scanf("%d", &n);
    /* aloca espaco na memoria */
    pvetor = (int *)malloc(n * sizeof(int));
    if (!pvetor)
    {
        puts(" Sem memória .");
        return 1;
    }
    /* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++)
    {
        scanf("%d", pvetor + i);
    }
    /* faco alguma coisa */
    int maior = 0;
    media = 0.0;
    for (i = 0; i < n; i++)
    {

        media += *(pvetor + i);
    }
    media = media / n;
    for (i = 0; i < n; i++)
    {
        if (*(pvetor + i) > media)
        {
            maior += 1;
        }
    }

    for (i = 0; i < n; i++) {
  
        for (int j = i + 1; j < n; j++) {
  
            if (*(pvetor + j) < *(pvetor + i)) {
  
                int k = *(pvetor + i);
                *(pvetor + i) = *(pvetor + j);
                *(pvetor + j) = k;
            }
        }
    }
    printf("\nO vetor em ordem crescente eh: ");
    for (i = 0; i < n; i++)
        printf("%d ", *(pvetor + i));

    printf("\nA media eh: %.2f\n", media);
    printf("\nExistem %d numeros maiores que a media\n", maior);

    /* aqui nao preciso mais de pvetor */
    free(pvetor);
    return 0;
}
