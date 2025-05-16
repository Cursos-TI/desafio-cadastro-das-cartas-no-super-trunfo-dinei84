/**
 * Programa: Simulação de Movimento de Peças de Xadrez
 * Descrição: Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 *            utilizando diferentes estruturas de repetição para cada peça.
 * Autor: Claudinei Almeida Souza
 * Data: 15/05/2025
 */

#include <stdio.h>

int main() {
    // Constantes para o número de casas a serem movidas por cada peça
    const int TORRE_CASAS = 5;   // Torre: 5 casas para a direita
    const int BISPO_CASAS = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    const int RAINHA_CASAS = 8;  // Rainha: 8 casas para a esquerda
    
    // Variáveis para controle dos loops
    int i;
    
    printf("\n===== MOVIMENTO DA TORRE =====\n");
    printf("A Torre move-se %d casas para a direita:\n", TORRE_CASAS);
    
    // Movimento da Torre usando FOR
    // A Torre move-se em linha reta horizontalmente ou verticalmente
    for (i = 1; i <= TORRE_CASAS; i++) {
        printf("Direita\n");
    }
    
    printf("\n===== MOVIMENTO DO BISPO =====\n");
    printf("O Bispo move-se %d casas na diagonal para cima e à direita:\n", BISPO_CASAS);
    
    // Movimento do Bispo usando WHILE
    // O Bispo move-se na diagonal
    i = 1;
    while (i <= BISPO_CASAS) {
        printf("Cima, Direita\n");
        i++;
    }
    
    printf("\n===== MOVIMENTO DA RAINHA =====\n");
    printf("A Rainha move-se %d casas para a esquerda:\n", RAINHA_CASAS);
    
    // Movimento da Rainha usando DO-WHILE
    // A Rainha pode mover-se em todas as direções
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_CASAS);
    
    return 0;
}