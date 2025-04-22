/*******************************************************************************************
 *                                                                                         *
 * Alunos: Jamerson David A. Queiroz / Pedro Victor B. A. Souza                            *
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

            if (escolha == 1) printf("A luz da tocha revela armadilhas escondidas. Você pisa em uma placa de pressão, dardos envenenados te acertam, Você morre!!\n FIM DE JOGO!!");
            if (escolha == 2) printf("A chama atrai uma criatura da caverna. Você só percebe quando ela ja está atras de você, Você morre!! \n FIM DE JOGO!!");
            if (escolha == 3) printf("Você corre com a tocha acesa. Embora o medo te empurre para longe, você escapa com vida, mas algo te observa do escuro.\n Voce sobreviveu \n FIM DE JOGO, GANHOU!!");
            return 0;
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

            if (escolha == 1) printf("O espelho reflete uma versão distorcida da caverna. Você segue por onde o reflexo indica... e desaparece, engolido por uma ilusão Você morre!!\n FIM DE JOGO!!");
            if (escolha == 2) printf("Você vê no reflexo uma sombra se aproximando. Quando se vira, ja é tarde. Tudo fica escuro. Você morre!! \n FIM DE JOGO!!");
            if (escolha == 3) printf("Você foge e o espelho quebra sozinho em sua mochila. Um alivio estranho te invade, como se tivesse escapado de algo ruim\n Voce sobreviveu!!! \n FIM DE JOGO, GANHOU!!");
            return 0;
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

            if (escolha == 1) printf("Você lê um feitiço em voz alta. A caverna responde, abrindo o caminho. A aventura so esta começando\n FIM DE JOGO!!\n Você Sobreviveu!!!");
            if (escolha == 2) printf("O livro começa a flutuar, páginas virando sozinhas. Um portal se abre, chamando por você. Talvez uma oportunidade.. ou um risco\n FIM DE JOGO!!\n Você Sobreviveu!!!");
            if (escolha == 3) printf("O livro emite um brilho fraco. Ao fugir, você percebe que algo foi deixado para trás, mas vive para descobrir outro dia.\n Voce sobreviveu \n FIM DE JOGO, GANHOU!!");
            return 0;
        }

    }

    if (escolha == 2){

        printf("Você não pega nenhum item e um raio cai na sua cabeça. Você morre :D");



    }

    return 0;
}
