#include <stdio.h>

int main(){
       
    //carta1

    int pontos1;
    unsigned long int populacao1;
    char estado1 = 'R', cod1[10], cidade1[20], carta1[20] = "Carta 1";
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
    char estado2 = 'B', cod2[10], cidade2[20], carta2[20] = "Carta 2";
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

    printf("*** Agora vamos ver qual carta é mais forte? ***\n\n");
    printf("veja abaixo a comparação dos atributos entre a %s e a %s\n\n", carta1, carta2);
    printf("A %s tem a População de: %u\nE a %s, tem a população de: %u\n\n", carta1, populacao1, carta2, populacao2);


    if (populacao1 > populacao2) {
    printf("Sendo Assim, A População de %s ganhou por ser maior !!!\n", carta1);
  } else {
    printf("Sendo Assim, A População da Cidade de %s ganhou por ser maior !!!\n", carta2);
  }
   
    
    
    return 0;
}
