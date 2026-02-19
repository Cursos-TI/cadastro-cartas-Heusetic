#include <stdio.h>

int main() {

   //trabalho super trunfo para faculdade, com objetivo de algo simples, porem funcional, que com base no que o professor pediu, teria que ser simples.
  
  char estado1[50];
  char código1[5];
  char cidade1[50]; 
  int populacao1; 
  float area1;
  float pib1;
  int pontos1;
  float densidade1, PibPerCapita1;
  float superpoder1;

  // ===== carta 2 ====== 

  char estado2[50]; 
  char código2[5];
  char cidade2[50]; 
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2, PibPerCapita2;
  float superpoder2; 

  printf("bem vindo ao super trunfo, cadastre suas cartas\n");

  printf("Cadastro carta 1\n");
  
  printf("estado :");
  scanf("%s", &estado1);

  printf("código :");
  scanf("%s", &código1);

  printf("cidade :");
  scanf("%s", &cidade1);

  printf("populacao :");
  scanf("%d", &populacao1);

  printf("area :");
  scanf(" %f", &area1);

  printf("pib :");
  scanf(" %f", &pib1);

  printf("pontos turisticos :");
  scanf(" %d", &pontos1);

  //calculos
  densidade1, populacao1/area1;
  PibPerCapita1 =  (pib1 * 1000000000)/populacao1;  //estou declarando o pib em bilhões.

  printf("Cadastro carta 2\n");
  
  printf("estado :");
  scanf("%S", &estado2);

  printf("código :");
  scanf("%s", &código2);

  printf("cidade :");
  scanf("%s", &cidade2);

  printf("populacao :");
  scanf("%d", &populacao2);

  printf("area :");
  scanf(" %f", &area2);

  printf("pib :");
  scanf(" %f", &pib2);

  printf("pontos turisticos :");
  scanf(" %d", &pontos2);

  //calculos
  densidade2, populacao2/area2;
  PibPerCapita1 =  (pib2 * 1000000000) /populacao2;

   //calcular o super poder, é a soma de todos os tributo exceto codigo, cidade e estado.
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + PibPerCapita1;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + PibPerCapita2;
         
    printf("\n====== carta 1 ======\n");

    printf("estado : %s\n", estado1);
    printf("codigo : %s\n", código1);
    printf("cidade : %S\n", cidade1);
    printf("populacao : %d\n", populacao1);
    printf("area : %.2f\n", area1);
    printf("pib : %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontos1);
    printf("densidade populacional : %.2f hab/km2\n", densidade1);
    printf("pib per capital : %.2f reais\n", PibPerCapita1);

    printf("\n====== carta 2 ======\n");

    printf("estado : %c\n", estado2);
    printf("codigo : %s\n", código2);
    printf("cidade : %S\n", cidade2);
    printf("populacao : %d\n", populacao2);
    printf("area : %.2f\n", area2);
    printf("pib : %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos2);
    printf("densidade populacional : %.2f hab/km2\n", densidade2);
    printf("pib per capital : %.2f reais\n", PibPerCapita2);
    
   //se o resultado for 1, a carta 1 é mais forte, se for 0, a carta 2 é mais forte.
  printf("\n======SUPER PODER======\n");
  printf("%d\n", superpoder1>superpoder2);
  return 0;

}  