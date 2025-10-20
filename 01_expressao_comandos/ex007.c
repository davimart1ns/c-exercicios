#include <stdio.h>

int main()
{
    int n;
    int c = 0;
    int soma = 0;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &n);
    
    while (n != 0) 
    {
        soma += n;
        c += 1;
        
        
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &n);
    }
    
    printf("A soma de todos os numeros digitados eh igual a: %d \n", soma);
    printf("Voce digitou %d numeros \n", c);
    return 0;
}