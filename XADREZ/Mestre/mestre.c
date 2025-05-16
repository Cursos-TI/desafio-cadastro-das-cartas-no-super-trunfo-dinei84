/**
 * Programa: Simulação Avançada de Movimento de Peças de Xadrez
 * Descrição: Este programa simula o movimento de quatro peças de xadrez (Torre, Bispo, Rainha e Cavalo)
 *            utilizando técnicas avançadas como recursividade e loops complexos.
 * Autor: Claudinei Almeida Souza
 * Data: 15/05/2025
 */

#include <stdio.h>

// Protótipos das funções recursivas para movimentação das peças
void moveTorreRecursivo(int casasRestantes);
void moveBispoRecursivo(int casasRestantes);
void moveRainhaRecursivo(int casasRestantes);

// Função recursiva para simular o movimento da Torre
// A Torre move-se em linha reta horizontalmente ou verticalmente
void moveTorreRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    
    // Caso recursivo: imprime a direção e faz chamada recursiva
    printf("Direita\n");
    
    // Chamada recursiva com uma casa a menos
    moveTorreRecursivo(casasRestantes - 1);
}

// Função recursiva para simular o movimento do Bispo
void moveBispoRecursivo(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Caso recursivo: imprime a direção e faz chamada recursiva
    printf("Cima, Direita\n");
    
    // Chamada recursiva com uma casa a menos
    moveBispoRecursivo(casasRestantes - 1);
}

// Função recursiva para simular o movimento da Rainha
// A Rainha pode mover-se em todas as direções
void moveRainhaRecursivo(int casasRestantes) {
    // Caso base: quando não há mais casas para mover
    if (casasRestantes <= 0) {
        return;
    }
    
    // Caso recursivo: imprime a direção e faz chamada recursiva
    printf("Esquerda\n");
    
    // Chamada recursiva com uma casa a menos
    moveRainhaRecursivo(casasRestantes - 1);
}

// Função que implementa o movimento do Bispo usando loops aninhados
// Loop externo controla movimento vertical (cima)
// Loop interno controla movimento horizontal (direita)
void moveBispoLoopsAninhados(int casas) {
    printf("\n===== MOVIMENTO DO BISPO (LOOPS ANINHADOS) =====\n");
    printf("O Bispo move-se %d casas na diagonal para cima e à direita:\n", casas);
    
    // Loop externo para o movimento vertical (cima)
    for (int vertical = 1; vertical <= casas; vertical++) {
        // Loop interno para o movimento horizontal (direita)
        for (int horizontal = vertical; horizontal <= vertical; horizontal++) {
            // Imprime a posição atual da diagonal
            printf("Movimento diagonal %d: Cima, Direita\n", vertical);
        }
    }
}

int main() {
    // Constantes para o número de casas a serem movidas por cada peça
    const int TORRE_CASAS = 5;   // Torre: 5 casas para a direita
    const int BISPO_CASAS = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    const int RAINHA_CASAS = 8;  // Rainha: 8 casas para a esquerda
    const int CAVALO_PASSOS = 3; // Cavalo: 3 movimentos em "L" (2 cima, 1 direita)
    
    // Simulação do movimento da Torre usando recursividade
    printf("\n===== MOVIMENTO DA TORRE (RECURSIVO) =====\n");
    printf("A Torre move-se %d casas para a direita:\n", TORRE_CASAS);
    moveTorreRecursivo(TORRE_CASAS);
    
    // Simulação do movimento do Bispo usando recursividade
    printf("\n===== MOVIMENTO DO BISPO (RECURSIVO) =====\n");
    printf("O Bispo move-se %d casas na diagonal para cima e à direita:\n", BISPO_CASAS);
    moveBispoRecursivo(BISPO_CASAS);
    
    // Simulação do movimento da Rainha usando recursividade
    printf("\n===== MOVIMENTO DA RAINHA (RECURSIVO) =====\n");
    printf("A Rainha move-se %d casas para a esquerda:\n", RAINHA_CASAS);
    moveRainhaRecursivo(RAINHA_CASAS);
    
    // Simulação do movimento do Bispo usando loops aninhados
    moveBispoLoopsAninhados(BISPO_CASAS);
    
    // Simulação do movimento do Cavalo usando loops complexos
    printf("\n===== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) =====\n");
    printf("O Cavalo realiza %d movimentos em 'L' (2 para cima, 1 para direita):\n", CAVALO_PASSOS);
    
    // Loops complexos para simular o movimento do Cavalo em "L"
    for (int movimento = 1; movimento <= CAVALO_PASSOS; movimento++) {
        printf("\nMovimento %d do Cavalo:\n", movimento);
        
        // Loop aninhado para um único movimento em "L"
        for (int passo = 1; passo <= 3; passo++) {
            if (passo <= 2) {
                printf("Cima\n");
            } else if (passo == 3) {
                printf("Direita\n");
                break;
            } else {
                continue;
            }
        }
    }
    
    return 0;
}