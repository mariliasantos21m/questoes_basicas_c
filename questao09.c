/*
Função : Calcula intervalo entre duas horas distintas de um mesmo dia
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

int calculaIntervaloHoras(int horas1, int minutos1, int horas2, int minutos2);

int main(){
    int horas1, minutos1, horas2, minutos2, intervaloHoras, intervaloMinutos, retorno;

    printf("Hora 1 - ");
    scanf("%i:%i", &horas1, &minutos1);
    printf("Hora 2 - ");
    scanf("%i:%i", &horas2, &minutos2);

    retorno= calculaIntervaloHoras(horas1, minutos1, horas2, minutos2);
    intervaloHoras= retorno/60;
    intervaloMinutos= retorno%60;

    printf("Intervalo entre as horas: %.2d:%.2d", intervaloHoras, intervaloMinutos);
}

int calculaIntervaloHoras(int horas1, int minutos1, int horas2, int minutos2){
    int intervalo= ((horas1 *60) + minutos1) - ((horas2 *60) + minutos2);

    return intervalo < 0 ? intervalo*-1 : intervalo;
}
