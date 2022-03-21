#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int ladoQuadrado ;
   
    printf("Digite o lado do quadrado em cm: ");
    scanf("%d" , &ladoQuadrado);

    int multiplicador = ladoQuadrado * ladoQuadrado;
    int multiplica = ladoQuadrado * 4;

    printf("A area do quadrado é : %d\n" , multiplicador);
    printf("O perimetro do quadrado é : %d\n" , multiplica);



}