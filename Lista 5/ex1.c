#include <stdio.h>
#include <string.h>

int main(void)
{
    char retornar;
    do
    {
        char c, string1[50], string2[50], stringResult[100], stringProcura[50], comparar;
        int menu, i, len1, len2, len, f, contador = 0, procura;


        printf("\nInsira a primeira string: ");
        fgets(string1, 50, stdin);
        for (i = 0; i < 50; i++)
        {
            if (string1[i] == '\n')
            {
                string1[i] = '\0';
            }
        }
        printf("\nInsira a segunda string: ");
        fgets(string2, 50, stdin);
        for (i = 0; i < 50; i++)
        {
            if (string2[i] == '\n')
            {
                string2[i] = '\0';
            }
        }
        printf("\n     MENU    \n");
        printf("\n\nInsira 1 para inverter as strings \nInsira 2 para concatenar as strings \nInsira 3 para comparar o tamanho das strings \nInsira 4 para indicar a maior string\nInsira 5 para procurar a ocorrencia de um caracter dentro de alguma das strings\n");
        printf("\nQual opcao voce deseja acessar?: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            strrev(string1);
            strrev(string2);
            printf("\nPrimeira string invertida: %s", string1);
            printf("\n\nSegunda string invertida: %s", string2);

            break;
        case 2:
            stringResult[0] = '\0';
            strcat(stringResult, string1);
            strcat(stringResult, string2);
            printf("\nStrings concatenadas: %s", stringResult);

            break;
        case 3:
            len1 = strlen(string1);
            len2 = strlen(string2);
            if (len1 > len2)
            {
                printf("A primeira string eh maior.");
            }
            else if (len1 < len2)
            {
                printf("A segunda string eh maior.");
            }
            else
            {
                printf("As strings sao de mesmo tamanho.");
            }

            break;
        case 4:
            len1 = strlen(string1);
            len2 = strlen(string2);
            if (len1 > len2)
            {
                printf("\n\nA string '%s' eh a de maior tamanho com %d caracteres.", string1, len1);
            }
            else if (len1 < len2)
            {
                printf("\n\nA string '%s' eh a de maior tamanho com %d caracteres.", string2, len2);
            }
            else
            {
                printf("\n\nAmbas as strings sao de mesmo tamanho.");
            }

            break;
        case 5:
            printf("\nInsira 1 para procurar na primeira string\nInsira 2 para procurar na segunda string\n\nQual string voce deseja procurar: ");
            scanf("%d", &procura);
            if (procura == 1)
            {
                strcpy(stringProcura, string1);
            }
            else if (procura == 2)
            {
                strcpy(stringProcura, string2);
            }
            printf("\nIndique qual caractere voce deseja procurar: ");
            scanf(" %c", &c);
            for (i = 0; stringProcura[i] != '\0'; ++i)
            {
                if (c == stringProcura[i])
                    ++contador;
            }
            printf("\nNa string \'%s\'\nO caractere \'%c\', aparece %d vezes.", stringProcura, c, contador);
            if (contador != 0)
            {
                len = strlen(stringProcura);
                printf("\nO caractere aparece nas seguintes posicoes:");
                for (i = 0; i < len; i++)
                {
                    if (stringProcura[i] == c)
                    {
                        printf(" %d", i + 1);
                    }
                }
            }

            break;
        default:
            break;
        }
            printf("\n\nDeseja retornar ou terminar o programa?\nPara retonar insira \'s\',  para terminar insira \'n\': ");
            scanf(" %c", &retornar);
            getchar();
    } while (retornar == 's');
    return 0;
}
