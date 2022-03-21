#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int numeroEscolhido;

    printf("Escolha um numero:");
    scanf("%d" , &numeroEscolhido);

    if(numeroEscolhido %2 == 0){
        printf("O número é par!\n");
    }else{
        printf("O número é impar!\n");
    }

}