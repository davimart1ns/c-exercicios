#include <stdio.h>

int main()
{
    int n, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    soma = (3 * n + 1) + (2 * n - 1);
    printf("A soma do sucessor do triplo de %d com o antecessor de seu dobro eh igual a %d", n, soma); 
 
    return 0;
}