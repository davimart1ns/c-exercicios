#include <stdio.h>

int divisao(int a, int b)
{
    int i = 0;
    int temp = a;

    while (temp >= b)
    {
        temp -= b;
        i += 1;
    }

    return i;
}
int main()
{
    int n1, n2;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n1);

    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &n2);

    int div = divisao(n1, n2);

    printf("O resultado da divisao de %d por %d eh: %d", n1, n2, div);

    return 0;
}
