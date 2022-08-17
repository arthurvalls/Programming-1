#include <stdio.h>
int mdc(int numero1, int numero2)
{
    if (numero2 != 0)
        return mdc(numero2, numero1 % numero2);
    else
        return numero1;
}

int mmc(int numero1, int numero2)
{
    return (numero1 / mdc(numero1, numero2) * numero2);
}

int main()
{
    int numero1, numero2;
    printf("Insira primeiro numero: ");
    scanf("%d", &numero1);
    printf("Insira segundo numero: ");
    scanf("%d", &numero2);
    printf("o mmc(%d,%d) = %d", numero1, numero2, mmc(numero1, numero2));
}
