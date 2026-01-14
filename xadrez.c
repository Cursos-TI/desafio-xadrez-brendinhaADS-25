#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int t = 0, b = 0, r = 0, rainha, torre, bispo, opcao; 
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("*** Movimento de Pecas de Xadrez! ***\n"); 
    printf("1. Bispo\n"); 
    printf("2. Torre\n"); 
    printf("3. Rainha\n"); 
    printf("Escolha uma peça:\n"); 
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
       printf("Peça: Bispo\n"); 

        while (b < 5)
    {
        printf("Cima, Direita!\n"); 
        b++; 
    }
    break;
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    case 2: 
       printf("Peça: Torre\n"); 

       do
       {
        printf("Direita\n"); 
        t++; 
       } while (t < 5);
    break;
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    case 3: 
       printf("Peça: Rainha\n"); 

       for (int r = 0; r < 8; r++)
       {
        printf("Direita\n"); 
       }
    break; 
    default:
       printf("Opção inválida!\n"); 
        break;
    }
    

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
