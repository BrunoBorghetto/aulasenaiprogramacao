#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int numeroEscolhido;

    printf("Escolha um numero:");
    scanf("%d" , &numeroEscolhido);

    if(numeroEscolhido %2 == 0){
        printf("O n�mero � par!\n");
    }else{
        printf("O n�mero � impar!\n");
    }

}