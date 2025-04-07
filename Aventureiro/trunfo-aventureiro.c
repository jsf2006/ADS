#include <stdio.h>

void showmeyourcardsbaby(int numero, char estado[], char codigo[], char cidade[], int populacao, float areakm2, float pib, int pontoturistico, float densidade, float pibpercapita){
  printf("\nCarta %u:\n", numero);
  printf("Estado: %c\n", estado[0]);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %u\n", populacao);
  printf("Área Km²: %.2f Km²\n", areakm2);
  printf("PIB: %.2f Bilhões de reais\n", pib);
  printf("Número de pontos turísticos: %u\n", pontoturistico);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);
  printf("PIB Per Capita: %.2f reais\n", pibpercapita);
}


void criarcartao(){
  // cartão 1
  int numero = 1;
  char estado[2];
  char codigo[4];
  char cidade[50];
  int populacao;
  float areakm;
  float pib;
  int pontoturistico;
  
  // cartão 2
  int numero2 = 2;
  char estado2[2];
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float areakm2;
  float pib2;
  int pontoturistico2;

  printf("\nPreencha os dados do primeiro cartão:\n");

  printf("Qual o estado do cartão?\n");
  scanf(" %c", &estado[0]);

  printf("Qual o código do cartão?\n");
  scanf("%3s", codigo);

  printf("Qual a cidade do cartão?\n");
  scanf(" %[^\n]", cidade);

  printf("Qual a população da cidade no cartão?\n");
  scanf("%d", &populacao);

  printf("Qual o tamanho da cidade no cartão em km²?\n");
  scanf("%f", &areakm);

  printf("Qual o PIB da cidade no cartão?\n");
  scanf("%f", &pib);

  printf("Qual o número de pontos turísticos da cidade do cartão?\n");
  scanf("%d", &pontoturistico);

  printf("\nPreencha os dados do segundo cartão:\n");

  printf("Qual o estado do cartão?\n");
  scanf(" %c", &estado2[0]);

  printf("Qual o código do cartão?\n");
  scanf("%3s", codigo2);

  printf("Qual a cidade do cartão?\n");
  scanf(" %[^\n]", cidade2);

  printf("Qual a população da cidade no cartão?\n");
  scanf("%d", &populacao2);

  printf("Qual o tamanho da cidade no cartão em km²?\n");
  scanf("%f", &areakm2);

  printf("Qual o PIB da cidade no cartão?\n");
  scanf("%f", &pib2);

  printf("Qual o número de pontos turísticos da cidade do cartão?\n");
  scanf("%d", &pontoturistico2);

  // calculo de densidade e pib per capita, não gosto de fazer desse jeito de ficar duplicando variável, mas vai ser o que rola sem poder usar for/while/elseif
  float densidade;
  float densidade2;
  float pibpercapita;
  float pibpercapita2;
  
  densidade = populacao / areakm;
  densidade2 = populacao2 / areakm2;
  pibpercapita = populacao / pib;
  pibpercapita2 = populacao2 / pib;

  
  showmeyourcardsbaby(numero, estado, codigo, cidade, populacao, areakm, pib, pontoturistico, densidade, pibpercapita);
  showmeyourcardsbaby(numero2, estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontoturistico2, densidade2, pibpercapita2);
}

int main(){
  printf("Buenos dias, vamos criar alguns cartões?\n");
  criarcartao();
}

