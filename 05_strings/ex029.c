#include <stdio.h>

int main()
{
    char frase[100];
    int n, i;

    printf("Digite a frase criptografada: ");
    scanf(" %[^\n]", frase);

    printf("Digite a chave (n): ");
    scanf("%d", &n);

    for (i = 0; frase[i] != '\0'; i++)
    {
        char c = frase[i];

        // se for letra minúscula
        if (c >= 'a' && c <= 'z')
        {
            frase[i] = ((c - 'a' - n + 26) % 26) + 'a';
        }
        // se for letra maiúscula
        else if (c >= 'A' && c <= 'Z')
        {
            frase[i] = ((c - 'A' - n + 26) % 26) + 'A';
        }
    }

    printf("Frase descriptografada: %s\n", frase);

    return 0;
}
