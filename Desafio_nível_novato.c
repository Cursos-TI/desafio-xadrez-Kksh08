#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da TORRE (FOR loop)
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do BISPO (WHILE loop)
    // -------------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Movimento da RAINHA (DO-WHILE loop)
    // -------------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}