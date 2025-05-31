#include <stdio.h>

#define TAM 10  // Define o tamanho do vetor

int main() {
    int vetor[TAM];
    int valor, contador = 0;

    // Leitura dos elementos do vetor
    printf("Digite %d elementos inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Leitura do valor a ser buscado
    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &valor);

    // Contagem das ocorrências do valor no vetor
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == valor) {
            contador++;
        }
    }

    // Exibição do resultado
    printf("\nO valor %d ocorre %d vez(es) no vetor.\n", valor, contador);

    return 0;
}
