#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
       
    //carta1

    int pontos1, escolhajogador1;
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
   
     // Menu Switch

     printf("***Agora iremos fazer um Duelo entre Cartas!***\n");
     printf("Você irá escolher qual atributo comparar\n");
     printf("Lembre se que a carta com maior atributo ganhará... vamos lá\n");
     printf("Escolha uma Opção:\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade demográfica\n");
     printf("Escolha: ");
     scanf("%d", &escolhajogador1);



    switch (escolhajogador1)
 {
   case 1: // população
    printf("1. Comparação de População\n");
     if (populacao1 > populacao2){                                  
    printf("A população de %s é de: %u, e então Ganhou!", cidade1, populacao1);                      
 } else if (populacao1 < populacao2){          
    printf("A população de %s é de: %u, e então Ganhou!\n", cidade2, populacao2);                                                  
  } else { 
    printf("Houve um empate!\n");
  } break;

    case 2: // área
    printf("2. Comparação da Área\n");
     if (area1> area2){                                  
    printf("A Área de %s é de: %.2f, e então Ganhou!",cidade1, area1);                      
 } else if (area1 < area2){          
    printf("A Área de %s é de: %.2f, e então Ganhou!\n",cidade2, area2);                                                  
  } else { 
    printf("Houve um empate!\n");
  } break;

   case 3: // pib
    printf("3. Comparação de PIB\n");
     if (pib1 > pib2){                                  
    printf("O PIB de %s é de: %.2f, e então Ganhou!",cidade1, pib1);                      
 } else if (pib1 < pib2){          
    printf("O PIB de %s é de: %.2f, e então Ganhou!\n",cidade2, pib2);                                                  
  } else { 
    printf("Houve um empate!\n");
  } break;

    case 4: // pontos
    printf("4. Pontos Túristicos\n");
     if (pontos1 > pontos2){                                  
    printf("O Número de pontos turísticos da %s é de: %d, e então Ganhou!",cidade1, pontos1);                      
 } else if (pontos1 < pontos2){          
    printf("O Número de pontos turísticos da %s é de: %d, e então Ganhou!",cidade2, pontos2);                                                  
  } else { 
    printf("Houve um empate!\n");
  } break;

   case 5: // densidade
      printf("5. Densidade demográfica (Valor menor ganha)\n");
     if (densidade1 < densidade2){                                  
    printf("A Densidade demográfica de %s é de: %.2f, e então Ganhou!",cidade1, densidade1);                      
 } else if (densidade1 > densidade2){          
    printf("A Densidade demográfica de %s é de: %.2f, e então Ganhou!",cidade2, densidade2);                                                  
  } else { 
    printf("Houve um empate!\n");
  } break;
   
    default:
    printf("Opção Inválida\n");
    break;
  }


 return 0;
}
