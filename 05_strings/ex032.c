#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = 0; frase[i] != '\0'; i++)
    {
        frase[i] = toupper(frase[i]);
    }

    printf(" A sua nova frase eh igual a: %s\n", frase);

    return 0;
}