#include <stdio.h>

// Criação de cada movimento para todas as peças

void movercima(int movimento3) {
    if (movimento3 > 0) {
        printf("Cima\n");
        movercima(movimento3 - 1);
    }
}
void moverbaixo(int movimento4) {
    if (movimento4 > 0) {
        printf("Baixo\n");
        moverbaixo(movimento4 - 1);
    }
}
void moveresquerda(int movimento5) {
    if (movimento5 > 0) {
        printf("Esquerda\n");
        moveresquerda(movimento5 - 1);
    }
}
void moverdireita(int movimento6) {
    if (movimento6 > 0) {
        printf("Direita\n");
        moverdireita(movimento6 - 1);
    }
}
void moverce(int movimento7) {
    if (movimento7 > 0) {
        printf("Cima - Esquerda\n");
        moverce(movimento7 - 1);
    }
}
void movercd(int movimento8) {
    if (movimento8 > 0) {
        printf("Cima - Direita\n");
        movercd(movimento8 - 1);
    }
}
void moverbe(int movimento9) {
    if (movimento9 > 0) {
        printf("Baixo - Esquerda\n");
        moverbe(movimento9 - 1);
    }
}
void moverbd(int movimento10) {
    if (movimento10 > 0) {
        printf("Baixo - Direita\n");
        moverbd(movimento10 - 1);
    }
}
//Variaveis

int main() {
    char *torre;
    char *bispo;
    char *rainha;
    char *cavalo;
    int escolha;
    int escolha2;
    int movimento;
    int movimento2 = 1;
    
    //Menu de escolha da peças
    printf("Escolha uma peça:  \n");
    printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n");
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
            case 4:
            cavalo = "Cavalo";
            printf("Você escolheu a %s\n", cavalo); // escolha cavalo
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
                movercima(movimento);
                break;
            case 2:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverbaixo(movimento);
                break;
            case 3:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moveresquerda(movimento);
                break;
            case 4:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverdireita(movimento);
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
                moverce(movimento);
                break;
            case 2:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverbe(movimento);
                break;
            case 3:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                movercd(movimento);
                break;
            case 4:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverbd(movimento);
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
                moverce(movimento);
                break;
            case 2:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverbe(movimento);
                break;
            case 3:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                movercd(movimento);
                break;
            case 4:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverbd(movimento);
                break;          
            case 5:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                movercima(movimento);
                break;
            case 6:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverbaixo(movimento);
                break;
            case 7:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moveresquerda(movimento);
                break;
            case 8:
                printf("Escolha Quantas casas voce quer andar: ");
                scanf("%d", &movimento);
                moverdireita(movimento);
                break;          
            default:
                printf("Escolha Incorreta!");
                break;
                
            }
        } else if (escolha == 4){
            printf("Escolha sua direção: \n");
        printf("1 - Cima - Cima - Esquerda\n2 - Cima - Cima - Direita\n3 - Baixo - Baixo - Esquerda\n4 - Baixo - Baixo - Direita\n5 - Direita - Direita - Cima\n6 - Direita - Direita - Baixo\n7 - Esquerda - Esquerda - cima\n8 - Esquerda - Esquerda - Baixo\n");
        scanf("%d", &escolha2);
            
        switch (escolha2)
        {
        case 1:
        movimento2 = 1;
            
            while (movimento2--)
            {
              for (movimento = 0; movimento < 2; movimento++){
                    printf("Cima\n"); //imprime "cima" 2x
              }
              printf("Esquerda\n"); //imprime Esquerda 1x
            }
            break;
        case 2:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Cima\n"); //imprime "cima" 2x
                }
                printf("Direita\n"); //imprime Esquerda 1x
            }
            break;
        case 3:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Baixo\n"); //imprime "cima" 2x
                }
                printf("Esquerda\n"); //imprime Esquerda 1x
            }
            break;
        case 4:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Baixo\n"); //imprime "cima" 2x
                }
                printf("Direita\n"); //imprime Esquerda 1x
            }
            break;
        case 5:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Direita\n"); //imprime "cima" 2x
                }
                printf("Cima\n"); //imprime Esquerda 1x
            }
            break; 
        case 6:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Direita\n"); //imprime "cima" 2x
                }
                printf("Baixo\n"); //imprime Esquerda 1x
            }
            break;
        case 7:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Esquerda\n"); //imprime "cima" 2x
                }
                printf("Cima\n"); //imprime Esquerda 1x
            }
            break; 
        case 8:
        movimento2 = 1;
            
            while (movimento2--)
            {
                for (movimento = 0; movimento < 2; movimento++){
                    printf("Esquerda\n"); //imprime "cima" 2x
                }
                printf("Baixo\n"); //imprime Esquerda 1x
            }
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
