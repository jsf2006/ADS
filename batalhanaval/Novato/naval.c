#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {
    int tabuleiro[LINHA][COLUNA] = {{0}};
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    int linha_hoz = 2;
    int col_hoz = 4;
    
    int linha_vert = 7;
    int col_vert = 9;

  // Olha se sobrepõe e coloca o navio 1 (horizontal) no mapa, também verifica se ficou fora do tabuleiro.
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linha_hoz][col_hoz + i] == 3) {
            printf("Erro: sobreposição ao colocar o navio horizontal no mapa!\n");
            return 1; 
        }else if((col_hoz + i) >= COLUNA || linha_hoz >= LINHA){
          printf("Erro: Navio fora do mapa! (Coordenada invalida)\n");
          return 1;
    }
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_hoz][col_hoz + i] = navio_horizontal[i];
    }

    // Olha se sobrepõe e coloca o navio 2 (vertical) no mapa, praticamente ctrl+c-v
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linha_vert + i][col_vert] == 3) {
            printf("Erro: sobreposição ao colocar navio vertical no mapa!\n");
            return 1;
        }else if((linha_vert + i) >= LINHA || col_vert >= COLUNA){
          printf("Erro: Navio fora do mapa! (Coordenada invalida)\n");
          return 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_vert + i][col_vert] = navio_vertical[i];
    }

    // Exibe o tabuleiro
    printf("\nTabuleiro:\n\n");
    for (int l = 0; l < LINHA; l++) {
        for (int c = 0; c < COLUNA; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        printf("\n");
    }
}


