#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int i, n;
    int max = 100;
    int par = 0;
    int impar = 0;
    double pImpar, pPar;
    
    for(i = 0; i < 1000000; i++){
        n = rand();
        n = n % max;
        if(n % 2){
            par++;
        }
        else{
            impar++;
        }
        
    }
    pImpar = (double)(impar*100)/1000000;
    pPar  =  (double)(par*100)/1000000;
    printf("Numeros pares: %d\n", par);
    printf("Numeros impares: %d\n", impar);
    printf("Porcentagem par: %.2lf%%\n", pPar);
    printf("Porcentagem impar: %.2lf%%\n", pImpar);
    return 0;
}