/*
Função : Calcula produto notável cubo da soma de dois termos
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float calculaCubo(float num);
float calculaQuadrado(float num);
float produtoNotavelCubo(float x, float y);

int main(void){
    float x, y;

    printf("x:");
    scanf("%f", &x);
    printf("y:");
    scanf("%f", &y);

    printf("(%1.f + %1.f)^ 3 = %.1f", x, y, produtoNotavelCubo(x, y));


    return 1;
}

float calculaCubo(float num){
    return num * num *num;
}

float calculaQuadrado(float num){
    return num * num;
}

float produtoNotavelCubo(float x, float y){
    float calculo= calculaCubo(x) + (3*calculaQuadrado(x)*y) + (3*x*calculaQuadrado(y)) + calculaCubo(y);
    return calculo;
}