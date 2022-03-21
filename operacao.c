#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int numero1 ;
    int numero2 ;

    printf("Escolha o primeiro números: \n");
    scanf("%d" , &numero1);
    printf("Escolha o segundo número: \n");
    scanf("%d" , &numero2);

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    int divisao = numero1 / numero2;
    double media = soma / 2.0;

    printf("A soma = %d\n" ,soma);
    printf("A subtração = %d\n" ,subtracao);
    printf("A multiplição = %d\n" ,multiplicacao);
    printf("A divisão = %d\n" , divisao);
    printf("A média = %.2f\n" , media);
}