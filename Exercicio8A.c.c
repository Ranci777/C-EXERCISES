#include <stdio.h>
#include <math.h>

int main() {
    char opcao;
    float x, y, z, media;

    printf("Escolha o tipo de média (A, P, G, H): ");
    scanf(" %c", &opcao);

    printf("Digite três valores: ");
    scanf("%f %f %f", &x, &y, &z);

    if (opcao == 'A' || opcao == 'a') {
        media = (x + y + z) / 3;
        printf("Média Aritmética: %.2f\n", media);
    } 
    else if (opcao == 'P' || opcao == 'p') {
        media = (x * 1 + y * 2 + z * 3) / 6;
        printf("Média Ponderada: %.2f\n", media);
    } 
    else if (opcao == 'G' || opcao == 'g') {
        media = pow(x * y * z, 1.0/3);
        printf("Média Geométrica: %.2f\n", media);
    } 
    else if (opcao == 'H' || opcao == 'h') {
        if (x == 0 || y == 0 || z == 0) {
            printf("Erro: divisão por zero na média harmônica.\n");
        } else {
            media = 3 / ((1/x) + (1/y) + (1/z));
            printf("Média Harmônica: %.2f\n", media);
        }
    } 
    else {
        printf("Opção inválida.\n");
    }

    return 0;
}



