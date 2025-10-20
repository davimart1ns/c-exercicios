#include <stdio.h>

int raiz_quadrada(int n)
{
    int i = 1;
    int s = 0;
    int temp = n;

    while (temp > 0)
    {
        temp -= i;
        i += 2;
        s++;
    }

    if (temp == 0)
        return s;
    else
        return -1;
}
int main()
{
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int rq = raiz_quadrada(n);

    if (rq == -1)
    {
        printf("Esse numero nao tem raiz quadrada!");
    }
    else
    {
        printf("A raiz quadrada desse numero eh: %d", rq);
    }

    return 0;
}