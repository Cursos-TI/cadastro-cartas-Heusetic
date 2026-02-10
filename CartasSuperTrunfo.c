#include <stdio.h>

int main() {

 

  char estado1;
  char código1[5];
  char cidade1[50]; 
  int populacao1; 
  float area1;
  float pib1;
  int pontos;

  
  char estado2[6]; 
  char código2[5];
  char cidade2[50]; 
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  printf("Cadastro carta 1\n");
  
  printf("estado :");
  scanf(" %c", &estado1);

  printf("código :");
  scanf("%s\n", &código1);

  printf("cidade :");
  scanf("%s", &cidade1);

  printf("populacao :");
  scanf("%d", &populacao1);

  printf("area :");
  scanf("%f", &area1);

  printf("pib :");
  scanf("%f", &pib1);
  return 0;

}  