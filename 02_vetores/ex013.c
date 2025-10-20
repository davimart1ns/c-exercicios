#include <stdio.h>

int main()
{
    int i, p = 0;
    int n[20];

    for (i = 0; i < 20; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0)
        {
            p += 1;
        }
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d ", n[i]);
    }

    printf("\n");
    printf("O vetor tem %d valores pares.", p);

    return 0;
}