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

    // cavalo, anda em L, dois baixo, um esquerda
    printf("\nMovimento do Cavalo: \n");
    for(int cavalobaixo = 0; cavalobaixo < 2; cavalobaixo++){
        baixo
        if(cavalobaixo == 1){
            // Não faço ideia se é pra fazer assim (usando um if pra conter um do while),
            // mas foi a melhor coisa que pensei tentando fazer.
            // Se não tivesse o "if" a saida ia ser "Baixo" "Esquerda" "Baixo" "Esquerda".
            // Ao meu professor, se estiver errado, por favor, abra uma "Issue" no repositório do GitHub. 
            int cavaloesquerda = 0;
                do {
                    esquerda
                    cavaloesquerda++;
            } while(cavaloesquerda < 1);
        }
    };
    
    return 0;
}\

