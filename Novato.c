#include <stdio.h>

//Variaveis

int main() {
    char *torre;
    char *bispo;
    char *rainha;
    int escolha;
    int escolha2;
    int movimento;
    int movimento2 = 1;

    //Menu de escolha da peças
    printf("Escolha uma peça:  \n");
    printf("1 - Torre\n2 - Bispo\n3 - Rainha\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            torre = "Torre";
            printf("Você escolheu a %s\n", torre); // escolha torre
            break;
        case 2:
            bispo = "Bispo";
            printf("Você escolheu o %s\n", bispo); // escolha bispo
            break;
        case 3:
            rainha = "Rainha";
            printf("Você escolheu a %s\n", rainha); // escolha Rainha
            break;
        default:
            printf("Escolha inválida!\n"); // erro na escolha
            break;
    }
    // if - else para decidr para qual direção a peça ira se mover
    if (escolha == 1)
    {
        printf("Escolha sua direção: \n");
        printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
        scanf("%d", &escolha2);
        
            //switch que define a impressão da direção por base na escolha!

            switch (escolha2)
            {
            case 1:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                while (movimento2 <= movimento)
                {
                    printf("Cima\n");
                    movimento2++;
                }
                break;
            case 2:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                while (movimento2 <= movimento)
                {
                    printf("Baixo\n");
                    movimento2++;
                }
                break;
            case 3:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                while (movimento2 <= movimento)
                {
                    printf("Esquerda\n");
                    movimento2++;
                }
                break;
            case 4:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                while (movimento2 <= movimento)
                {
                    printf("Direita\n");
                    movimento2++;
                }
                break;          
            default:
                printf("Escolha Incorreta!");
                break;
            }
    } else if (escolha == 2){
        printf("Escolha sua direção: \n");
        printf("1 - Diagonal - Esquerda para cima\n2 - Diagonal - Esquerda para Baixo\n3 - Diagonal - Direita para cima\n4 - Diagonal - Direita para Baixo\n");
        scanf("%d", &escolha2);

            switch (escolha2)
            {
            case 1:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                for ( movimento2 = 1; movimento2 <= movimento; movimento2++)
                {
                    printf("Cima - Esquerda\n");
                   
                }
                break;
            case 2:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                for ( movimento2 = 1; movimento2 <= movimento; movimento2++)
                {
                    printf("Baixo - Esquerda\n");
                
                }
                break;
            case 3:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                for ( movimento2 = 1; movimento2 <= movimento; movimento2++)
                {
                    printf("Cima - Direita\n");
                   
                }
                break;
            case 4:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                for ( movimento2 = 1; movimento2 <= movimento; movimento2++)
                {
                    printf("Baixo - Direita\n");
                    
                }
                break;          
            default:
                printf("Escolha Incorreta!");
                break;
            }

    } else if (escolha == 3){
        printf("Escolha sua direção: \n");
        printf("1 - Diagonal - Esquerda para cima\n2 - Diagonal - Esquerda para Baixo\n3 - Diagonal - Direita para cima\n4 - Diagonal - Direita para Baixo\n5 - Cima\n6 - Baixo\n7 - Esquerda\n8 - Direita\n");
        scanf("%d", &escolha2);

            switch (escolha2)
            {
            case 1:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do {
                    printf("Cima - Esquerda\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;
            case 2:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do {
                    printf("Baixo - Esquerda\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;
            case 3:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do {
                    printf("Cima - Direita\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;
            case 4:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do {
                    printf("Baixo - Direita\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;          
            case 5:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do{
                    printf("Cima\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;
            case 6:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do{
                    printf("Baixo\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;
            case 7:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do{
                    printf("Esquerda\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;
            case 8:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                do{
                    printf("Direita\n");
                    movimento2++;
                } while (movimento2 <= movimento);
                break;          
            default:
                printf("Escolha Incorreta!");
                break;
                
            }
    } else {
        printf("Opçao invalida!");
    }
        

    return 0;
}
