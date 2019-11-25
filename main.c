#include "carracing.h"
#include "display.h"

int main()
{
    char matriz[LINHAS][COLUNAS];


    //apaga o cursor da tela
    ShowConsoleCursor(0);
    system("cls");

    //inicializando a matriz
    init(matriz);

    system("pause");

    return 0;
}