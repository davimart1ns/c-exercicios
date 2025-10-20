#include <stdio.h>

int somatorio(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }

    return s;
}
int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int soma = somatorio(n);
    printf("O somatorio eh igual a: %d", soma);

    return 0;
}