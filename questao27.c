#include <stdio.h>
#include <string.h>

int main(){

    char frase[60]= "Bem vindo, ";
    char nome[60];
    
    printf("Digite seu nome:");
    fgets(nome, 59, stdin);
    
    printf("%s", strncat(frase, nome, strlen(nome)));
    
    
    return 0;
}