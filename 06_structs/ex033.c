#include <stdio.h>

#define TAM 50

struct produto
{
    int codigo;
    char descricao[TAM];
    float preco;
};

typedef struct produto Produto;


int main() 
{
    Produto produto;

    printf("Codigo do produto: ");
    scanf("%d", &produto.codigo);

    printf("Descricao do produto: ");
    scanf(" %[^\n]", produto.descricao);

    printf("Preco do produto: ");
    scanf("%f", &produto.preco);

    printf("\nProduto Cadastrado\n");
    printf("Codigo: %d \n", produto.codigo);
    printf("Descricao: %s \n", produto.descricao);
    printf("Preco: %.2f \n", produto.preco);

    return 0;
}