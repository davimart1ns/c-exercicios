#include <stdio.h>

void troca(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 3;
    int b = 5;

    printf("O valor de a: %d \n", a);
    printf("O valor de a: %d \n", b);

    troca(&a, &b);

    printf("Novo valor de a: %d \n", a);
    printf("Novo valor de b: %d \n", b);

    return 0;
}