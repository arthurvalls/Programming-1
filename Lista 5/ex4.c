#include <stdio.h>
int main(void)
{
    int m1[5][5], m2[5][5], result[5][5], m;
    int i, j, k, soma = 0;
    
    printf("Insira a primeira matriz:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Insira a segunda matriz:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                soma += m1[i][k] * m2[k][j];
            }
            result[i][j] = soma;
            soma = 0;
        }
    }
    printf("Resultado da multiplicacao:\n");
    
    for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    return 0;
}