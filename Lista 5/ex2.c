#include <stdio.h>
int main(void)
{
    int m1[2][3], m2[2][3], result[2][3];
    int i, j, k;
    
    printf("Insira a primeira matriz:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Insira a segunda matriz:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = m1[i][k] + m2[k][j];
        }
    }

    printf("Resultado da soma:\n");
    
    for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    return 0;
}