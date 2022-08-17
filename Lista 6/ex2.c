#include <stdio.h>
int i, j;
int matrizb(int matrizA[][6]);
void print(int matrizB[][6], int matrizA[][6]);
int matrizB[6][6];
int matrizA[6][6];

int main()
{

    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            matrizA[j][i] = 0;
            matrizB[j][i] = 0;
        }
    }
    printf("Insira a matriz: \n");
    for (j = 0; j < 6; j++)
    {
        for (i = 0; i < 6; i++)
        {
            matrizA[j][i] = 0;
            scanf("%d", &matrizA[j][i]);
        }
    }
    matrizb(matrizA);
    print(matrizA, matrizB);
}

int matrizb(int matrizA[][6])
{

    for (j = 0; j < 6; j++)
    {
        for (i = 0; i < 6; i++)
        {
            matrizB[j][i] = matrizA[j][i] * matrizA[j][j];
        }
    }
    return matrizB;
}

void print(int matrizA[][6], int matrizB[][6])
{

    printf("\nMatriz A =\n");
    for (j = 0; j < 6; j++)
    {
        for (i = 0; i < 6; i++)
        {
            printf("%d ", matrizA[j][i]);
        }
        printf("\n");
    }
    printf("\nMatriz B =\n");
    for (j = 0; j < 6; j++)
    {
        for (i = 0; i < 6; i++)
        {
            printf("%d ", matrizB[j][i]);
        }
        printf("\n");
    }
}