#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char ch1, ch2;
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite uma letra para substituir: ");
    scanf(" %c", &ch1);

    printf("Digite uma letra para ocupar seu lugar: ");
    scanf(" %c", &ch2);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (tolower(frase[i]) == tolower(ch1))
        {
            frase[i] = ch2;
        }
    }

    printf(" A sua nova frase eh igual a: %s\n", frase);

    return 0;
}
