#include <stdio.h>

void intercalaVetores(int v1[], int v2[], int v3[], int n) {
    for (int i = 0; i < n; i++) {
        v3[2*i] = v1[i];       // elementos de v1 nas posições pares
        v3[2*i + 1] = v2[i];   // elementos de v2 nas posições ímpares
    }
}

int main() {
    int v1[] = {1, 2, 5, 4};
    int v2[] = {2, 3, 7, 3};
    int n = 4;
    int v3[2*n];

    intercalaVetores(v1, v2, v3, n);

    printf("Vetor intercalado: ");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
