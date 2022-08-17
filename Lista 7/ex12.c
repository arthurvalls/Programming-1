#include <stdio.h>
void Converter(int numeroBase10);
int main(int argc, char *argv[])
{
    int nb10, nb2[32], i, teste = 1;
    while (1)
    {
        scanf("%d", &nb10);
        if (nb10 < 0)
            break;

        
        printf("Teste % d\n", teste++);
        printf("%d\n", nb10);
        Converter(nb10);
        printf("\n\n");
    }
    return 0;
}
void Converter(int nb10)
{
    
    int i, k;
    for (int i = 31; i >= 0; i--)
    {
        int k = nb10 >> i;

        if (k & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");
}
