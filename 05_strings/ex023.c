#include <stdio.h>

int main()
{
    int i, c = 0;
    char nome[] = "joao";

    for (i = 0; nome[i] != '\0'; i++)
    {
        c += 1;
    }

    for (i = c - 1; i >= 0; i--)
    {
        printf("%c", nome[i]);
    }

    return 0;
}