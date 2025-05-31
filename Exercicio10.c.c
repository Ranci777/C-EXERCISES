#include <stdio.h>

int main() {
    int diaNasc, mesNasc, anoNasc;
    int diaAtual, mesAtual, anoAtual;
    int idade, K, J, h;

    printf("Digite sua data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    printf("Digite a data atual (dia mes ano): ");
    scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    idade = anoAtual - anoNasc;
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idade--;
    }

    if (mesNasc == 1 || mesNasc == 2) {
        mesNasc += 12;
        anoNasc -= 1;
    }

    K = anoNasc % 100;
    J = anoNasc / 100;

    h = (diaNasc + 13*(mesNasc + 1)/5 + K + K/4 + J/4 + 5*J) % 7;

    printf("Idade: %d anos\n", idade);
    printf("Você nasceu em uma ");

    if (h == 0) {
        printf("sábado\n");
    } else if (h == 1) {
        printf("domingo\n");
    } else if (h == 2) {
        printf("segunda-feira\n");
    } else if (h == 3) {
        printf("terça-feira\n");
    } else if (h == 4) {
        printf("quarta-feira\n");
    } else if (h == 5) {
        printf("quinta-feira\n");
    } else if (h == 6) {
        printf("sexta-feira\n");
    }

    return 0;
}






