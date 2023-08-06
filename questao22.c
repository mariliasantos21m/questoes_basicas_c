#include <stdio.h>

int main(){

    char string[60];
    int i=0, quantCaracter=0;
    
    printf("Digite algo:");
    fgets(string, 59, stdin);

    while (string[i] != '\n'){
        quantCaracter++;
        i++;
    }
    printf("quantidade de caracter: %d", quantCaracter);
    
    return 0;
}
