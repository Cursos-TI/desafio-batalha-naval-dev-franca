#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int i, j; 

    // --- 1. Criando o Oceano ---
    printf("Inicializando o tabuleiro com agua (0)...\n\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- 2. Definindo a Frota ---
    int navioH_linha = 2;
    int navioH_coluna = 2;

    int navioV_linha = 5;
    int navioV_coluna = 5;

    // --- 3. Posicionando os Navios ---
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navioH_linha][navioH_coluna + i] = 3;
    }

    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navioV_linha + i][navioV_coluna] = 3;
    }

    // --- 4. Mostrando o Campo de Batalha ---
    printf("Tabuleiro final com os navios (3):\n\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}