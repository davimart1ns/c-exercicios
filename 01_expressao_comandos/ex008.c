#include <stdio.h>

int main()
{
    int n, i;
    int ini = 1;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        soma += ini;
        ini *= 3;
    }

    printf("O somatoria dos %d numeros eh: %d", n, soma);
    return 0;
}