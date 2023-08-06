#include <stdio.h>
#include <string.h>

int main(){

    char string[60];
    int i, quantPalavras=1;
    
    printf("Digite uma string: ");
    fgets(string, 59, stdin);
    
    for (i=0; i != strlen(string); i++){
        if (string[i] ==' ') quantPalavras++;
    }
    
    printf("Quantidade de palavras: %d", quantPalavras);
    
    return 0;
}