#include <stdio.h>

int main(void){
    float notaAluno;
    float mediaAluno;
    
    printf("Insira nota: ");
    scanf("%f", &notaAluno);
    mediaAluno = notaAluno;
    printf("Insira nota: ");
    scanf("%f", &notaAluno);
    mediaAluno += notaAluno;
    printf("Insira nota: ");
    scanf("%f", &notaAluno);

    
    mediaAluno = (mediaAluno + notaAluno) / 3;
    printf("Media : %0.1f\n", mediaAluno);
     
    
    if (mediaAluno >= 5.0) {
        printf("Aprovado\n");
    }
    else {
        printf("Reprovado");
    }

    return 0;
}