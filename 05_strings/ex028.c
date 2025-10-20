#include <stdio.h> 
#include <ctype.h> 
 
int main() 
{ 
    int i, n; 
    char frase[100]; 
 
    printf("Digite uma frase: "); 
    scanf(" %[^\n]", frase); 
 
    printf("Digite a chave (n): "); 
    scanf("%d", &n); 
 
    for (i = 0; frase[i] != '\0'; i++) 
    { 
        char c = frase[i]; 
 
        if (c >= 'a' && c <= 'z') 
        { 
            frase[i] = ((c - 'a' + n) % 26) + 'a'; 
        } 
        else if (c >= 'A' && c <= 'Z') 
        { 
            frase[i] = ((c - 'A' + n) % 26) + 'A'; 
        } 
    } 
 
    printf("Frase criptografada: %s\n", frase); 
 
    return 0; 
} 