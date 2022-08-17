#include <stdio.h>
#include <stdbool.h>

int main(){

    bool x;

    x =  (!(5==6) && (5!=6) && ((2>1) || (5<=4)));

    printf("Resultado = %d", x);

    return 0;

}