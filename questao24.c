#include <stdio.h>
#include <string.h>

int main(){

    char string[60];
    char stringInversa[60];
    int i, tamanhoString;
    
    printf("Digite uma string:");
    fgets(string, 59, stdin);
    
    tamanhoString= strlen(string)-2;
    
    for (i=0; i<= tamanhoString; i++){
        stringInversa[i]= string[tamanhoString-i];
    }
    
    for (i=0; i<= tamanhoString; i++){
        printf("%c", stringInversa[i]);
    }
    
    return 0;
}