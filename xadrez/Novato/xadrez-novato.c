#include <stdio.h>
#define cimadireita printf("Cima, Direita\n"); // É só pro bispo. Eu fiz esses '#define' 
#define baixo printf("Baixo\n");               // pra não ter que digitar mil e um "printf", cansa muito de fazer
#define cima printf("Cima\n");                 // toda hora.
#define direita printf("Direita\n");
#define esquerda printf("Esquerda\n");

int main() {
    // torre, 5 casas para a direita
    printf("Movimento da Torre:\n");
    for(int casa_andada_torre = 0; casa_andada_torre < 5; casa_andada_torre++) {
        direita
    }

    
    // bispo, 5 casa na diagonal (cima direita)
    int casas_andadas_bispo = 0;
    printf("\nMovimento do Bispo:\n");
    while(casas_andadas_bispo < 5) {
        cimadireita
        casas_andadas_bispo++;
    }

    // rainha, 8 casa pra esquerda
    int casas_andadas_rainha = 0;
    printf("\nMovimento da Rainha:\n");
    do{
        esquerda
        casas_andadas_rainha++;
    } while (casas_andadas_rainha< 8);
    
    return 0;
}

