#include <stdio.h>
int main()
{
    int mediaProvas, m1[5][4];
    int i, j, k;
    float media=0;
    for (i = 0; i < 5; i++)
    {
        printf("Insira matricula do aluno %d: ", i+1);
        scanf("%d", &m1[i][0]);
        printf("Insira media das provas do aluno %d: ", i+1);
        scanf("%d", &m1[i][1]);
        printf("Insira media dos trabalhos do aluno %d: ", i+1);
        scanf("%d", &m1[i][2]);
        
        printf("\n");
        m1[i][3] = m1[i][1] + m1[i][2];
    }

    int maiorNota = m1[0][3];
    for (i = 0; i < 5; i++)
    {
        if (m1[i][3] > m1[0][3])
        {
            maiorNota = m1[i][0];
        }
        media += m1[i][3];
    }

    media = media / 5.0;

    printf("Matricula do aluno com a maior nota final: %d\n", maiorNota);
    printf("Media das notas finais: %.3lf", media);

    return 0;
}