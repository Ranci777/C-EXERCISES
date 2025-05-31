#include <stdio.h>
#include <math.h>
#define ASSINATURA 7

int main() {
    int consumo, mes;
    int preco1, preco2, preco3;
    int valor = ASSINATURA;

    printf("Digite o consumo em m3: ");
    scanf("%d", &consumo);

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    // Define os preços de acordo com o mês
    if (mes >= 6 && mes <= 9) {
        preco1 = 2; // Faixa 11–30
        preco2 = 3; // Faixa 31–100
        preco3 = 8; // Acima de 100
    } else {
        preco1 = 1;
        preco2 = 2;
        preco3 = 5;
    }

    if (consumo <= 10) {
        valor = ASSINATURA;
    } 
    else if (consumo <= 30) {
        valor += (consumo - 10) * preco1;
    } 
    else if (consumo <= 100) {
        valor += (20 * preco1) + (consumo - 30) * preco2;
    } 
    else {
        valor += (20 * preco1) + (70 * preco2) + (consumo - 100) * preco3;
    }

    printf("Valor da conta: R$ %d,00\n", valor);

    return 0;
}



