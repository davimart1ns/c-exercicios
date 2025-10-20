#include <stdio.h>
#include <string.h>

int main()
{
    int i, c = 0;
    char word[100];
    char dorw[100];
    printf("Digite uma palavra: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++)
    {
        c++;
    }

    for (i = 0; i < c; i++)
    {
        dorw[i] = word[c - 1 - i];
    }

    dorw[c] = '\0';

    printf(" A sua palavra invertida: %s \n", dorw);

    if (strcmp(dorw, word) == 0)
    {
        printf("Essa palavra eh um palindromo!");
    }
    else
    {
        printf("Essa palavra nao eh um palindromo!");
    }

    return 0;
}