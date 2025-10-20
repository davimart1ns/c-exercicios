#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int n)
{
    int i, f = 1;
    int s = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }

    if (s == n)
        return true;
    else
        return false;
}
int main()
{
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (ehPerfeito(n))
    {
        printf("Esse eh um numero perfeito! ");
    }
    else
    {
        printf("Esse nao eh um numero perfeito! ");
    }

    return 0;
}