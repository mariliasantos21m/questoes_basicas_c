/*
Função : TAD - Números complexos
Autor : Marília
Data : 21-05-2023
Observações:
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double parte_real;
    double parte_imaginaria;
} Complexo;


Complexo* criar_complexo(double parte_real, double parte_imaginaria);

void complexo_libera(Complexo* c);

void ler_complexo(Complexo* c, double* parte_real, double* parte_imaginaria);

void somar_complexo(Complexo* num1, Complexo* num2);

void subtrair_complexo(Complexo* num1, Complexo* num2);

void multiplicar_complexo(Complexo* num1, Complexo* num2);

void dividir_complexo(Complexo* num1, Complexo* num2);

void exibir_complexo(Complexo* num);

void obter_numeros(int flag_um_num, Complexo *num1, Complexo* num2);


int main(){
    int resposta;
    Complexo* num1;
    Complexo* num2;
    

    while(1){
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Exibir número\n");
        printf("0. Sair\n");

        scanf(" %d", &resposta);
        if(resposta == 0){
            complexo_libera(num1);
            complexo_libera(num2);
            break;
        }
        if(resposta == 5){
            obter_numeros(1, num1, num2);
        }
        obter_numeros(0, num1, num2);
        switch (resposta)
        {
            case 1: somar_complexo(num1, num2) ; break;
            case 2: subtrair_complexo(num1, num2) ; break;
            case 3: multiplicar_complexo(num1, num2) ; break;
            case 4: dividir_complexo(num1, num2) ; break;
            case 5: exibir_complexo(num1) ; break;
            default: printf("Alternativa não encontrada");
        }
    }

    return 0;
}



// DEPOIS DA MAIN O PROCESSAMENTO DAS FUNÇÕES
Complexo* criar_complexo(double parte_real, double parte_imaginaria){
    printf("aqui");
    Complexo* c= (Complexo*) malloc(sizeof(Complexo));
    if(c == NULL){
        printf("Memória insuficiente. \n");
    }
    c -> parte_real= parte_real;
    c -> parte_imaginaria= parte_imaginaria;
    return c;
}

void complexo_libera(Complexo* c){
    free(c);
}

void ler_complexo(Complexo* c, double* parte_real, double* parte_imaginaria){
    *parte_real = c -> parte_real;
    *parte_imaginaria = c -> parte_imaginaria;

}

void obter_numeros(int flag_um_num, Complexo* num1, Complexo* num2){
    double parte_real, parte_imaginaria;
    if(flag_um_num==1){
        printf("Digite o a parte real do número: ");
        scanf(" %lf", &parte_real);
        printf("Digite o a parte imaginária do número: ");
        scanf(" %lf", &parte_imaginaria);
        num1= criar_complexo(parte_real, parte_imaginaria);
        return;
    }else{
        printf("Digite o a parte real do número 1: ");
        scanf(" %lf", &parte_real);
        printf("Digite o a parte imaginária do número 1: ");
        scanf(" %lf", &parte_imaginaria);
        num1=criar_complexo(parte_real, parte_imaginaria);

        printf("Digite o a parte real do número 2:");
        scanf(" %lf", &parte_real);
        printf("Digite o a parte imaginária do número 2: ");
        scanf(" %lf", &parte_imaginaria);
        num2=criar_complexo(parte_real, parte_imaginaria);
    }

}

void somar_complexo(Complexo* num1, Complexo* num2){
    double sum_parte_real=  num1->parte_real + num2->parte_real;
    double sum_parte_imaginaria=  num1->parte_imaginaria+ num2->parte_imaginaria;

    printf("(%f + %fi) + (%f + %fi) = (%f + %fi)", 
        num1->parte_real, 
        num1->parte_imaginaria, 
        num2->parte_real, 
        num2->parte_imaginaria,
        sum_parte_real,
        sum_parte_imaginaria
    );
}

void subtrair_complexo(Complexo* num1, Complexo* num2){
    double sub_parte_real=  num1->parte_real + num2->parte_real;
    double sub_parte_imaginaria=  num1->parte_imaginaria+ num2->parte_imaginaria;

    printf("(%f + %fi) - (%f + %fi) = (%f + %fi)", 
        num1->parte_real, 
        num1->parte_imaginaria, 
        num2->parte_real, 
        num2->parte_imaginaria,
        sub_parte_real,
        sub_parte_imaginaria
    );
}

void multiplicar_complexo(Complexo* num1, Complexo* num2){
    double mult_parte_real=  (num1->parte_real * num2->parte_real) + (num1->parte_imaginaria * num2->parte_imaginaria);
    double mult_parte_imaginaria=  (num1->parte_real  * num2->parte_imaginaria) + (num2->parte_real  * num1->parte_imaginaria);

    printf("(%f + %fi) - (%f + %fi) = (%f + %fi)", 
        num1->parte_real, 
        num1->parte_imaginaria, 
        num2->parte_real, 
        num2->parte_imaginaria,
        mult_parte_real,
        mult_parte_imaginaria
    );
}

void dividir_complexo(Complexo* num1, Complexo* num2){
    double divisao_parte_imaginaria= (num1->parte_real * num2->parte_real) + (num1->parte_imaginaria * num2->parte_imaginaria) +
        ((num1->parte_imaginaria * num2->parte_real) - (num1->parte_real * num2->parte_imaginaria));
    
    double divisao_parte_real= (num2->parte_real * num2->parte_real) + (num2->parte_imaginaria * num2->parte_imaginaria);

    printf("(%f + %fi) - (%f + %fi) = (%f + %fi)", 
        num1->parte_real, 
        num1->parte_imaginaria, 
        num2->parte_real, 
        num2->parte_imaginaria,
        divisao_parte_real,
        divisao_parte_imaginaria
    );
}

void exibir_complexo(Complexo* num){
    printf("(%.1f + %.1fi)", num->parte_real, num->parte_imaginaria);
}