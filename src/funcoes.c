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

void criaSoma(structMatriz *matriz, int quantidade){
    int  linha, coluna;
    srand(time(NULL));
    if (quantidade > 100){
        quantidade = 100;
    }
    for (int i = 0; i < quantidade; ++i) {
        while (1){
            linha = 1 + (rand()%LINHA-2);
            coluna = 1 + (rand()%COLUNA-2);
            if(matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha+1][coluna] == ' ' && matriz->matriz[linha-1][coluna] == ' ' && matriz->matriz[linha][coluna-1] ==  ' ' && matriz->matriz[linha][coluna+1] == ' '){
                break;
            }
        }
        matriz->matriz[linha][coluna] = '*';
        matriz->matriz[linha+1][coluna] = '*';
        matriz->matriz[linha-1][coluna] = '*';
        matriz->matriz[linha][coluna+1] = '*';
        matriz->matriz[linha][coluna-1] = '*';
    }
}

void criaLetraX(structMatriz *matriz, int quantidade){
    int  linha, coluna;
    srand(time(NULL));
    if (quantidade > 100){
        quantidade = 100;
    }
    for (int i = 0; i < quantidade; ++i) {
        while (1){
            linha = 1 + (rand()%LINHA-2);
            coluna = 1 + (rand()%COLUNA-2);
            if(matriz->matriz[linha][coluna] == ' ' && matriz->matriz[linha+1][coluna+1] == ' ' && matriz->matriz[linha-1][coluna-1] == ' ' && matriz->matriz[linha+1][coluna-1] ==  ' ' && matriz->matriz[linha-1][coluna+1] == ' '){
                break;
            }
        }
        matriz->matriz[linha][coluna] = '*';
        matriz->matriz[linha+1][coluna+1] = '*';
        matriz->matriz[linha-1][coluna-1] = '*';
        matriz->matriz[linha-1][coluna+1] = '*';
        matriz->matriz[linha+1][coluna-1] = '*';
    }
}

void criaAleatorias(structMatriz *matriz, int quantidade){
    srand(time(NULL));
    int asterisco,soma,letrax;

    asterisco = 1+ (rand()%quantidade);
    soma = 1 + rand()%(quantidade-asterisco);
    letrax = quantidade - (asterisco + soma);
    printf("Asterisco %d | Soma %d | Letra X %d\n",asterisco,soma,letrax);
    criaAsterico(matriz,asterisco);
    criaSoma(matriz,soma);
    criaLetraX(matriz,letrax);
}
