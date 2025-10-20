#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &a);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &b);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Com esses valores eh possivel formar um triangulo. \n");

        if (a == b && b == c)
        {
            printf("O triângulo eh equilatero. \n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("O triangulo eh isosceles. \n");
        }
        else
        {
            printf("O triangulo eh escaleno. \n");
        }
    }
    else
    {
        printf("Com esses valores não é possivel formar um triangulo \n");
    }

    return 0;
}