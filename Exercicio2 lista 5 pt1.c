#include <stdio.h>

#define TAM 10  // Define o tamanho do vetor

int main() {
    int vetor[TAM];
    int i, maior, menor;
    float soma = 0, media;

    // Leitura dos elementos do vetor
    printf("Digite %d elementos inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];

        // Atualiza maior e menor na primeira iteração
        if (i == 0) {
            maior = menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }

    // Cálculo da média
    media = soma / TAM;

    // Exibição dos resultados
    printf("\nMédia dos elementos: %.2f\n", media);
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
