/*
Função : Calcula velocidade média
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float calcVelocidadeMedia(float espaco, float tempo);

int main(){
    float espaco, tempo;

    printf("Distância pecorrida em km:");
    scanf("%f", &espaco);
    printf("Tempo gasto em horas:");
    scanf("%f", &tempo);

    printf("\n Vm= %.1fkm/h", calcVelocidadeMedia(espaco, tempo));
    return 0;
}

float calcVelocidadeMedia(float espaco, float tempo){
    return espaco/tempo;
}