#include <stdio.h>

int main(){
    int i, k, linha;
    printf("Insira o numero de linhas: ");
    scanf("%d", &linha);

    for(i = linha; i>=1; --i){
        for(k = 1; k <= i; ++k){
            printf("* ");

        }
        printf("\n");
    }
    return 0;

}