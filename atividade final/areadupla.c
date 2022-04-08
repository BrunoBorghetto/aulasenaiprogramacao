#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n\n");

    int basePrimeira;
    int alturaPrimeiro;
    int baseSegundo;
    int alturaSegundo;

    printf("Digite a base do primeiro retangulo em cm: \n");
    scanf("%d" , &basePrimeira);
    printf("Digite a altura do primeiro retangulo em cm: \n");
    scanf("%d" , &alturaPrimeiro);
    printf("Digite a base do segundo retangulo em cm: \n");
    scanf("%d" , &baseSegundo);
    printf("Digite a altura do segundo retangulo em cm: \n");
    scanf("%d" , &alturaSegundo);

    double multiplicadorPrimeiro = basePrimeira * alturaPrimeiro;
    double multiplicadorSegundo = baseSegundo * alturaSegundo;

    printf("A area do primeiro retangulo é: %.2f \n" , multiplicadorPrimeiro );
    printf("A area do segundo retangulo é: %.2f \n" , multiplicadorSegundo );

    if(multiplicadorPrimeiro > multiplicadorSegundo){
        printf("A area do primeiro retangulo é maior que o segundo");
    }
    if(multiplicadorPrimeiro < multiplicadorSegundo){
        printf("A area do segundo retangulo é maior que o primeiro");
    }
    else if(multiplicadorPrimeiro == multiplicadorSegundo){
        printf("A area dos retangulos são iguais");
    }
    else{
        printf("A area dos dois ratangulos são iguais");
    }
}
