/*
Função : Média aritmética, média harmônica, média geométrica, média quadrática
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>
#include <math.h>

float calcMediaAritmetica(float a, float b, float c, float d);
float calcMediaHarmonica(float a, float b, float c, float d);
float calcMediaGeometrica(float a, float b, float c, float d);
float calcMediaQuadratica(float a, float b, float c, float d);

int main(){
    float a, b, c, d;
    printf("Digite a, b, c e d:");
    scanf("%f%f%f%f", &a, &b, &c, &d);

    printf("Media Aritmética: %.1f\n", calcMediaAritmetica(a, b, c, d));
    printf("Media Harmônica: %.1f\n", calcMediaHarmonica(a, b, c, d));
    printf("Media Geométrica: %.1f\n", calcMediaGeometrica(a, b, c, d));
    printf("Media Quadrática: %.1f", calcMediaQuadratica(a, b, c, d));

    return 0;
}

float calcMediaAritmetica(float a, float b, float c, float d){
    return (a+b+c+d)/4;
}

float calcMediaHarmonica(float a, float b, float c, float d){
    return 4/((1/a) + (1/b)+ (1/c) + (1/d));
}

float calcMediaGeometrica(float a, float b, float c, float d){
    return pow((a*b*c*d), (1.0/4.0));
}

float calcMediaQuadratica(float a, float b, float c, float d){
    float calcDivisao= (pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2))/4;
    return pow(calcDivisao, 0.5);
}