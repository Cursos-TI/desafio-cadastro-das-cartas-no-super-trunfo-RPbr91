#include <stdio.h>

int main(){
       
    //carta1

    int pontos1;
    unsigned long int populacao1;
    char estado1 = 'R', cod1[10], cidade1[20];
    float area1, pib1, densidade1, densidadeinvertida1, pibpercapita1;
    
    printf("\n\nBem vindo ao Super trunfo!\n\nVamos cadastrar 2 Cartas :)\n");
    printf("digite por favor a seguir, as informações solicitadas ...\n");
    printf("Estado uma letra: ");
    scanf(" %c", &estado1);
    
    printf("Código: ");
    scanf("%s", cod1);
    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    densidadeinvertida1 = 1 / densidade1;

    
    //carta2

    int pontos2;
    unsigned long int populacao2;
    char estado2 = 'B', cod2[10], cidade2[20];
    float area2, pib2, densidade2, densidadeinvertida2, pibpercapita2;

   
    printf("\n\nMuito bem,\nAgora vamos fazer o mesmo com sua segunda carta\n");
    printf("digite as informações solicitadas ...\n");
    printf("Estado uma letra: ");
    scanf(" %c", &estado2);
    
    printf("Código: ");
    scanf("%s", cod2);
    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2  / populacao2;
    densidadeinvertida2 = 1 / densidade2;

    float superpoder1, superpoder2;

    superpoder1 = (float) (populacao1 + area1 + pib1 + pibpercapita1 + densidadeinvertida1 + pontos1);
    superpoder2 = (float) (populacao2 + area2 + pib2 + pibpercapita2 + densidadeinvertida2 + pontos2);

  
    printf("\nMuito Bem, Estas são suas 2 cartas cadastradas!\n");
    printf("\nCarta 01 \nEstado: %c\nCodigo da Carta: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nA Densidade Populacional é: %.2f\nO PIB per Capita é: %.2f reais\nSuperpoder 1: %f\n\n", estado1, cod1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpercapita1, superpoder1);
    printf("\nCarta 02 \nEstado: %c\nCodigo da Carta: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nA Densidade Populacional é: %.2f\nO PIB per Capita é: %.2f reais\nSuperpoder 2: %f\n\n", estado2, cod2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpercapita2, superpoder2);
   
 
    

    // resultado

    int resultadopopulacao, resultadoarea, resultadopib, resultadopontos, resultadodensidade, resultadopibpercapta, resultadosuperpoder;

    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontos = pontos1 > pontos2;
    resultadodensidade = densidade1 < densidade2;
    resultadopibpercapta = pibpercapita1 > pibpercapita2;
    resultadosuperpoder = superpoder1 > superpoder2;

    printf("*** Vamos ver agora qual carta é mais forte ***\n\n");
    printf("Se o resultado for 1 a carta 1 é vencedora do atributo.\n\n");
    printf("Se o resultado for 0 a carta 2 é vencedora do atributo.\n\n");

    printf("A população de Carta 1 é > que Carta 2?: %d\n", resultadopopulacao);
    printf("A Área de Carta 1 é > que a Área de Carta 2?: %d\n", resultadoarea);
    printf("O PIB de Carta 1 é > que o PIB de Carta 2?: %d\n", resultadopib);
    printf("A Número de Pontos Turísticos de Carta 1 é > que o de Carta 2?: %d\n", resultadopontos);
    printf("A Densidade Populacional de Carta 1 é < que a de Carta 2?: %d\n", resultadodensidade);
    printf("O PIB per Capita de Carta 1 > que o de Carta 2?: %d\n", resultadopibpercapta);
    printf("O SuperPoder de Carta 1 é > que o de Carta 2?: %d\n", resultadosuperpoder);
    
    
    return 0;
}
