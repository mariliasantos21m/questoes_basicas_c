/*
Função : Calcula valor e desconto aplicado
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

float calculaDesconto(float valorCarro, int desconto);

int main(){
    float valorCarro,valorDesconto, valorPagar, totalValorDesconto, totalValorPago;
    int desconto;

    printf("Valor Carro: ");
    scanf("%f", &valorCarro);

    while(valorCarro >0){
        printf("\nCombustivel (1-alcool, 2- gasolina, 3-diesel):");
        scanf("%d", &desconto);

        switch (desconto){
            case 1:
                desconto = 28;
                break;
            case 2:
                desconto = 22;
                break;
            case 3:
                desconto = 12;
                break;
            default:
                printf("\nCombustível inválido.");
                printf("\nCombustivel (1-alcool, 2- gasolina, 3-diesel):");
                scanf("%d", &desconto);
                break;
        }

        valorDesconto= calculaDesconto(valorCarro, desconto);
        valorPagar= valorCarro - calculaDesconto(valorCarro, desconto);

        totalValorDesconto+=valorDesconto;
        totalValorPago+=valorPagar;

        printf("\nValor desconto: %.2f", valorDesconto);
        printf("\nValor a ser pago: %.2f", valorPagar);

        printf("\nValor Carro: ");
        scanf("%f", &valorCarro);
    }

    printf("\nValor total desconto: %.2f", totalValorDesconto);
    printf("\nValor total a ser pago: %.2f", totalValorPago);

    return 0;
}

float calculaDesconto(float valorCarro, int desconto){
    return valorCarro * desconto/100;
}