#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    while(1)
    {
        int valor, escolha, voltar;
     
        printf("\n<Conversor de Bases>\n\nInsira 1: decimal para hexadecimal\nInsira 2: hexadecimal para decimal\nInsira 3: decimal para octal\nInsira 4: octal para decimal\nInsira 5: Encerra\n\n");
        printf("Insira qual opcao voce escolheu: ");
        scanf("%d", &escolha);
        getchar();
        
        if (escolha == 1)
        {
            printf("\nInsira o valor em decimal: ");
            scanf("%d", &valor);
            getchar();
            printf("%d em hexadecimal = %x\n", valor, valor);
            printf("Se deseja rertornar ao inicio, digite 1 e, se deseja encerrar, digite 0: \n");
            scanf("%d", &voltar);
            getchar();
            if (voltar == 1){
                continue;
            }
            else if(voltar == 0){
                exit(0);
            }
            else{
                printf("Comando Invalido!");
            }
        }
        else if (escolha == 2)
        {
            printf("\nInsira o valor em hexadecimal: ");
            scanf("%x", &valor);
            getchar();
            printf("%x em decimal = %d\n", valor, valor);
            printf("Se deseja rertornar ao inicio, digite 1 e, se deseja encerrar, digite 0: \n");
            scanf("%d", &voltar);
            getchar();
            if (voltar == 1){
                continue;
            }
            else if(voltar == 0){
                exit(0);
            }
            else{
                printf("Comando Invalido!");
            }
        }
        else if (escolha == 3)
        {
            printf("\nInsira o valor em decimal: ");
            scanf("%d", &valor);
            getchar();
            printf("%d em octal = %o\n", valor, valor);
            printf("Se deseja rertornar ao inicio, digite 1 e, se deseja encerrar, digite 0: \n");
            scanf("%d", &voltar);
            getchar();
            if (voltar == 1){
                continue;
            }
            else if(voltar == 0){
                exit(0);
            }
            else{
                printf("Comando Invalido!");
            }
        }
        else if (escolha == 4)
        {
            printf("\nInsira o valor em octal: ");
            scanf("%o", &valor);
            getchar();
            printf("%o em decimal = %d\n", valor, valor);
            printf("Se deseja rertornar ao inicio, digite 1 e, se deseja encerrar, digite 0: \n");
            scanf("%d", &voltar);
            getchar();
            if (voltar == 1){
                continue;
            }
            else if(voltar == 0){
                exit(0);
            }
            else{
                printf("Comando Invalido!");
            }
        }
        else if(escolha == 5)
        {
            exit(0);
        }
        else{
            printf("\nComando invalido!\n");
            continue;
        }

        return 0;
    }
}
