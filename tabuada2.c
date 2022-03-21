#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int multiplicador ;
    printf("Tabuada do: ");
    scanf("%d" , &multiplicador);
    
    
    for(int i = 0; i <= 10; i++){
        int resultado = multiplicador * i;
        printf("%d X %d = %d\n" , multiplicador , i , resultado);
    }
}