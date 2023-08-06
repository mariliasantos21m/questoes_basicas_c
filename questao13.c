/*
Função : Converte graus em radianos
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float converteGrauRadiano(float angulo);

int main(){
    float angulo;

    printf("Angulo:");
    scanf("%f", &angulo);

    printf("R= %.1f", converteGrauRadiano(angulo));

    return 0;
}

float converteGrauRadiano(float angulo){
    return angulo * 3.14159265/180;
}
