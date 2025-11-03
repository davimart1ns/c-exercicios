#include <stdio.h>
#include <stdlib.h>

#define TAM 50

typedef struct
{
    int codigo;
    char descricao[TAM];
    float preco;
} Produto;

Produto *cria_produto()
{

    Produto *produto;

    produto = (Produto *)malloc(sizeof(Produto));

    if (produto == NULL)
    {
        printf("Erro ao alocar memória! \n");
        exit(1);
    }
    printf("Qual o codigo do produto: ");
    scanf("%d", &produto->codigo);

    printf("Descricao: ");
    scanf(" %[^\n]", produto->descricao);

    printf("Preco: ");
    scanf("%f", &produto->preco);

    return produto;
}

int main()
{
    Produto *produto = cria_produto();

    printf("Codigo do produto: %d \n", produto->codigo);
    printf("Descricao: %s \n", produto->descricao);
    printf("Preco: %.2f \n", produto->preco);

    free(produto);

    return 0;
}