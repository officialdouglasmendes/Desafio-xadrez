
#include <stdio.h>

void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);
void moverCavaloComLoops();
void demonstrarBispoComLoopsAninhados(int casas);

int main() {
    const int CASAS_A_MOVER = 4;

    printf("--- Movimento da Torre (Recursivo) ---\n");
    printf("Movendo para a Direita:\n");
    moverTorreRecursivo(CASAS_A_MOVER);

    printf("\n\n");

    printf("--- Movimento do Bispo (Recursivo) ---\n");
    printf("Movendo na Diagonal Superior Direita:\n");
    moverBispoRecursivo(CASAS_A_MOVER);

    printf("\n\n");

    printf("--- Movimento do Bispo (Demonstração com Loops Aninhados) ---\n");
    printf("Movendo na Diagonal Superior Direita:\n");
    demonstrarBispoComLoopsAninhados(CASAS_A_MOVER);

    printf("\n\n");

    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(CASAS_A_MOVER);

    printf("\n\n");

    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    printf("Movendo em 'L' (2 para cima, 1 para a direita):\n");
    moverCavaloComLoops();

    return 0;
}

void moverTorreRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

void demonstrarBispoComLoopsAninhados(int casas) {
    for (int y = 1; y <= casas; y++) {
        for (int x = 1; x <= casas; x++) {
            if (y == x) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

void moverRainhaRecursivo(int casas) {
    printf("Movendo como Torre (para Baixo):\n");
    if (casas > 0) {
        printf("Baixo\n");
        moverTorreRecursivo(casas - 1);
    }

    printf("\nMovendo como Bispo (Diagonal Inferior Esquerda):\n");
    moverBispoRecursivo(casas);
}

void moverCavaloComLoops() {
    for (int passo_vertical = 1; passo_vertical <= 2; passo_vertical++) {
        printf("Cima\n");
        if (passo_vertical == 1) {
            continue;
        }
        for (int passo_horizontal = 1; passo_horizontal <= 1; passo_horizontal++) {
            printf("Direita\n");
        }
        break;
    }
}
