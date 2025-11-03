#include <stdio.h>

#define TAM 50

struct produto
{
    int codigo;
    char descricao[TAM];
    float preco;
};

typedef struct produto Produto;

void mais_caro (Produto produtos[], int tamanho)
{
    int indice = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if ( produtos[i].preco > produtos[indice].preco )
        {
            indice = i;
        }
    }

    printf("\n---- PRODUTO MAIS CARO ----\n");
    printf("Codigo: %d \n", produtos[indice].codigo);
    printf("Descricao: %s \n", produtos[indice].descricao);
    printf("Preco: R$ %.2f \n", produtos[indice].preco);
}

int main()
{
    Produto produtos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Codigo do produto: ");
        scanf("%d", &produtos[i].codigo);

        printf("Descricao do produto: ");
        scanf(" %[^\n]", produtos[i].descricao);

        printf("Preco do produto: ");
        scanf("%f", &produtos[i].preco);

        printf("\n");
    }

    mais_caro(produtos, 5);

    return 0;
}