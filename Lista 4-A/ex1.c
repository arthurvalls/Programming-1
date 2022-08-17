#include <stdio.h>

int main() {
   int i, k, linha, coluna;
   printf("Insira o numero de linhas: ");
   scanf("%d", &linha);
   printf("Insira o numero de colunas: ");
   scanf("%d", &coluna);
  
   for (i = 1; i <= linha; i++) {
      for (k = 1; k <= coluna; k++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}