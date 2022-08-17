#include <stdio.h>

int main(void) {
    float notaAluno;
    float mediaAluno = 0.0;
    int notasLidas = 0;
    int quantProvas;
    
    
    printf("Quantas provas?: ");
    scanf("%d", &quantProvas);

    while (notasLidas < quantProvas){
        printf("Insira o valor da nota: ");
        scanf("%f", &notaAluno);

        mediaAluno = notaAluno + mediaAluno;
        ++notasLidas;
    }
    mediaAluno = mediaAluno / quantProvas;
    printf("A media do aluno foi %.2f\n", mediaAluno);
    if (mediaAluno >= 5.0)  {
        printf("Aprovado\n");
    }

    else {
        printf("Reprovado");
    }
    return 0;
    }
