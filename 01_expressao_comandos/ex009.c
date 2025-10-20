#include <stdio.h>

int main()
{
    int n, i, n1;
    int maior, menor;

    printf("Quantos alunos voce quer comparar: ");
    scanf("%d", &n);

    printf("Digite a nota do aluno 1: ");
    scanf("%d", &n1);

    maior = n1;
    menor = n1;

    for (i = 2; i <= n; i++)
    {
        printf("Digite a nota do alunos %d: ", i);
        scanf("%d", &n1);

        if (n1 > maior)
        {
            maior = n1;
        }
        if (n1 < menor)
        {
            menor = n1;
        }
    }

    printf("A maior nota eh: %d \n", maior);
    printf("A menor nota eh: %d \n", menor);

    return 0;
}