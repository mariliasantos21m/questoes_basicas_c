/*
Função : Calcula Sequência de Fibonacci
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>
#include <math.h>

void calculaSeqFibonacci(int n);

int main(){
    int num;
    
    printf("Digite o número:");
    scanf("%d", &num);

    calculaSeqFibonacci(num);
    return 0;
}

void calculaSeqFibonacci(int n){
    for (int i=0; i<=n; i++){
        printf("\n%.0f", (pow(1.6180339887498, i) - pow(-1.6180339887498, -i))/sqrt(5));
    }
}