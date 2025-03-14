#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita %d\n", 6 - casas);
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita %d\n", 6 - casas);
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda %d\n", 9 - casas);
    moverRainha(casas - 1);
}

int main() {
    // Simulação do movimento da Torre usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    // Simulação do movimento do Bispo usando recursividade
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);
    
    // Simulação do movimento da Rainha usando recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    // Simulação do movimento do Cavalo (2 casas para cima, 1 para a direita) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    
    for (int i = 1; i <= 2; i++) {
        printf("Cima %d\n", i);
    }
    
    int m = 1;
    while (m <= 1) {
        printf("Direita %d\n", m);
        m++;
    }
    
    return 0;
}
