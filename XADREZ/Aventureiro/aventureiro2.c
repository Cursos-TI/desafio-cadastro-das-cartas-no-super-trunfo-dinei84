/*
 * Programa que simula o movimento de três peças de xadrez:
 * Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente (for, while, do-while)
 * para simular seus movimentos.
 */

 #include <stdio.h>

 int main() {
     // Simulação da Torre - usando estrutura for
     // A Torre irá se mover 5 casas para a direita
     int movimentosTorre = 5;
     printf("Movimento da Torre:\n");
     for (int i = 1; i <= movimentosTorre; i++) {
         printf("Direita\n");
     }
 
     printf("\n"); // Espaço entre os movimentos das peças
 
     // Simulação do Bispo - usando estrutura while
     // O Bispo irá se mover 5 casas na diagonal para cima e à direita
     int movimentosBispo = 5;
     int contadorBispo = 1;
     printf("Movimento do Bispo:\n");
     while (contadorBispo <= movimentosBispo) {
         printf("Cima Direita\n");
         contadorBispo++;
     }
 
     printf("\n");
 
     // Simulação da Rainha - usando estrutura do-while
     // A Rainha irá se mover 8 casas para a esquerda
     int movimentosRainha = 8;
     int contadorRainha = 1;
     printf("Movimento da Rainha:\n");
     do {
         printf("Esquerda\n");
         contadorRainha++;
     } while (contadorRainha <= movimentosRainha);
 
     return 0;
 }
 