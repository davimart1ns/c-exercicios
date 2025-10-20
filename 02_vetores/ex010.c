#include <stdio.h>

int main()
{
    int i, p = 0;
    int n[20];
    int menor;

    printf("Digite o 1 valor: ");
    scanf("%d", &n[0]);

    menor = n[0];

    for (i = 1; i < 20; i++)
    {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] < menor)
        {
            menor = n[i];
            p = i;
        }
    }

    printf("O menor elemento de N eh %d e sua posicao dentro do veto eh: %d \n", menor, p + 1);

    return 0;
}