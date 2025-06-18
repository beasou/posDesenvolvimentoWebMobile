#include <stdio.h>      // Biblioteca padrão para entrada e saída de dados (printf, scanf)
#include <stdlib.h>     // Biblioteca para funções de sistema como rand() e srand()
#include <time.h>       // Biblioteca para trabalhar com tempo (usada para inicializar o random)

int main(void) {
    int porta;          // Variável para armazenar a escolha do jogador (1, 2 ou 3)
    int sorteio;        // Variável para armazenar a porta premiada sorteada pelo programa
    int acertos = 0;    // Contador de acertos do jogador
    int tentativas = 0; // Contador de tentativas (quantas vezes o jogador jogou)
    char continuar = 'S'; // Variável para controlar se o jogador deseja continuar jogando

    // Inicializa o gerador de números aleatórios usando o tempo do sistema
    srand(time(NULL));

    // Mensagem inicial do jogo
    printf("=== JOGO DA PORTA PREMIADA ===\n");

    // Loop principal do jogo: continua enquanto o jogador quiser (enquanto digitar 'S' ou 's')
    while (continuar == 'S' || continuar == 's') {
        // Solicita ao jogador que escolha uma porta
        printf("\nEscolha uma porta (1, 2 ou 3): ");
        scanf("%d", &porta);

        // Sorteia aleatoriamente uma porta premiada (número entre 1 e 3)
        sorteio = rand() % 3 + 1;

        // Verifica se o jogador acertou a porta premiada
        if (porta == sorteio) {
            printf("Parabéns! Você encontrou o prêmio!\n");
            acertos++; // Incrementa o número de acertos
        } else {
            // Informa ao jogador que errou e mostra onde estava o prêmio
            printf("Que pena! O prêmio estava na porta %d.\n", sorteio);
        }

        tentativas++; // Incrementa o número total de tentativas

        // Pergunta ao jogador se deseja jogar novamente
        printf("Deseja jogar novamente? (S/N): ");
        scanf(" %c", &continuar); // Espaço antes do %c para evitar problemas de leitura de enter
    }

    // Exibe o resumo final ao jogador
    printf("\n=== FIM DO JOGO ===\n");
    printf("Total de tentativas: %d\n", tentativas);
    printf("Total de acertos: %d\n", acertos);

    return 0; // Fim do programa
}
