#include <stdio.h>

int fatorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}
int main()
{
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Nao existe fatorial para numero negativo!");
    }
    else
    {
        int fat = fatorial(n);
        printf("O fatorial eh igual a: %d", fat);
    }

    return 0;
}