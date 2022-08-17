#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, prova, notaFinal;

    printf("Insira nota da prova: ");
    scanf("%f", &prova);
    printf("Insira nota do teste 1: ");
    scanf("%f", &nota1);
    printf("Insira nota do teste 2: ");
    scanf("%f", &nota2);
    printf("Insira nota do teste 3: ");
    scanf("%f", &nota3);
    


    notaFinal = (0.8 * prova) + (0.2 * (nota1 + nota2 + nota3)) / 3;
    printf("\nProva: %0.1f\n", prova);
    printf("Teste 1: %0.1f\n", nota1);
    printf("Teste 2: %0.1f\n", nota2);
    printf("Teste 3: %0.1f\n", nota3);
    printf("Nota Final: %0.1f\n", notaFinal);


    return 0;
}