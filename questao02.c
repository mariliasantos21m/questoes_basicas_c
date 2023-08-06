/*
Função : Calcula salário professor
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>
#include <math.h>

float calculaSalarioProfessor(float vlrHoraAula, float qtdAula, float descontoInss);


int main(void){
    float vlrHoraAula, qtdAula, descontoInss;
    printf("Valor hora aula: ");
    scanf("%f", &vlrHoraAula);
    printf("Quantidade de aula: ");
    scanf("%f", &qtdAula);
    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &descontoInss);

    printf("Salário: %.2f", calculaSalarioProfessor(vlrHoraAula, qtdAula, descontoInss));
    return 1;
}

float calculaSalarioProfessor(float vlrHoraAula, float qtdAula, float descontoInss){
    float valorSemDesconto= vlrHoraAula * qtdAula;
    float valorDesconto= (valorSemDesconto * descontoInss) /100;

    return valorSemDesconto - valorDesconto;
}

