#include <stdio.h>

// Ribeirão Pires
char pais[] = "Brasil";
int populacao1 = 124159;
float areakm1 = 99.1;
float pib1 = 2330.3; 
int pontos1 = 5;
float densidade1;
float pibpcap1;
float superpoder1;
char cidade1[] = "Ribeirão Pires";

// Suzano
char pais2[] = "Brazil"; // Só pra diferenciar, eu sei que os dois é do brasil.
int populacao2 = 300559;
float areakm2 = 206.24;
float pib2 = 9011.2; 
int pontos2 = 7;
float densidade2;
float pibpcap2;
float superpoder2;
char cidade2[] = "Suzano";


void showmeyourcardsbaby(int numero, char cidade[], int populacao, float areakm, float pib, int pontoturistico, float densidade, float pibpercapita){
  printf("\nCarta %d:\n", numero);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área Km²: %.3f Km²\n", areakm);
  printf("PIB: %.2f Milhões de reais\n", pib);
  printf("Número de pontos turísticos: %d\n", pontoturistico);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade);
  printf("PIB Per Capita: %.2f reais\n", pibpercapita);
  printf("\n");
}

void comparar() {
  printf("\n#### COMPARAÇÃO DE CARTAS ####\n\n");


  printf("População:\n");
  printf(" - %s (%s): %d\n", cidade1, pais, populacao1);
  printf(" - %s (%s): %d\n", cidade2, pais2, populacao2);
  if (populacao1 > populacao2)
    printf(" >> Carta 1 venceu!\n\n");
  else if (populacao2 > populacao1)
    printf(" >> Carta 2 venceu!\n\n");
  else
    printf(" >> Empate!\n\n");


  printf("Área:\n");
  printf(" - %s: %.2f km²\n", cidade1, areakm1);
  printf(" - %s: %.2f km²\n", cidade2, areakm2);
  if (areakm1 > areakm2)
    printf(" >> Carta 1 venceu!\n\n");
  else if (areakm2 > areakm1)
    printf(" >> Carta 2 venceu!\n\n");
  else
    printf(" >> Empate!\n\n");


  printf("PIB:\n");
  printf(" - %s: %.2f milhões\n", cidade1, pib1);
  printf(" - %s: %.2f milhões\n", cidade2, pib2);
  if (pib1 > pib2)
    printf(" >> Carta 1 venceu!\n\n");
  else if (pib2 > pib1)
    printf(" >> Carta 2 venceu!\n\n");
  else
    printf(" >> Empate!\n\n");


  printf("Pontos Turísticos:\n");
  printf(" - %s: %d\n", cidade1, pontos1);
  printf(" - %s: %d\n", cidade2, pontos2);
  if (pontos1 > pontos2)
    printf(" >> Carta 1 venceu!\n\n");
  else if (pontos2 > pontos1)
    printf(" >> Carta 2 venceu!\n\n");
  else
    printf(" >> Empate!\n\n");


  printf("Densidade Populacional (menor é melhor):\n");
  printf(" - %s: %.2f hab/km²\n", cidade1, densidade1);
  printf(" - %s: %.2f hab/km²\n", cidade2, densidade2);
  if (densidade1 < densidade2)
    printf(" >> Carta 1 venceu!\n\n");
  else if (densidade2 < densidade1)
    printf(" >> Carta 2 venceu!\n\n");
  else
    printf(" >> Empate!\n\n");


  printf("PIB per Capita:\n");
  printf(" - %s: %.2f reais\n", cidade1, pibpcap1);
  printf(" - %s: %.2f reais\n", cidade2, pibpcap2);
  if (pibpcap1 > pibpcap2)
    printf(" >> Carta 1 venceu!\n\n");
  else if (pibpcap2 > pibpcap1)
    printf(" >> Carta 2 venceu!\n\n");
  else
    printf(" >> Empate!\n\n");


  printf("Super Poder:\n");
  printf(" - %s: %.2f\n", cidade1, superpoder1);
  printf(" - %s: %.2f\n", cidade2, superpoder2);
  if (superpoder1 > superpoder2)
    printf(" >> Carta 1 venceu!\n");
  else if (superpoder2 > superpoder1)
    printf(" >> Carta 2 venceu!\n");
  else
    printf(" >> Empate!\n");
}


int main() {
  densidade1 = populacao1 / areakm1;
  densidade2 = populacao2 / areakm2;

  pibpcap1 = (pib1 * 1000000) / populacao1; // Convertendo milhões para reais
  pibpcap2 = (pib2 * 1000000) / populacao2;

  superpoder1 = populacao1 + areakm1 + pib1 + pontos1 + pibpcap1 + densidade1;
  superpoder2 = populacao2 + areakm2 + pib2 + pontos2 + pibpcap2 + densidade2;

  int escolha;
  printf("Buenos dias, Faça sua escolha\n 1 - Comparar\n 2 - Criar (indisponível)\n 3 - Sair\n");
  scanf("%d", &escolha);

  switch(escolha){
    case 1:
        showmeyourcardsbaby(1, cidade1, populacao1, areakm1, pib1, pontos1, densidade1, pibpcap1);
        showmeyourcardsbaby(2, cidade2, populacao2, areakm2, pib2, pontos2, densidade2, pibpcap2);
        comparar();
        break;
    case 2:
        printf("Eu falei que tá indisponível.\n");
        break;
    case 3:
        return 0;
    default:
        printf("Que isso?\n");
        return 0;
  }

  return 0;
}

