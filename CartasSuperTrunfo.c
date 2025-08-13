#include <stdio.h>

//Desafio Super trunfo - Aluno:Rafael Palmares: Estácio 1º semestre Prof°: Sérgio Cardoso

int main(){

    int população1, pontos1;
    char estado1 = 'R', cod1[10], cidade1[20];
    float area1, pib1;
    
    
    int população2, pontos2;
    char estado2 = 'B', cod2[10], cidade2[20];
    float area2, pib2;
    
    //carta1
    printf("\n\nBem vindo ao Super trunfo!\n\nVamos cadastrar 2 Cartas :)\n");
    printf("digite por favor a seguir, as informações solicitadas ...\n");
    printf("Estado uma letra: ");
    scanf(" %c", &estado1);
    
    printf("Código: ");
    scanf("%s", cod1);
    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &população1);
    printf("Área: ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    //carta2
    printf("\n\nMuito bem,\nAgora vamos fazer o mesmo com sua segunda carta\n");
    printf("digite as informações solicitadas ...\n");
    printf("Estado uma letra: ");
    scanf(" %c", &estado2);
    
    printf("Código: ");
    scanf("%s", cod2);
    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &população2);
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    printf("\n\nSua 2 cartas foram cadastradas com sucesso!");
    printf("\n\n");

    printf("\nCarta 01 \nEstado:%c\nCodigo da Carta:%s\nNome da Cidade:%s\nPopulação:%d\nÁrea:%.2f Km²\nPIB:%f bilhões de reais\nNúmero de Pontos Turísticos:%d", estado1, cod1, cidade1, população1, area1, pib1, pontos1);
    printf("\n\n");
    printf("\nCarta 02 \nEstado:%c\nCodigo da Carta:%s\nNome da Cidade:%s\nPopulação:%d\nÁrea:%.2f Km²\nPIB:%f bilhões de reais\nNúmero de Pontos Turísticos:%d", estado2, cod2, cidade2, população2, area2, pib2, pontos2);

    return 0;
}