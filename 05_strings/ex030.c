#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, c = 0;
    char n;
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite uma letra: ");
    scanf(" %c", &n);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (tolower(frase[i]) == tolower(n))
        {
            c++;
        }
    }

    printf("Essa letra aparece %d vezes na frase.", c);

    return 0;
}
