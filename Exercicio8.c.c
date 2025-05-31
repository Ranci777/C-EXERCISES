#include <stdio.h>

#define TAM 5

// Função que retorna a média dos elementos pares e também atualiza maior e menor por referência
float mediaParesMaiorMenor(int v[], int n, int *maior, int *menor) {
    int soma = 0, cont = 0;

    // Inicializa maior e menor com o primeiro elemento do vetor
    *maior = v[0];
    *menor = v[0];

    for(int i = 0; i < n; i++) {
        // Atualiza maior e menor
        if(v[i] > *maior) *maior = v[i];
        if(v[i] < *menor) *menor = v[i];

        // Soma dos pares
        if(v[i] % 2 == 0) {
            soma += v[i];
            cont++;
        }
    }

    if (cont == 0) return 0;  // evita divisão por zero

    return (float)soma / cont;
}

// Função para imprimir o vetor
void imprimeVetor(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vet[TAM] = {2, 5, 8, 7, 10};  // exemplo fixo
    int maior, menor;

    printf("Vetor: ");
    imprimeVetor(vet, TAM);

    float media = mediaParesMaiorMenor(vet, TAM, &maior, &menor);

    printf("Media dos elementos pares: %.2f\n", media);
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
