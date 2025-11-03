#include <stdio.h>
#include <stdlib.h>

#define TAM 50

typedef struct
{
    int codigo;
    char descricao[TAM];
    float preco;
} Produto;

int main()
{

    int n;
    printf("Quantos produtos vc deseja cadastrar: ");
    scanf("%d", &n);

    Produto *produtos = (Produto *)malloc(n * sizeof(Produto));

    if (produtos == NULL)
    {
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        
        printf("Qual o codigo do produto: ");
        scanf("%d", &produtos[i].codigo);

        printf("Descricao: ");
        scanf(" %[^\n]", produtos[i].descricao);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Codigo do produto: %d\n", produtos[i].codigo);

        printf("Descricao: %s \n", produtos[i].descricao);

        printf("Preco: %.2f \n", produtos[i].preco);  
    }

    free(produtos);

    return 0;
}