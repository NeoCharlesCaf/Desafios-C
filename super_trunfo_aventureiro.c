#include <stdio.h>
//Pib per capita e Desidade populacional

int main(){
    //variaveis da carta
    char nome_cidade1[30] = "a1";
    char estado1 = 'a';
    char codigo_carta1[3] = "a00";
    int pontos_turisticos1 = 0;
    int populacao1 = 0;
    float pib1 = 1.0;
    float area1 = 1.0;
    float pibpercapita1 = 1.0;
    float densidadepopulacao1 = 1.0;

    //variaveis da carta 2
    char nome_cidade2[30] = "b";
    char estado2 = 'b';
    char codigo_carta2[3] = "b1";
    int pontos_turisticos2 = 0;
    int populacao2 = 0;
    float pib2 = 1.0;
    float area2 = 1.0;
    float pibpercapita2;
    float densidadepopulacao2;

    printf("/// Bem Vindo ao Super Trunfo ///\n");

    //registro da primeira carta
    printf("/// carta 1 ///");
    printf("\nNome da sua cidade:[sem espacos]:");
    scanf("%s", &nome_cidade1);
    printf("Estado: [Escolha entre A a H]:");
    scanf(" %c", &estado1);
    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pontos_turisticos1);
    printf("Qual a area total?: ");
    scanf("%f", &area1);
    printf("Qual e o PIB?: ");
    scanf("%f", &pib1);
    printf("Codigo: [letra do estado seguida de um numero de 01 a 04]:");
    scanf("%s", &codigo_carta1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    pibpercapita1 = (pib1*1000)/populacao1;
    densidadepopulacao1 = populacao1/area1;

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
    pibpercapita2 = (pib2*1000)/populacao2;
    densidadepopulacao2 = populacao2/area2;

    //Mostrar informações das cartas 1
    printf("\n\n ***Carta 1***\n");
    printf("Nome: %s\n", nome_cidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo de estado: %s\n", codigo_carta1);
    printf("populacao total: %d\n", populacao1);
    printf("quantidade de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Area: %.2fKm2\n", area1, densidadepopulacao1);
    printf("Pib: %.2fR$Milhoes\n", pib1);
    printf("Densidade populacional: %.2fHab/Km\n", densidadepopulacao1);
    printf("Pib per capita: %.2fR$Mil\n", pibpercapita1);

    printf("\n\n ***Carta 2***\n");
    printf("Nome: %s\n", nome_cidade2);
    printf("Estado: %c \n", estado2);
    printf("Codigo de estado: %s\n", codigo_carta2);
    printf("populacao total: %d\n", populacao2);
    printf("quantidade de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Area: %.2fKm2", area2);
    printf("Pib: %.2fR$Milhoes\n", pib2);
    printf("Densidade populacional: %.2fHab/Km\n", densidadepopulacao2);
    printf("Pib per capita: %.2fR$Mil\n", pibpercapita2);

    return 0;
}
