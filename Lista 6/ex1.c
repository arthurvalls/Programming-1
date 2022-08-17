#include <stdio.h>

void conta_vogais(char string[], int vogais[]);

int main()
{
    char texto[50];
    int vogais[5];
    printf("\nInsira a string: ");
    fgets(texto, 50, stdin);
    conta_vogais(texto, vogais);
}

void conta_vogais(char string[], int vogais[])
{

    int i;

    for (i = 0; i < 5; i++)
        vogais[i] = 0;
    for (i = 0; string[i] != '\0'; ++i)
    {
        switch (string[i])
        {
        case 'a':
        case 'A':
            vogais[0]++;
            break;
        case 'e':
        case 'E':
            vogais[1]++;
            break;
        case 'i':
        case 'I':
            vogais[2]++;
            break;
        case 'o':
        case 'O':
            vogais[3]++;
            break;
        case 'u':
        case 'U':
            vogais[4]++;
            break;
        default:
            break;
        }
    }
    printf("Numero de vezes que aparecem as seguintes vogais:\n'a' = %d\n'e' = %d\n'i' = %d\n'o' = %d\n'u' = %d\n", vogais[0], vogais[1], vogais[2], vogais[3], vogais[4]);
}
