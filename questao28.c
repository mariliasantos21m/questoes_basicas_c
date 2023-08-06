/*
Função : Ordenar vetor
Autor : Marília
Data : 21-05-2023
Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void ordenarCrescente(int* vetor, int tamanho);

int main(){
    int vetor[TAMANHO];
    int* ponteiro_vetor;
    ponteiro_vetor= vetor;

    srand(time(NULL));
    printf("Sem ordenação: ");
    for (int i=0; i<TAMANHO; i++){
        vetor[i]= rand() % 100;
        printf("%d ", vetor[i]);
    }
    ordenarCrescente(ponteiro_vetor, TAMANHO);

    printf("\nCom ordenação: ");
    for (int i=0; i<TAMANHO; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}

void ordenarCrescente(int* vetor, int tamanho){
    int menor, posição_menor, valor_inicial;
    int* ponteiroNewVetor;
    int contador=0;

    if(vetor == vetor+(tamanho-1)){
        vetor=vetor;
        return;
    }
    else{
        valor_inicial= *vetor;

        for(int i=0; i<tamanho; i++){
            if(*(vetor+i) < menor || i==0){
                menor= *(vetor+i);
                posição_menor= i;
            }
        }
        *vetor=menor;
        *(vetor+posição_menor)= valor_inicial;

        
        ponteiroNewVetor= &vetor[1];
        ordenarCrescente(ponteiroNewVetor, tamanho-1);
    }
}
