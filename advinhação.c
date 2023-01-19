#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {



    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhacao!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");


    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    srand(time(0));
    int numerosecreto = rand() % 100;


    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3)Dificil\n\n");
    printf("Choose your caracther: ");
    scanf("%d", nivel);



    int numerodetentativas;

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break; 
    }
    
        for( int i = 1; i <= numerodetentativas; i++)   {
        
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? ");

        scanf("%d", &chute);
        printf(" Seu chute foi %d\n", chute);

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos! \n");
            i--;

            continue;
        }
        

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
       

        if (acertou) {

            break;

          }
            
            else if (maior) {
                printf("Seu numero foi maior que o correto\n");
            }

            else {
                printf("Seu numero foi menor que o correto\n");
            }

            tentativas++;
        
            double pontosperdidos = abs(chute - numerosecreto) / 2.0; 
            pontos = pontos - pontosperdidos;
    }
    
        printf("\nCabo, game over\n");

        if(acertou) {
         printf("You're the winner!!!\n");
         printf("Voce acertou em %d tentativas\n", tentativas); 
         printf("Total de pontos : %.1f\n", pontos);

        }

        else {
            printf("You lost, try it again.Be better\n");
        }

}