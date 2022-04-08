#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n\n");

    double bandeira1 = 1.80;
    double bandeira2 = 2.30;
    int kmRodagem;
    int bandeiraEscolhida;

    printf("Digite o numero da bandeira 1 ou 2:\n");
    scanf("%d" , &bandeiraEscolhida);
  

    if(bandeiraEscolhida == 1){
        
        printf("Digite a kilometragem rodada: \n");
        scanf("%d" , &kmRodagem);
        printf("O valor da corrida é: %.2f" , kmRodagem * bandeira1);
    }
    if(bandeiraEscolhida == 2){

        printf("Digite a kilometragem rodada: \n");
        scanf("%d" , &kmRodagem);
        printf("O valor da corrida é: %.2f" , kmRodagem * bandeira2);
    }
}