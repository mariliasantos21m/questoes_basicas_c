/*
Função : Calcula hipotenusa
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/


#include <stdio.h>
#include <math.h>

double calculaHipotenusa(float a, float b);

int main(void){
    float a, b;

    printf("Digite o cateto a: ");
    scanf("%f", &a);
    printf("Digite o cateto b: ");
    scanf("%f", &b);

    printf("%lf", calculaHipotenusa(a,b));
    return 1;
}

double calculaHipotenusa(float a, float b){
    double hipotenusa= sqrt(pow(a,2) + pow(b,2));
    return hipotenusa;
}

