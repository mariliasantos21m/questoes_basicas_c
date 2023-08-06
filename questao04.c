/*
Função : Calcula produto notável quadrda da soma de dois termos
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>
#include<math.h>

float produtoNotavel(float x, float y);
int main(void){
    float x, y;

    printf("x:");
    scanf("%f", &x);
    printf("y:");
    scanf("%f", &y);

    printf("(%1.f + %1.f)^ 2 = %.1f", x, y, produtoNotavel(x, y));

    return 1;
}

float produtoNotavel(float x, float y){
    float calculo= pow(x,2) + (2*x*y)+ pow(y,2);
    return calculo;
}