/*
Função : Calcula Distância entre dois pontos
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>
#include <math.h>

float calculaDistanciaDoisPontos(float x1, float y1, float x2, float y2);

int main(void){
    float x1, y1, x2, y2;

    printf("A(x,y):");
    scanf("%f%f", &x1, &y1);

    printf("B(x,y):");
    scanf("%f%f", &x2, &y2);

    printf("Distancia entre A e B: %.2f", calculaDistanciaDoisPontos(x1, y1, x2, y2));
}

float calculaDistanciaDoisPontos(float x1, float y1, float x2, float y2){
    float calculoDistancia= sqrt( pow((x2-x1), 2) + pow((y2-y1), 2) );
    return calculoDistancia;
}
