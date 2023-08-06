/*
Função : Calcula cubo
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float calculaCubo(float num);

int main(void){
    float num;
    printf("Digite o numero:");
    scanf("%f", &num);

    printf("\n%.1f ^ 3 = %.1f", num, calculaCubo(num));

    return 1;
}

float calculaCubo(float num){
    return num * num *num;
}



