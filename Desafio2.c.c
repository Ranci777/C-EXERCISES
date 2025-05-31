#include <stdio.h>

void intercalaVetores(int v1[], int v2[], int v3[], int n) {
    for (int i = 0; i < n; i++) {
        v3[2 * i] = v1[i];       // índices pares
        v3[2 * i + 1] = v2[i];   // índices ímpares
    }
}

int main() {
    int n;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int v1[n], v2[n], v3[2 * n];

    printf("Digite os %d elementos do primeiro vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Digite os %d elementos do segundo vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    intercalaVetores(v1, v2, v3, n);

    printf("Vetor intercalado: ");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}



