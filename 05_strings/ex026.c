#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, vg = 0;
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = 0; frase[i] != '\0'; i++)
    {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vg++;
        }
    }

    printf("A frase tem %d vogais. ", vg);

    return 0;
}