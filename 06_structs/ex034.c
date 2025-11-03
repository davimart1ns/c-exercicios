#include <stdio.h>

#define TAM 50

struct produto
{
    int codigo;
    char descricao[TAM];
    float preco;
};

typedef struct produto Produto;

Produto aplica_desconto(Produto prod, float desconto)
{
    Produto novo = prod;
    novo.preco = novo.preco - (desconto * novo.preco) / 100;
    return novo;
}

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

    float desconto;

    printf("\n");
    printf("Quanto de desconto vc vai aplicar? ");
    scanf("%f", &desconto);

    Produto comDesconto = aplica_desconto(produto, desconto);

    printf("\n--- RESULTADO ---\n");
    printf("Produto ORIGINAL:\n");
    printf("Preco: %.2f\n", produto.preco);

    printf("Produto com DESCONTO: \n");
    printf("Codigo: %d\n", comDesconto.codigo);
    printf("Descricao: %s\n", comDesconto.descricao);
    printf("Preco: R$%.2f (%.1f%% de desconto) \n", comDesconto.preco, desconto);

    return 0;
}