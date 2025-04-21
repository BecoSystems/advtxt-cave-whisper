/*******************************************************************************************
 *                                                                                         *
 * Aluno: Jamerson David A. Queiroz                                                        *
 * Turma: Programa1                                                                        *
 *                                                                                         *
 *                                 Atividade ex11.c                                        *
 *                                                                                         *
 *******************************************************************************************/

#include <stdio.h>

int main(void){

    int escolha;

    printf("===Bem vindo ao jogo Adventure Text (Cave Whisper)===\n");

    printf("pressione qualquer tecla para iniciar");
    getchar();

    printf("=Você está numa estrada escura no meio da floresta. No meio da neblina, você avista  uma entrada de uma caverna, no qual você podia ouvir alguns sussuros vindos de dentro da caverna=\n");
    printf("==Você encontra um baú, decide abrir?==\n\n");

    printf(">1-Sim<\n");
    printf(">2-Não<\n\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    while (escolha != 1 && escolha != 2){

        printf("escolha uma resposta valida!!!");
        printf("Sua escolha: ");
        scanf("%d", &escolha);

    }

    if (escolha == 1){

        printf("=Você escolheu abrir o baú e se deparou com três obejetos: uma Tocha, um Espelho e um Livro antigo=\n");
        printf("Você decide escolher um dos três objetos para continuar seu caminho\n\n");

        printf(">1-Tocha<\n");
        printf(">2-Espelho<\n");
        printf(">3-Livro Antigo<\n\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha);

        while (escolha != 1 && escolha != 2 && escolha != 3){

            printf("Escolha uma resposta valida!!!");
            printf("Sua escolha: ");
            scanf("%d", &escolha);

        }

        if (escolha == 1){

            printf("==Você pega a Tocha, agora precisa decidir o que irá fazer==\n\n");
            printf(">1-Entrar na Caverna<\n");
            printf(">2-Esperar na frente da Caverna<\n");
            printf(">3-Fugir para longe<\n\n");
            printf("Sua escolha: ");
            scanf("%d", &escolha);

            while (escolha != 1 && escolha != 2 && escolha != 3){

                printf("Escolha uma resposta válida!!!");
                printf("Sua escolha: ");
                scanf("%d", &escolha);

            }



        }

        if (escolha == 2){

            printf("==Você pega o Espelho, agora precisa decidir o que irá fazer==\n");
            printf("\n >1-Entrar na Caverna<\n");
            printf(">2-Esperar na frente da Caverna<\n");
            printf(">3-Fugir para longe<\n\n");
            printf("Sua escolha: ");
            scanf("%d", &escolha);

            while (escolha != 1 && escolha != 2 && escolha != 3){

                printf("Escolha uma resposta válida!!!");
                printf("Sua escolha: ");
                scanf("%d", &escolha);

            }



        }

        if (escolha == 3){

            printf("==Você pega o Livro Antigo, agora precisa decidir o que irá fazer==\n");
            printf("\n >1-Entrar na Caverna<\n");
            printf(">2-Esperar na frente da Caverna<\n");
            printf(">3-Fugir para longe<\n\n");
            printf("Sua escolha: ");
            scanf("%d", &escolha);

            while (escolha != 1 && escolha != 2 && escolha != 3){

                printf("Escolha uma resposta válida!!!");
                printf("Sua escolha: ");
                scanf("%d", &escolha);

            }



        }

    }

    if (escolha == 2){

        printf("Você não pega nenhum item e um raio cai na sua cabeça. Você morre :D");



    }
}
