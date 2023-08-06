/*
Função : Calcula IMC
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float calculaIMC(float altura, float peso);

int main(){
    float altura, peso;

    printf("Altura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);

    printf("\nIMC= %.1f", calculaIMC(altura, peso));

    printf(
        "\n\nVALORES DE IMC"
        "\nAbaixo do peso: menor que 18,5"
        "\nNormal: entre 18,5 e 24,9"
        "\nAcima do peso: entre 25 e 29,9"
        "\nObeso:30 ou mais"
    );

    return 0;
}

float calculaIMC(float altura, float peso){
    return peso/(altura*altura);
}
