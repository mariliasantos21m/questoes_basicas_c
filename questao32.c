/*
Função : Ordenar Vetor com método de BubbleSort
Autor : Marília
Data : 21-05-2023
Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenaBubbleSort(int quantElementos);

int main(){
    int quantElementos;

    printf("Defina a quantidade de elementos do vetor:");
    scanf(" %d", &quantElementos);
    ordenaBubbleSort(quantElementos);

    return 0;
}

void ordenaBubbleSort(int quantElementos){
    int vetor[quantElementos];
    int aux, troca=1, qtdTroca=0;
    
    srand(time(NULL));
    printf("Sem ordenação:");
    for (int i=0; i<quantElementos; i++){
        vetor[i]= rand() % 100;
        printf("%d ", vetor[i]);
    }

    while(troca==1){
        troca=0;
        for(int i=0; i<quantElementos; i++){
            if(vetor[i] >= vetor[i+1]){
                troca=1;
                qtdTroca++;
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]= aux;
            }
        }
    }
    printf("\nCom ordenação:");
    for (int i=0; i<quantElementos; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nQuantidade de trocas: %d", qtdTroca);
}