#include <stdio.h>

#define TAM 50

struct produto
{
    int codigo;
    char descricao[TAM];
    float preco;
};

typedef struct produto Produto;

void atualiza_preco(Produto *prod, float aumento)
{
    float newPrice;
    float calculo;

    calculo = (aumento * prod->preco) / 100;

    newPrice = prod->preco + calculo;
    prod->preco = newPrice;
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

    int aumento;

    printf("Quanto de aumento vc vai aplicar? ");
    scanf("%d", &aumento);

    atualiza_preco(&produto, aumento);
    printf("Novo preco apos o aumento: %.2f ", produto.preco);

    return 0;
}