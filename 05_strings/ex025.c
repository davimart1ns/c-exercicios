#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
 
int main() 
{ 
    int i, c = 0; 
    char frase[100]; 
    char esarf[100], limpa[100]; 
 
    printf("Digite uma frase: "); 
    scanf(" %[^\n]", frase); 
 
    for (i =0; frase[i] != '\0'; i++) { 
        if (frase[i] != ' ' && frase[i] != '-') { 
            limpa[c] = tolower(frase[i]); 
            c++; 
        } 
    } 
 
     
    for (i = 0; i < c; i++) 
    { 
        esarf[i] = limpa[c - 1 -i]; 
    } 
 
    esarf[c] = '\0'; 
 
    printf(" A sua frase invertida: %s \n", esarf); 
 
    if (strcmp(esarf, limpa) == 0) 
    { 
        printf("Essa frase eh um palindromo!"); 
    } 
    else 
    { 
        printf("Essa frase nao eh um palindromo!"); 
    } 
 
    return 0; 
}