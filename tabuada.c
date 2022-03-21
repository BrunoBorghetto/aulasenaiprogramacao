#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    printf("Tabuada do 3\n");
    int multiplicador = 3;
    
    for(int i = 0; i <= 10; i++){
        int resultado = multiplicador * i;
        printf("%d X %d = %d\n" , multiplicador , i , resultado);
    }
}