#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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

#include <stdio.h>

int main() {
    // Declaração das variáveis
    int i, j, k;
    
    // Explicação inicial para o usuário
    printf("Bem-vindo ao simulador de movimentos de xadrez!\n");
    printf("Vamos simular os movimentos de três peças: Torre, Bispo e Rainha.\n\n");

    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre (5 casas para a direita):\n");
    printf("A Torre move-se apenas para a direita, uma casa de cada vez.\n");

    // Usando 'for' para simular o movimento da Torre
    for (i = 0; i < 5; i++) {
        printf("Movendo-se para a direita: Casa %d\n", i + 1);
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    printf("O Bispo se move na diagonal, uma casa para cima e à direita por vez.\n");

    // Usando 'while' para simular o movimento do Bispo
    j = 0;
    while (j < 5) {
        printf("Movendo-se para Cima Direita: Diagonal %d\n", j + 1);
        j++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    printf("A Rainha pode se mover em várias direções, neste caso vamos mover para a esquerda.\n");

    // Usando 'do-while' para simular o movimento da Rainha
    k = 0;
    do {
        printf("Movendo-se para a esquerda: Casa %d\n", k + 1);
        k++;
    } while (k < 8);

    // Finalizando o programa
    printf("\nSimulação completa! As peças realizaram seus movimentos com sucesso.\n");

    return 0;
}










