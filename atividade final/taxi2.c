#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n\n");

    int bandeira; 

    float bandeira1 = 1.80;
    float bandeira2 = 2.30;
    
    float kmRodado;

    float valor;

    float valorMinimo = 3.50;

    printf("ATENCAO, taxa minima do taxi : 3.50\n");

    printf("Digite o numero da bandeira <1 ou 2> \n");
    scanf("%d", &bandeira);


    printf("Digite a kilometragem rodada \n");
    scanf("%f", &kmRodado);



    if(bandeira == 1){
         valor = kmRodado * bandeira1;
    }else{
         valor = kmRodado * bandeira2;
    }

    if(valor < valorMinimo){
        printf("O valor da corrida é %.2f", valorMinimo);
    }else{
         printf("O valor da corrida é : %.2f \n", valor);
    }
}
