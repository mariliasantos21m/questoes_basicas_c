/*
Função : Calcula juros composto
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float calcJurosComposto(float capital, float juros, int quantAnos);

int main(){
    float capital, juros;
    int quantAnos;

    printf("Capital:");
    scanf("%f", &capital);
    printf("Juros:");
    scanf("%f", &juros);
    printf("Qtd. anos:");
    scanf("%d", &quantAnos);
    
    printf("Capital Acumulado: %.2f", calcJurosComposto(capital, juros, quantAnos));
    return 0;
}

float calcJurosComposto(float capital, float juros, int quantAnos){
    float totalJuros=0.0;
    float valorAno=capital;
    for(int i=1; i<=quantAnos; i++){
        totalJuros+= valorAno + (valorAno * juros/100);
        valorAno= valorAno + (valorAno * juros/100);
    }
    return totalJuros;
}
