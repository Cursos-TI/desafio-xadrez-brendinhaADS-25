#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//bispo recursiva 
void moverbispo(int casas){
   if(casas <= 0)
      return; 
      //loop externo 
   for (int i = 0; i < 1; i++){
      printf("Cima!\n");

   //loop interno
   for(int j = 0; j < 1; j++){
      printf("Direita!\n");
   } 
   }
   moverbispo(casas - 1); 
}
 
//torre recursiva 
void movertorre(int casas){
   if(casas <= 0)
      return; 

   printf("Direita\n"); 
   movertorre(casas - 1); 
}

//rainha recursiva 
void moverRainha(int casas){
   if(casas <= 0)
   return; 
   printf("Direita!\n");  
   moverRainha(casas - 1); 
}

//cavalo 
void movercavalo (){
   for(int vertical = 0; vertical < 3; vertical++){

    for(int horizontal = 0; horizontal < 2; horizontal++){
      if(vertical < 2 && horizontal == 0){
         printf("Baixo!\n"); 
         continue;
      }
      if( vertical == 2 && horizontal == 1){
         printf("Esquerda!\n"); 
         break;
      }
    }
   }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int t = 0, b = 0, r = 0, rainha, torre, bispo, opcao; 
   int cavalo = 1; 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
 
    do{
    
    printf("*** Movimento de Pecas de Xadrez! ***\n"); 
    printf("1. Bispo\n"); 
    printf("2. Torre\n"); 
    printf("3. Rainha\n"); 
    printf("4. Cavalo\n");  
    printf("5. Sair do jogo!\n"); 
    printf("Escolha uma peça:\n"); 
    scanf(" %d", &opcao);
    
    printf("\n"); 

    switch (opcao)
    {
    case 1:
       printf("Peça: Bispo\n"); 
      moverbispo(2); 
    break;
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    case 2: 
       printf("Peça: Torre\n"); 
       movertorre(5); 
    break;
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    case 3: 
       printf("Peça: Rainha\n"); 
       moverRainha(8); 
    break; 
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    case 4: 
      printf("Peça: Cavalo\n");
      movercavalo(); 
    break; 
    case 5: 
       printf("Saindo do Jogo...\n"); 
    break; 
    default: 
       printf("Opção inválida!\n"); 
        break;
    }
    
    } while (opcao != 5);
    
   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
