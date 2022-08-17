#include <stdio.h>
#include <string.h>
int tamanho(char a[]);
int comparar(char a[], char b[]);
char concatenar(char a[], char b[]);
int main()
{
    char v1[10] = "123454321";
    char v2[5] = "0987";
    printf("%d\n", tamanho(v1));
    printf("%d\n", comparar(v1, v2));
    concatenar(v1, v2);
}

int tamanho(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    i++;
    return i;
}

int comparar(char a[], char b[])
{

    int tamanho1;
    int x = 0, y = 0;
    while (a[x] != '\0')
    {
        x++;
    }
    x++;

    tamanho1 = x;

    while (b[y] != '\0')
    {
        y++;
    }
    y++;

    if (x > y)
        return 1;
    else if (x < y)
        return -1;

    return 0;
}

char concatenar(char a[], char b[])
{
    int i, j;
    for (i = 0; a[i] != '\0'; ++i)
        ;

    for (j = 0; b[j] != '\0'; ++j, ++i)
    {
        a[i] = b[j];
    }
    a[i] = '\0';

    printf("%s", a);
}
