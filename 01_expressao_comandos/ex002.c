#include <stdio.h>

int main()
{
    int n, i, soma = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        soma += i;
    }
    printf("A soma dos %d primeiros numeros positivos é igual a: %d", n,
           soma);

    return 0;
}