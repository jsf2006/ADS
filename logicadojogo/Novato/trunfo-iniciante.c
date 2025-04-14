#include <stdio.h>

void comparar(int populacao1, int populacao2, float areakm1, float areakm2, float pib1, float pib2, int pontos1, int pontos2, float densidade1, float densidade2, float pibpcap1, float pibpcap2, float superpoder1, float superpoder2, char cidade[], char cidade2[]){
  printf("\n#### COMPARAÇÃO DE CARTAS ####\n\n");
  // isso ficou horrível. meu pai do céu. Eu ia fazer usando else if mas dei uma pesquisada antes
  printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
  printf("Área: Carta %d venceu (%d)\n", (areakm1 > areakm2 ? 1 : 2), (areakm1 > areakm2));
  printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2 ? 1 : 2), (pontos1 > pontos2));
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2)); // já que tem que ser o inverso né.
  printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpcap1 > pibpcap2 ? 1 : 2), (pibpcap1 > pibpcap2));
  printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2 ? 1 : 2), (superpoder1 > superpoder2));

  printf("População: Carta 1 - %s: %u\n", cidade, populacao1);
  printf("População: Carta 2 - %s: %u\n", cidade2, populacao2);
  if(populacao1 > populacao2){
    printf("Resultado: Carta 1 - (%s) Venceu!\n", cidade);
  }else{
    printf("Resultado: Carta 2 - (%s) Venceu!\n", cidade2);
  }
}

void showmeyourcardsbaby(int numero, char estado[], char codigo[], char cidade[], int populacao, float areakm2, float pib, int pontoturistico, float densidade, float pibpercapita){
  printf("\nCarta %u:\n", numero);
  printf("Estado: %c\n", estado[0]);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %u\n", populacao);
  printf("Área Km²: %.3f Km²\n", areakm2);
  printf("PIB: %f Milhões de reais\n", pib);
  printf("Número de pontos turísticos: %u\n", pontoturistico);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);
  printf("PIB Per Capita: %.2f reais\n", pibpercapita);
  printf("\n \n");
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
  float superpoder1;
  
  // cartão 2
  int numero2 = 2;
  char estado2[2];
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float areakm2;
  float pib2;
  int pontoturistico2;
  float superpoder2;
  printf("\nPreencha os dados do primeiro cartão:\n");

  printf("Qual o estado do cartão?\n");
  scanf(" %c", &estado[0]);

  printf("Qual o código do cartão?\n");
  scanf(" %3s", codigo);

  printf("Qual a cidade do cartão?\n");
  scanf(" %[^\n]", cidade);

  printf("Qual a população da cidade no cartão?\n");
  scanf(" %d", &populacao);

  printf("Qual o tamanho da cidade no cartão em km²? (Utilize '.' ao invés de ',' !!) \n");
  scanf(" %f", &areakm);

  printf("Qual o PIB da cidade no cartão?\n");
  scanf(" %f", &pib);

  printf("Qual o número de pontos turísticos da cidade do cartão?\n");
  scanf(" %d", &pontoturistico);

  // segundo cartão
  printf("\nPreencha os dados do segundo cartão:\n");

  printf("Qual o estado do cartão?\n");
  scanf(" %c", &estado2[0]);

  printf("Qual o código do cartão?\n");
  scanf(" %3s", codigo2);

  printf("Qual a cidade do cartão?\n");
  scanf(" %[^\n]", cidade2);

  printf("Qual a população da cidade no cartão?\n");
  scanf(" %d", &populacao2);

  printf("Qual o tamanho da cidade no cartão em km²? (Utilize '.' ao invés de ',' !!)\n"); // BUG: por causa de.. Linguagem, as coisas são invertidas, virgula é pra milhares, e ponto é decimal nos estados unidos (aonde C foi criado).
  scanf(" %f", &areakm2);

  printf("Qual o PIB da cidade no cartão?\n");
  scanf(" %f", &pib2);

  printf("Qual o número de pontos turísticos da cidade do cartão?\n");
  scanf(" %d", &pontoturistico2);

  // calculo de densidade e pib per capita, não gosto de fazer desse jeito de ficar duplicando variável, mas vai ser o que rola sem poder usar for/while/elseif
  float densidade;
  float densidade2;
  float pibpercapita;
  float pibpercapita2;

  densidade = populacao / areakm;
  densidade2 = populacao2 / areakm2;
  pibpercapita = populacao / pib;
  pibpercapita2 = populacao2 / pib;
  superpoder1 = populacao + areakm + pib + pontoturistico + pibpercapita + densidade;
  superpoder2 = populacao2 + areakm2 + pib2 + pontoturistico2 + pibpercapita2 + densidade2;
  //printf("%.2f", superpoder1);
  //printf("%.2f", superpoder2);

  showmeyourcardsbaby(numero, estado, codigo, cidade, populacao, areakm, pib, pontoturistico, densidade, pibpercapita);
  showmeyourcardsbaby(numero2, estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontoturistico2, densidade2, pibpercapita2);
  comparar(populacao, populacao2, areakm, areakm2, pib, pib2, pontoturistico, pontoturistico2, densidade, densidade2, pibpercapita, pibpercapita2, superpoder1, superpoder2, cidade, cidade2);
}

int main(){
  printf("Buenos dias, vamos criar alguns cartões?\n");
  criarcartao();
}

