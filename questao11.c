/*
Função : Verifica se é número primo
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

int verificaNumPrimo(int num);

int main(){
    int num;

    printf("Número:");
    scanf("%d", &num);

    printf("Retorno função: %d", verificaNumPrimo(num));

    return 0;
}

int verificaNumPrimo(int num){
    for(int i=1; i<num; i++){
        if(num%i ==0 && i!=1){
            return 1;
        }
    }
    return 0;
}