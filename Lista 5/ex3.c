#include <stdio.h>

int main(void)
{
    int sequencia[10], i, maior, menor, contador = 0, soma = 0, existe = 0, procura;
    printf("Insira uma sequencia de 10 numeros\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &sequencia[i]);
        soma = soma + sequencia[i];
    }

    for (i = 0; i < 10; i++)
    {
        if (sequencia[i] % 2 == 0)
        {
            contador++;
        }
    }

    maior = sequencia[0];
    menor = sequencia[0];

    for (int i = 1; i < 10; ++i)
    {
        if (sequencia[i] > maior)
        {
            maior = sequencia[i];
        }
        else if (sequencia[i] < menor)
        {
            menor = sequencia[i];
        }
    }

    printf("\n\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nExistem %d valores pares na sequencia.", contador);
    printf("\nA soma de todos os valores eh: %d", soma);
    printf("\n\nInsira o valor para verificar se ele existe na sequencia: ");
    scanf("%d", &procura);
    for (i = 0; i < 10; i++)
    {
        if (sequencia[i] == procura)
        {
            existe = 1;
            break;
        }
    }
    if (existe == 1)
    {
        printf("\n%d existe na sequencia.", procura);
    }
    else
    {
        printf("\n%d nao existe na sequencia.", procura);
    }
    return 0;
}