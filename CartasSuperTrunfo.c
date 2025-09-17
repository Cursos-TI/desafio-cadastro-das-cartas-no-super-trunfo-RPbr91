#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
       
    //carta1

    int pontos1, primeiroAtributo, resultado1;
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

    int pontos2, segundoAtributo, resultado2;
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
   
       // Primeira escolha de atributo 

     printf("***Agora iremos fazer um Duelo entre Cartas!***\n");
     printf("Você irá escolher 2 atributos para comparar entre as cartas\n");
     printf("Para cada atributo, a regra geral é: vence a carta com o maior valor.\n\n");
     printf("Escolha o Primeiro Atributo a comparar:\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade demográfica\n");
     printf("Escolha: \n");
     scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1: // Comparação população 
        printf("1. Vamos comparar a População Entre a cidade de %s e de %s\n", cidade1, cidade2);
        resultado1 = populacao1 > populacao2 ? 1: 0;
        break;
    case 2: // Comparação  área
        printf("2. Vamos comparar a Área de %s e de %s\n", cidade1, cidade2);
        resultado1 = area1 > area2 ? 1: 0;
        break;
    case 3: // Comparação  pib
        printf("3.  Vamos comparar o PIB de %s e de %s\n", cidade1, cidade2);
        resultado1 = pib1 > pib2 ? 1: 0;
        break;
    case 4: // Comparação pontos
        printf("4. Vamos comparar os Pontos Túristicos das Cidades de %s e de %s\n", cidade1, cidade2);
        resultado1 = pontos1 > pontos2 ? 1: 0;                                 
        break;
    case 5: // Comparação  densidade
        printf("5. Vamos comparar a Densidade demográfica (Valor menor ganha) de %s e de %s\n", cidade1, cidade2);
        resultado1 = densidade1 < densidade2 ? 1: 0;
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }

           // Segunda escolha de atributo
     printf("Agora escolha o Segundo Atributo:\n\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade demográfica\n");
     printf("Escolha: \n");
     scanf("%d", &segundoAtributo);
            
     if (primeiroAtributo == segundoAtributo)  
     {
        printf("Você escolheu o mesmo Atributo!");
     } else {
        switch (segundoAtributo)
        {
       case 1: // Comparação  população
           printf("1. Vamos comparar a População Entre a cidade de %s e de %s\n", cidade1, cidade2);
           resultado2 = populacao1 > populacao2 ? 1: 0;
           break;
       case 2: //  Comparação área
           printf("2. Vamos comparar a Área de %s e de %s\n", cidade1, cidade2);
           resultado2 = area1 > area2 ? 1: 0;
           break;
       case 3: // Comparação  pib
           printf("3.  Vamos comparar o PIB de %s e de %s\n", cidade1, cidade2);
           resultado2 = pib1 > pib2 ? 1: 0;
           break;
      case 4: //  Comparação  pontos
           printf("4. Vamos comparar os Pontos Túristicos das Cidades de %s e de %s\n", cidade1, cidade2);
           resultado2 = pontos1 > pontos2 ? 1: 0;                                 
           break;
     case 5: //  Comparação densidade
           printf("5. Vamos comparar a Densidade demográfica (Valor menor ganha) de %s e de %s\n", cidade1, cidade2);
           resultado2 = densidade1 < densidade2 ? 1: 0;
           break;
    default:
        printf("Opção Inválida\n");
        break;
     }

     if (resultado1 && resultado2)
     {
        printf("Parabéns, você venceu por ter ganhado nos dois atributos!\n\n");

     } else if (resultado1 != resultado2){
        printf("Empatou!\n\n");
     } else {
        printf("Infelizmente você Perdeu!!!\n\n");
     }
     }
        
     
     

return 0;

}
