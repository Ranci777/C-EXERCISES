#include <stdio.h>
#include <math.h>
#define ASSINATURA 7
#define FAIXA1_PRECO 1   // 11 a 30
#define FAIXA2_PRECO 2   // 31 a 100
#define FAIXA3_PRECO 5   // acima de 100

int main() {
    int consumo;
    int valor = ASSINATURA;

    printf("Digite o consumo em m3: ");
    scanf("%d", &consumo);

    if (consumo <= 10) {
        // Só paga a assinatura
        valor = ASSINATURA;
    } 
    else if (consumo <= 30) {
        // Paga assinatura + (consumo - 10) * 1
        valor += (consumo - 10) * FAIXA1_PRECO;
    } 
    else if (consumo <= 100) {
        // Paga assinatura + 20m³ da faixa 1 + (consumo - 30) * 2
        valor += (20 * FAIXA1_PRECO) + (consumo - 30) * FAIXA2_PRECO;
    } 
    else {
        // Paga assinatura + faixa1 + faixa2 + (consumo - 100) * 5
        valor += (20 * FAIXA1_PRECO) + (70 * FAIXA2_PRECO) + (consumo - 100) * FAIXA3_PRECO;
    }

    printf("Valor da conta: R$ %d,00\n", valor);


    return 0;
}



