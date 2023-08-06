#include <stdio.h>
#include <string.h>

int main(){

    char string[60];
    char fraseComparacao[7]= {'b', 'o', 'm', ' ', 'd', 'i', 'a'};
    
    printf("Digite uma string: ");
    fgets(string, 59, stdin);
    
    if (strncmp(string, fraseComparacao, 7) !=0){
        printf("A string NÃO É IGUAL a 'bom dia'");
    }else printf("A string é IGUAL a 'bom dia'");
    
    
    return 0;
}