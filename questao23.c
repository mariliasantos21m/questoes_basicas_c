#include <stdio.h>

int main(){
    
    char string[60], consoante;
    int i=0;
    
    printf("Digite uma palavra: ");
    fgets(string, 59, stdin);
    
    while (string[i] != '\n'){
        switch(string[i]){
            case 'a':
                break;
            case 'e':
                break;
            case 'i':
                break;
            case 'o':
                break;
            case 'u':
                break;
            case ' ':
                break;
            default:
                printf("%c", string[i]);
        }
        i++;
    }
    
    return 0;
}
    