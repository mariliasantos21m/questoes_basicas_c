/*
Função : Calcula área esfera
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include<stdio.h>

double calculaAreaEsfera(float raio);

int main(){

    float raio;
    printf("Raio:");
    scanf("%f", &raio);

    printf("Área da esfera: %.2f", calculaAreaEsfera(raio));

    return 0;
}

double calculaAreaEsfera(float raio){
    return 4 * 3.14159265 * (raio * raio);
}