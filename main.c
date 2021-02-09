#include "headers/funcoes.h"

int main(){
    int opMenu = -1;
    int qtdFiguras,opRepeticao;
	structMatriz matriz;

    while (opMenu !=0){
        inicializaMatriz(&matriz);
        printf("\n\nPROGRAMA GERADOR DE OBRA DE ARTE:\n"
               "=================================\n"
               "Escolha o tipo de figura basica a ser usada para criar a obra:\n"
               "1 - asterisco simples.\n"
               "2 - simbolo de soma com asteriscos.\n"
               "3 - letra X com asteriscos.\n"
               "4 - figuras aleatorias\n"
               "5 ou qualquer outro numero – opcao de obra de arte criada pelo aluno\n"
               "===================================\n"
               "DIGITE 0 PARA SAIR DO PROGRAMA\n"
               "===================================\n");
        printf("Digite o tipo de figura basica desejada:");
        scanf("%d",&opMenu);

        if(opMenu == 1){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            if(qtdFiguras <= 0){
                srand(time(NULL));
                qtdFiguras = 1+(rand()%99);
                printf("A quantidade de figuras agora eh: %d",qtdFiguras);
            }
            criaAsterico(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaAsterico(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
        else if(opMenu == 2){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            if(qtdFiguras <= 0){
                srand(time(NULL));
                qtdFiguras = 1+(rand()%99);
                printf("A quantidade de figuras agora eh: %d",qtdFiguras);
            }
            criaSoma(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaSoma(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
        else if(opMenu == 3){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            if(qtdFiguras <= 0){
                srand(time(NULL));
                qtdFiguras = 1+(rand()%99);
                printf("A quantidade de figuras agora eh: %d",qtdFiguras);
            }
            criaLetraX(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaLetraX(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
        else if (opMenu == 4){
            printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):");
            scanf("%d",&qtdFiguras);
            if(qtdFiguras <= 0){
                srand(time(NULL));
                qtdFiguras = 1+(rand()%99);
                printf("A quantidade de figuras agora eh: %d",qtdFiguras);
            }
            criaAleatorias(&matriz,qtdFiguras);
            imprimeMatriz(matriz);

            opRepeticao = 1;

            while (opRepeticao !=0){
                printf("\n\n Deseja criar um novo quadro com essas configuracoes?\n"
                       "- Digite 1 para SIM\n"
                       "- Digite 0 para NAO\n");
                scanf("%d", &opRepeticao);

                if(opRepeticao ==1) {
                    inicializaMatriz(&matriz);
                    criaAleatorias(&matriz, qtdFiguras);
                    imprimeMatriz(matriz);
                }else{
                    break;
                }

            }
        }
    }

}