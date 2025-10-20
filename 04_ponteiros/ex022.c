#include <stdio.h>

void endereco(int *x)
{
    printf("O endereco da variavel eh igual a: %p", x);
}

int main()
{
    int a = 35;

    endereco(&a);

    return 0;
}