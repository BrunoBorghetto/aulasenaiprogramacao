#include <stdio.h>

int main(){

    printf("Escola Senai Euclides Facchini Votuporanga\n");
    printf("Bruno Borghetto Rocha\n");

    int casosSuspeitos ;
    int casosConfirmados ;
    int quantidadeMortes ;

    printf("Preencha com as seguintes informações sobre a Dengue em Votuporanga\n");
    printf("Casos suspeitos : ");
    scanf("%d", &casosSuspeitos);
    printf("Casos confirmados : ");
    scanf("%d", &casosConfirmados);
    printf("Quantidade de mortes : ");
    scanf("%d", &quantidadeMortes);

    int soma = casosSuspeitos + casosConfirmados + quantidadeMortes;

    printf("Informações sobre a Dengue em Votuporanga\n");
    printf("Casos suspeitos: %d\n" , casosSuspeitos);
    printf("Casos confirmados: %d\n" , casosConfirmados);
    printf("Total de mortes: %d\n" , quantidadeMortes);
    printf("Total da pesquisa: %d" , soma);


}


