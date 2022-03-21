#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int idadePedro;
    int idadeJoana;

    printf("Digite a idade de Pedro: \n");
    scanf("%d" , &idadePedro);
    printf("Digite a idade de Joana: \n");
    scanf("%d" , &idadeJoana);

    if (idadeJoana < idadePedro){
        printf("Pedro é mais velho\n");

    } else{
        printf("Joana é mais velha\n");
    }
}