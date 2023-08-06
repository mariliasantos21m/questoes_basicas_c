/*
Função : Calcula número de arranjos
Autor : Marília Santos - P3 - Ciência da Computação
Data : 31/03/2022
Observações:
*/

#include <stdio.h>

int calculaNumArranjo(int n, int r);

int main(){
    int n, r;
    printf("n: ");
    scanf("%d", &n);
    printf("r: ");
    scanf("%d", &r);

    printf("Número de Arranjos: %d", calculaNumArranjo(n, r));
}

int fatorial(int num){
    if(num == 0){
        return 1;
    }
    return num * fatorial(num-1);
}

int calculaNumArranjo(int n, int r){
    return fatorial(n)/fatorial(n-r);
}