#include <stdio.h>
#include <stdlib.h> // Usado para o return 0

int main() {
    int b = 1;
    int r = 0;


    // --- 1. Movimento da TORRE (usando 'for') ---
    // Requisito: 5 casas para a direita

    printf("--- Movimento da Torre (5 casas) ---\n");
    for (int t = 0; t < 5; t++) {
        printf("Direita\n"); //Imprime a direção do movimento da torre
      
    }

    // --- 2. Movimento do BISPO (usando 'while') ---
    // Requisito: 5 casas na diagonal para cima e à direita

    printf("\n--- Movimento do Bispo (5 casas) ---\n");
    while (b < 6) {
      printf("Cima, Direita\n");
      b++;
    }
    
    printf("\n--- Movimento da Rainha (8 casas) ---\n");
    // --- 3. Movimento da RAINHA (usando 'do-while') ---
    // Requisito: 8 casas para a esquerda

    do {
        printf("Esquerda\n");
        r++; // 3. Incrementamos o contador
    } 
    while (r < 8);


    return 0;
}
