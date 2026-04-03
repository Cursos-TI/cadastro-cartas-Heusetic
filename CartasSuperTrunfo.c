#include <stdio.h>

int main() {
  
     char estado1[50], estado2[50];  
     char codigo1[5], codigo2[5];
     char cidade1[50], cidade2[50]; 
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int pontos1, pontos2;
     float densidade1, pibpercapita1, densidade2, pibberCapita2;
     float superpoder1, superpoder2;
     int opcao;
                          //trabalho super trunfo para faculdade, com objetivo de algo simples, porem funcional, que com base no que o professor pediu, teria que ser simples.
 do {
    printf("====MENU===\n");
    printf("1- cadastrar cartas\n");
    printf("2- ver as cartas\n");
    printf("3- comparar\n");
    printf("4- sair\n");
    printf("escolha: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:

     printf("bem vindo ao super trunfo, cadastre suas cartas\n");

     printf("Cadastro carta 1 \n");
  
     printf("estado : ");
     scanf("%d ", &estado1);

     printf("código :");
     scanf("%s ", &codigo1);

     printf("cidade :");
     scanf("%s ", &cidade1);

     printf("populacao :");
     scanf("%d ", &populacao1);

     printf("area :");
     scanf(" %f ", &area1);

     printf("pib :");
     scanf(" %f ", &pib1);

     printf("pontos turisticos :");
     scanf(" %d ", &pontos1);

     //calculos
     densidade1, populacao1/area1;
     pibpercapita1 =  (pib1 * 1000000000)/populacao1;  //estou declarando o pib em bilhões.

     printf("Cadastro carta 2\n");
  
     printf("estado :");
     scanf("%d", &estado2);

     printf("código :");
     scanf("%s ", &codigo2);

     printf("cidade :");
     scanf("%s ", &cidade2);

     printf("populacao :");
     scanf("%d ", &populacao2);

     printf("area :");
     scanf(" %f ", &area2);

     printf("pib :");
     scanf(" %f ", &pib2);

     printf("pontos turisticos :");
     scanf(" %d", &pontos2);

     densidade2, populacao2/area2;
     pibpercapita1=  (pib2 * 1000000000) /populacao2;
 
     //calcular o super poder, é a soma de todos os tributo exceto codigo, cidade e estado.
     superpoder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpercapita1;
     superpoder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibberCapita2;
         
     printf("\n====== carta 1 ======\n");

     printf("estado : %s\n", estado1);
     printf("codigo : %s\n", codigo1);
     printf("cidade : %s\n", cidade1);
     printf("populacao : %d\n", populacao1);
     printf("area : %.2f\n", area1);
     printf("pib : %.2f\n", pib1);
     printf("pontos turisticos: %d\n", pontos1);
     printf("densidade populacional : %.2f hab/km2\n", densidade1);
     printf("pib per capital : %.2f reais\n", pibpercapita1);

     printf("\n====== carta 2 ======\n");

     printf("estado : %s\n", estado2);
     printf("codigo : %s\n", codigo2);
     printf("cidade : %s\n", cidade2);
     printf("populacao : %d\n", populacao2);
     printf("area : %.2f\n", area2);
     printf("pib : %.2f\n", pib2);
     printf("pontos turisticos: %d\n", pontos2);
     printf("densidade populacional : %.2f hab/km2\n", densidade2);
     printf("pib per capital : %.2f reais\n", pibberCapita2);
      break;
    case 2:
        printf("==EXIBIR MAIOR CARTA==\n");

       if(populacao1 > populacao2){
         printf("carta 1: populaçao é maior\n");
        } else {
         printf("carta 2: populaçaos é maior\n");
        }
        if(area1 > area2) {
          printf("carta 1: area é maior\n");
        } else {
         printf("carta 2: area é maior\n");
        }
        break;
      default:
       break;
    }

  } while(opcao != 4);
    
   //mostrar resultado de qual carta tem o maior super poder
    printf("\n======SUPER PODER======\n");
    if(superpoder1 > superpoder2){
    printf("carta 1 super poder\n");
    } else {
    printf("carta 2 superpoder\n");
    }

  return 0;

}  