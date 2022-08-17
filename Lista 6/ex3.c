#include <stdio.h>
int mdc(int numero1, int numero2)
{
    if (numero2 != 0)
        return mdc(numero2, numero1 % numero2);
    else if (numero1 == 0)
    {
        return numero2;
    }
    else
        return numero1;
}
int main()
{
    int numero1, numero2;
    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);
    printf("O mdc(%d,%d) = %d", numero1, numero2, mdc(numero1, numero2));
    return 0;
}
