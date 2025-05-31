#include <stdio.h>

#define TAM 5  // Pode ajustar o tamanho conforme quiser

int main() {
    int vetor[TAM];
    int i, j, valor, repetido;

    printf("Digite %d valores inteiros distintos:\n", TAM);

    for (i = 0; i < TAM; i++) {
        do {
            repetido = 0;  // Assume que não é repetido
            printf("Elemento %d: ", i + 1);
            scanf("%d", &valor);

            // Verifica se o valor já foi inserido
            for (j = 0; j < i; j++) {
                if (vetor[j] == valor) {
                    repetido = 1;  // Valor repetido
                    printf("Valor duplicado! Por favor, insira um valor diferente.\n");
                    break;  // Não precisa continuar verificando
                }
            }
        } while (repetido);  // Repete enquanto for repetido

        vetor[i] = valor;  // Armazena o valor no vetor
    }

    // Exibe o vetor
    printf("\nVetor final:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
