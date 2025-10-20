#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char frase[100];
    int min[5] = {0};
    int max[5] = {0};

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    for (i = 0; frase[i] != '\0'; i++)
    {
        switch (frase[i])
        {
        case 'a':
            min[0]++;
            break;
        case 'e':
            min[1]++;
            break;
        case 'i':
            min[2]++;
            break;
        case 'o':
            min[3]++;
            break;
        case 'u':
            min[4]++;
            break;

        case 'A':
            max[0]++;
            break;
        case 'E':
            max[1]++;
            break;
        case 'I':
            max[2]++;
            break;
        case 'O':
            max[3]++;
            break;
        case 'U':
            max[4]++;
            break;
        }
    }

    printf("a = %d; e = %d; i = %d; o = %d; u = %d\n", min[0], min[1], min[2],
           min[3], min[4]);
    printf("A = %d; E = %d; I = %d; O = %d; U = %d\n", max[0], max[1], max[2],
           max[3], max[4]);
    return 0;
}