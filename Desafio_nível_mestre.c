#include <stdio.h>


// Função recursiva para movimentar a Torre para a direita
void moverTorreRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casasRestantes - 1);
}

// Função recursiva para movimentar o Bispo para cima e direita
void moverBispoRecursivo(int verticaisRestantes, int horizontaisPorVertical) {
    if (verticaisRestantes <= 0) {
        return;
    }
    for (int h = 0; h < horizontaisPorVertical; h++) {
        printf("Cima Direita\n");
    }
    moverBispoRecursivo(verticaisRestantes - 1, horizontaisPorVertical);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casasRestantes - 1);
}

// Função para movimentar o Cavalo em L (duas casas para cima e uma para a direita)
// loops aninhados
void moverCavaloL(int movimentos) {
    printf("\nMovimento do Cavalo:\n");
    int movimentosRealizados = 0;
    // Loop externo controla a quantidade total de movimentos em L
    for (int i = 0; i < movimentos; i++) {
        
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                if ((i + j) % 7 == 0) {
                    continue; 
                }
            } else {
                printf("Direita\n");
                if (movimentosRealizados >= movimentos - 1) {
                    break;
                }
            }
        }
        movimentosRealizados++;
    }
}



int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int verticaisBispo = 3;
    int horizontaisBispo = 2;
    int casasRainha = 8;
    int movimentosCavalo = 4;

    // ----------------------------------
    // Movimento recursivo da TORRE
    // ----------------------------------
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);

    // ----------------------------------
    // Movimento recursivo + aninhado do BISPO
    // ----------------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(verticaisBispo, horizontaisBispo);

    // ----------------------------------
    // Movimento recursivo da RAINHA
    // ----------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);

    // ----------------------------------
    // Movimento complexo do CAVALO com loops aninhados
    // ----------------------------------
    moverCavaloL(movimentosCavalo);

    return 0;
}