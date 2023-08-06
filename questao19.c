/*
Função : Calcula tempo para a massa de um material ser menor que 0.05g
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

int calculaTempo(float massa);

int main(){
    float massa;

    printf("Massa inicial do material:");
    scanf("%f", &massa);

    printf("Tempo necessário: %ds", calculaTempo(massa));
    return 0;
}

int calculaTempo(float massa){
    int segundos=0;
    if(massa==0.05){
        return 50;
    }
    for(float i=massa; i>=0.05; i=i/2){
        segundos+=50;
    }
    return segundos;
}