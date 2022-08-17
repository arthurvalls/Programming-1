#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int n, i;
    int max = 6;
    float dado1=0, dado2=0, dado3=0, dado4=0, dado5 =0, dado6 =0;
    double p1, p2, p3, p4, p5, p6;
    for(i = 0; i < 6000000; i++){
        n = rand();
        n = n % max;
        n++;
        switch (n){
            case 1:
                dado1++;
                break;
            case 2:
                dado2++;
                break;
            case 3:
                dado3++;
                break;
            case 4:
                dado4++;
                break;
            case 5:
                dado5++;
                break;
            case 6:
                dado6++;
                break;
        }
    }
        p1 = (dado1*100.0)/6000000;
        p2 = (dado2*100.0)/6000000;
        p3 = (dado3*100.0)/6000000;
        p4 = (dado4*100.0)/6000000;
        p5 = (dado5*100.0)/6000000;
        p6 = (dado6*100.0)/6000000;

        printf("Face 1: %.2f%%\nFace 2: %.2f%%\nFace 3: %.2f%%\nFace 4: %.2f%%\nFace 5: %.2f%%\nFace 6: %.2f%%\n\n", p1, p2, p3, p4, p5, p6);

   return 0;
}