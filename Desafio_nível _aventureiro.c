#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da TORRE para a direita
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do BISPO na diagonal cima-direita
    // -------------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Movimento da Rainha para a esquerda
    // -------------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);


    // -------------------------------
    // Movimento do Cavalo em "L": duas casas para baixo e uma para a esquerda
    // -------------------------------
    printf("\nMovimento do Cavalo:\n");
    int casasBaixo = 2;
    int casasEsquerda = 1;
    
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }


    return 0;
}