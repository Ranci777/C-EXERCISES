#include <stdio.h>

int main() {
    int A, B, C; 
    int H, L;    


    printf("Informe a altura da caixa (em cm): ");
    scanf("%d", &A);
    
    printf("Informe a largura da caixa (em cm): ");
    scanf("%d", &B);
    
    printf("Informe a profundidade da caixa (em cm): ");
    scanf("%d", &C);

    printf("Informe a altura da janela (em cm): ");
    scanf("%d", &H);
    
    printf("Informe a largura da janela (em cm): ");
    scanf("%d", &L);

    if ((A <= H && B <= L) || (A <= L && B <= H) ||
        (A <= H && C <= L) || (A <= L && C <= H) ||
        (B <= H && C <= L) || (B <= L && C <= H)) {
        printf("Resultado: S - A caixa passa pela janela.\n");
    } else {
        printf("Resultado: N - A caixa NAO passa pela janela.\n");
    }

    return 0;
}



