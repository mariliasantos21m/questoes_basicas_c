/*
Função : Calcula divisores de um número
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

int main(){
    int num;
    printf("Número: ");
    scanf("%d", &num);

    while(num >0){
        for(int i=1; i<num; i++){
            if(num%i ==0){
                printf("%d ", i);
            }
        }
        printf("\nNúmero: ");
        scanf("%d", &num);
    }
    return 0;
}
