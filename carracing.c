#include "carracing.h"


// inicializa a matriz principal do jogo
void init(char matriz[LINHAS][COLUNAS]){
    int i,j;

    for(i=0; i<LINHAS; i++){
        for(j=0; j<COLUNAS; j++){
            matriz[i][j] = ' ';
        }
    }
}

// mostra o conteudo da matriz principal
void printMatriz(char matriz[LINHAS][COLUNAS]){
    int i,j;

    printf("\t\t\t\t\t");
    //Linha de cima
    for(j=0; j<COLUNAS+2; j++){
        printf("*");
    }
    printf("\n");

    //Matriz do jogo
    for(i=0; i<LINHAS; i++){        
        printf("\t\t\t\t\t*");
        for(j=0; j<COLUNAS; j++){
            printf("%c", matriz[i][j]);
        }
        printf("*\n");
    }

    printf("\t\t\t\t\t");
    //Linha de baixo
    for(j=0; j<COLUNAS+2; j++){
        printf("*");
    }
    printf("\n");

}

    