#include <stdio.h>

int main()
{
    int i, temp;
    int k[30];

    for (i = 0; i < 30; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &k[i]);
    }

    for (i = 0; i < 30; i++)
    {
        printf("%d ", k[i]);
    }
    printf("\n");

    for (i = 1; i < 29; i += 2)
    {
        temp = k[i];
        k[i] = k[i + 1];
        k[i + 1] = temp;
    }

    for (i = 0; i < 30; i++)
    {
        printf("%d ", k[i]);
    }

    return 0;
}