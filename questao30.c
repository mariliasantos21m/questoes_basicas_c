/*
Função : Imprimir números primos correspondentes de 2 a N
Autor : Marília
Data : 21-05-2023
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

void calcularNumPrimoCorrespondente(int num1, int num2);
int main(){
    int num;
    printf("Digite o valor máximo para comprovar Conjectura de Goldbach: ");
    scanf(" %d", &num);

    while(num < 2){
        printf("Digite um número maior que 2: ");
        scanf(" %d", &num);
    }

    calcularNumPrimoCorrespondente(2, num);
    return 0;
}

void calcularNumPrimoCorrespondente(int num1, int num2){
    int quantDivisoresNum;
    int numprimo2=0, mensagemExibida=0, contador;

    for (int i=num1; i<=num2; i++){
        if(i%2 == 0){
            if(i==2){
                printf("\n% d = %d + %d", i, i-1, i-1);
            }else{
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
                                contador++;
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
    printf("\ncontador: %d", contador);
}
