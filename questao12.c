/*
Função : Retorna somatório 
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

int somatorio(int num);

int main(){
    int num;
    printf("Número:");
    scanf("%d", &num);

    printf("Somatório: %d", somatorio(num));

    return 0;
}

int somatorio(int num){
    int soma=0;
    for (int i=1; i<=num; i++){
        soma+=i;
    }
    return soma;
}