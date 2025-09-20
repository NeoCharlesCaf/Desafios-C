#include <stdio.h>

int main(){
    //variaveis da carta 1
    char nome_cidade[30] = "cidade";
    char estado;
    char codigo_carta[3] = "A01";
    int pontos_turisticos = 1;
    int populacao = 1;
    float pib = 1.5;
    float area = 1.0;

    //variaveis da carta 2
    char nome_cidade2[30] = "cidade";
    char estado2;
    char codigo_carta2[3] = "B01";
    int pontos_turisticos2 = 0;
    int populacao2 = 2;
    float pib2 = 2.5;
    float area2 = 2.0;



    printf("/// Bem Vindo ao Registrador de Cartas ///\n");
    //registro da primeira carta
    printf("/// carta 1 ///");
    printf("\nNome da sua cidade:[sem espacos]:");
    scanf("%s", &nome_cidade);
    printf("Estado: [Escolha entre A a H]:");
    scanf(" %c", &estado);
    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pontos_turisticos);
    printf("Qual a area total?: ");
    scanf("%f", &area);
    printf("Qual e o PIB?: ");
    scanf("%f", &pib);
    printf("Codigo: [letra do estado seguida de um numero de 01 a 04]:");
    scanf("%s", &codigo_carta);
    printf("Populacao: ");
    scanf("%d", &populacao);

    //registro da segunda carta
    printf("\n/// carta 2 ///\n");
    printf("Nome da sua cidade:[sem espacos]:");
    scanf(" %s", &nome_cidade2);
    printf("Estado: [Escolha entre A a H]:");
    scanf(" %c", &estado2);
    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pontos_turisticos2);
    printf("Qual a area total?: ");
    scanf("%f", &area2);
    printf("Qual e o PIB?: ");
    scanf("%f", &pib2);
    printf("Codigo: [letra do estado seguida de um numero de 01 a 04]:");
    scanf(" %s", &codigo_carta2);
    printf("Populacao: ");
    scanf("%d", &populacao2);

    //Mostrar informações das cartas 1 e 2
    printf("\n\n ***Carta 1***\n");
    printf("Nome: %s\n", nome_cidade);
    printf("Estado: %c\n", estado);
    printf("Codigo de estado: %s\n", codigo_carta);
    printf("populacao total: %d\n", populacao);
    printf("quantidade de pontos turisticos: %d\n", pontos_turisticos);
    printf("Area: %.2fKm2\n", area);
    printf("Pib: %.2fR$\n", pib);

    printf("\n\n ***Carta 2***\n");
    printf("Nome: %s\n", nome_cidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo de estado: %s\n", codigo_carta2);
    printf("populacao total: %d\n", populacao2);
    printf("quantidade de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Area: %.2fKm2\n", area2);
    printf("Pib: %.2fR$\n", pib2);
    
    return 0;
}
