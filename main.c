#include "headers/funcoes.h"

int main(){
	structMatriz matriz;
	inicializaMatriz(&matriz);
	criaAsterico(&matriz,10);
	imprimeMatriz(matriz);
}