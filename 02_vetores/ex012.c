#include <stdio.h>

int main()
{
    int m, i;
    int s[20];

    for (i = 0; i < 20; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &s[i]);
    }

    printf("Digite um valor para a multiplicacao: ");
    scanf("%d", &m);

    for (i = 0; i < 20; i++)
    {
        printf("%d", s[i] * m);
        if (i != 19)
        {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}