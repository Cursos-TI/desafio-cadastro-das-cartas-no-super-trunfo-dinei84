/**
 * Programa de Simulação de Movimento de Peças de Xadrez
 * 
 * Este programa simula o movimento de três peças de xadrez:
 * - Torre: Movimento de 5 casas para a direita (usando for)
 * - Bispo: Movimento de 5 casas na diagonal para cima e à direita (usando while)
 * - Rainha: Movimento de 8 casas para a esquerda (usando do-while)
 * 
 * Autor: Claudinei Almeida Souza
 * Data: 15/05/2025
 * 
 */

 #include <stdio.h>

 // Função para simular movimento da Torre (usando for)
 void moverTorre(int numeroCasas) {
     printf("\n--- Movimento da Torre: %d casas para a direita ---\n", numeroCasas);
     
     // Usando estrutura for para mover a Torre
     for (int i = 1; i <= numeroCasas; i++) {
         printf("Direita\n");
     }
 }
 
 // Função para simular movimento do Bispo (usando while)
 void moverBispo(int numeroCasas) {
     printf("\n--- Movimento do Bispo: %d casas na diagonal para cima e à direita ---\n", numeroCasas);
     
     // Usando estrutura while para mover o Bispo
     int i = 1;
     while (i <= numeroCasas) {
         printf("Cima, Direita\n");
         i++;
     }
 }
 
 // Função para simular movimento da Rainha (usando do-while)
 void moverRainha(int numeroCasas) {
     printf("\n--- Movimento da Rainha: %d casas para a esquerda ---\n", numeroCasas);
     
     // Usando estrutura do-while para mover a Rainha
     int i = 1;
     do {
         printf("Esquerda\n");
         i++;
     } while (i <= numeroCasas);
 }
 
 int main() {
     // Constantes para o número de casas a serem movidas por cada peça
     const int CASAS_TORRE = 5;
     const int CASAS_BISPO = 5;
     const int CASAS_RAINHA = 8;
     
     // Título do programa
     printf("=== SIMULAÇÃO DE MOVIMENTO DE PEÇAS DE XADREZ ===\n");
     
     // Simular movimento da Torre
     moverTorre(CASAS_TORRE);
     
     // Simular movimento do Bispo
     moverBispo(CASAS_BISPO);
     
     // Simular movimento da Rainha
     moverRainha(CASAS_RAINHA);
     
     return 0;
 }