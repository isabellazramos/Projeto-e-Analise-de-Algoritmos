#include "../headers/funcoes.h"

void inicializaMatriz(structMatriz *matriz){
      for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == 0 || i == LINHA-1){
                matriz->matriz[i][j] = '-';
                continue;
            }
            if(j == 0 || j == COLUNA-1){
                matriz->matriz[i][j] = '|';
                continue;
            }
            else{
                matriz->matriz[i][j] = ' ';
            }
    }
  }
}

void imprimeMatriz(structMatriz matriz){
    for(int i = 0; i < LINHA; i++){
        printf("\n");
        for(int j = 0; j < COLUNA; j++){
            printf("%c", matriz.matriz[i][j]);
        }
    }
}

void criaAsterico(structMatriz *matriz, int quantidade){
    int linha,coluna;
    srand(time(NULL));
    if(quantidade > 100){
        quantidade = 100;
    }
    for (int i = 0; i < quantidade; ++i) {
        while (1){
            linha = 1 + (rand()%LINHA-2);
            coluna = 1 + (rand()%COLUNA-2);
            if(matriz->matriz[linha][coluna] == ' ') {
                break;
            }
        }
        matriz->matriz[linha][coluna] = '*';
    }

}
