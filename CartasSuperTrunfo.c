#include <stdio.h>

int main() {

 

  char estado1[50];
  char código1[5];
  char cidade1[50]; 
  int populacao1; 
  float area1;
  float pib1;
  int pontos1;

  
  char estado2[50]; 
  char código2[5];
  char cidade2[50]; 
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

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
  scanf("%f", &area1);

  printf("pib :");
  scanf("%f", &pib1);

  printf("pontos turisticos :");
  scanf(" %d", &pontos1);

  printf("Cadastro carta 2\n");
  
  printf("estado :");
  scanf("%s", &estado2);

  printf("código :");
  scanf("%s", &código2);

  printf("cidade :");
  scanf("%s", &cidade2);

  printf("populacao :");
  scanf("%d", &populacao2);

  printf("area :");
  scanf("%f", &area2);

  printf("pib :");
  scanf("%f", &pib2);

  printf("pontos turisticos :");
  scanf(" %d", &pontos2);
         
    printf("\n====== carta 1 ======\n");

    printf("estado : %s\n", estado1);
    printf("codigo : %s\n", código1);
    printf("cidade : %S\n", cidade1);
    printf("populacao : %d\n", populacao1);
    printf("area : %.2f\n", area1);
    printf("pib : %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontos1);

    printf("\n====== carta 2 ======\n");

    printf("estado : %s\n", estado2);
    printf("codigo : %s\n", código2);
    printf("cidade : %S\n", cidade2);
    printf("populacao : %d\n", populacao2);
    printf("area : %.2f\n", area2);
    printf("pib : %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos2);

  
  return 0;

}  