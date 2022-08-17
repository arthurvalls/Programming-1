#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;
    float compra;
    printf("Insira o valor da compra: ");
    scanf("%f", &compra);
    printf("\n1 para cliente comum.\n2 para funcionario.\n3 para cliente VIP.\n\nInsira seu codigo de identificacao: ");
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 1:
        compra = compra;
        printf("\nTotal da compra: R$ %.2f", compra);
        break;
    case 2:
        compra = compra * 0.9;
        printf("\nTotal da compra: R$ %.2f", compra);
        break;
    case 3:
        compra = compra * 0.95;
        printf("\nTotal da compra: R$ %.2f", compra);
        break;
    default:
        printf("Codigo invalido!");
    }

    return 0;
}