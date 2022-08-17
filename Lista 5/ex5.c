#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, x[5], y[5],z[5], soma[5], vezes[5], inter[5], count = 0;
    printf("Este programa executa operacoes com os vetores x e y\nInsira os numeros de tais vetores(nao insira numeros repetidos para o mesmo vetor).\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Insira um numero para x: ");
        scanf("%d", &x[i]);

        printf("Insira um numero para y: ");
        scanf("%d", &y[i]);

        soma[i] = x[i] + y[i];
        vezes[i] = x[i] * y[i];
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (x[i] == x[j])
            {
                printf("Voce inseriu dois numeros iguais no mesmo vetor.");
                exit(0);
            }
            else if (y[i] == y[j])
            {
                printf("Voce inseriu dois numeros iguais no mesmo vetor.");
                exit(0);
            }
        }
    }
    printf("\nSomando todos os numeros de x com seus corresnpondentes em y obtemos: ");
    for (i = 0; i < 5; i++)
        printf("%d ", soma[i]);

    printf("\n\nMultiplicando todos os numeros de 'x' com seus corresnpondentes em 'y' obtemos: ");
    for (i = 0; i < 5; i++)
        printf("%d ", vezes[i]);
    printf("\n\nEsses numeros pertencem a 'x' mas nao pertencem a 'y': ");
    for (i = 0; i < 5; i++)
    {
        if (x[i] != y[i])
        {
            x[i] = z[i];
            printf("%d ", z[i]);
            continue;
        }
    }
    printf("\n\nEsses numeros pertencem tanto a 'x' quanto a 'y': ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            if (x[i] == y[j])
            {
                printf("%d ", x[i]);
                count++;
            }
    }
    if (count == 0)
    {
        printf("Nenhum numero pertence a ambos os vetores.");
    }
    printf("\n\nUnindo os vetores 'x' e 'y' obtemos: ");
    for (i = 0; i < 5; i++)
    {
        if (x[i] == y[i])
        {
            printf("%d ", x[i]);
        }
        else
        {
            printf("%d ", x[i]);
            printf("%d ", y[i]);
        }
    }
    return 0;
}
