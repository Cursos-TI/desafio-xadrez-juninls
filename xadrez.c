#include <stdio.h>

int main() {
    // Número de casas que cada peça irá se mover
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // -----------------------------
    // Simulação da Torre - FOR
    // -----------------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -----------------------------
    // Simulação do Bispo - WHILE
    // -----------------------------
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int i = 1;
    while (i <= movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // -----------------------------
    // Simulação da Rainha - DO-WHILE
    // -----------------------------
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentosRainha);

    return 0;
}
