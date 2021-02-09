#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#define LINHA 20
#define COLUNA 80

typedef struct
{
    char matriz[LINHA][COLUNA];
}structMatriz;

void inicializaMatriz(structMatriz *matriz);
void imprimeMatriz(structMatriz matriz);
void criaAsterico(structMatriz *matriz, int quantidade);
void criaSoma(structMatriz *matriz, int quantidade);
void criaLetraX(structMatriz *matriz, int quantidade);
void criaAleatorias(structMatriz *matriz, int quantidade);