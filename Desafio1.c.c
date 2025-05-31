#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int v1[TAM], v2[TAM];

    srand(time(NULL)); // inicializa semente aleatória

    // Gera os vetores aleatórios
    for(int i = 0; i < TAM; i++) {
        v1[i] = rand() % 100;  // números de 0 a 99
        v2[i] = rand() % 100;
    }

    // Imprime os vetores (opcional)
    printf("Vetor 1: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for(int i = 0; i < TAM; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    // Imprime a soma do i-ésimo elemento do v1 com o elemento simétrico do v2
    printf("Somas: ");
    for(int i = 0; i < TAM; i++) {
        int soma = v1[i] + v2[TAM - 1 - i];
        printf("%d ", soma);
    }
    printf("\n");

    return 0;
}
