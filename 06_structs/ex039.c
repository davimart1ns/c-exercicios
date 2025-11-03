#include <stdio.h>
#include <stdlib.h>

#define TAM 50

typedef struct
{
    int codigo;
    char descricao[TAM];
    float preco;
} Produto;

int busca_produto_por_codigo(Produto *p, int tam, int cod) {

    for (int i = tam - 1 ; i >= 0; i--)
    {
        if (p[i].codigo == cod)
        {
            return i;
        }
    }    
    return -1;

}

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

    int ind = busca_produto_por_codigo(produtos, n ,4);

    if (ind == -1)
    {
        printf("Codigo nao encontrado! ");
    }
    else
    {
        printf("Produto encontrado no indice: %d", ind);
    }

    return 0;
}