/*
Função : Imprimir números primos de 700 a 1100
Autor : Marília
Data : 21-05-2023
Observações: Tentei fazer de um modo mais limpo, professor. Mas acabou não dando certo :(
*/

#include <stdio.h>
#include <stdlib.h>

void calcularNumPrimoCorrespondente(int num1, int num2);
int main(){
    calcularNumPrimoCorrespondente(700, 1100);
    return 0;
}

void calcularNumPrimoCorrespondente(int num1, int num2){
    int quantDivisoresNum;
    int numprimo2=0, mensagemExibida=0;

    for (int i=num1; i<=num2; i++){
        if(i%2 == 0){
            int arrNumPrimo[i];
            for(int l=1; l<i; l++){
                for(int n=1; n<l; n++){
                    if(l%n ==0 && n!=1){
                        quantDivisoresNum++;
                    }
                }
                if(quantDivisoresNum ==0){
                    arrNumPrimo[l-1]=l;
                }
                quantDivisoresNum=0;
                for(int m=0; m<l; m++){
                    for (int x=0; x<l; x++){
                        if((arrNumPrimo[m] + arrNumPrimo[x])==i && arrNumPrimo[m] != arrNumPrimo[x]){
                            numprimo2=arrNumPrimo[x];
                        }
                    }
                    if(numprimo2 != 0 && mensagemExibida==0){
                        printf("\n% d = %d + %d", i,arrNumPrimo[m], numprimo2);
                        mensagemExibida++;
                    }
                    
                }
            }
            numprimo2=0;
            mensagemExibida=0;
        }
    }
}