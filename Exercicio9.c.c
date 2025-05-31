#include <stdio.h>

int main() {
    float x, y;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("O ponto está na origem.\n");
    } else if (x == 0) {
        printf("O ponto está sobre o eixo Y.\n");
    } else if (y == 0) {
        printf("O ponto está sobre o eixo X.\n");
    } else if (x > 0 && y > 0) {
        printf("O ponto está no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto está no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto está no terceiro quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("O ponto está no quarto quadrante.\n");
    }

    return 0;
}




