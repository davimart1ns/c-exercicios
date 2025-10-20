#include <stdio.h>

int main()
{
    int numero = 35, *ptr;
    ptr = &numero;

    printf("O ponteiro ptr armazena o endereco %p que, por sua vez, armazena o valor %d \n", ptr, *ptr);

    *ptr = 45;

    printf("Agora, o ponteiro ptr armazena o endereco %p que, por sua vez, armazena o valor %d \n", ptr, *ptr);

    return 0;
}