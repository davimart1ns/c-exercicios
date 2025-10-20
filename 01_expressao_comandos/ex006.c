#include <stdio.h>

int main()
{
    int n, i, fat = 1;
    printf("Informe um numero para saber seu fatorial: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fat *= i;
    }

    printf("O fatorial do numero eh igual a: %d", fat);

    return 0;
}