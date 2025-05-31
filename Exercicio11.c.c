#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n1, n2, operacao, respostaUsuario, respostaCorreta;
    char operador;
    time_t inicio, fim;
    double tempo;

    
    srand(time(NULL));

   
    n1 = rand() % 100 + 1;
    n2 = rand() % 100 + 1;

   
    operacao = rand() % 5;

   
    if (operacao == 0) {
        operador = '+';
        respostaCorreta = n1 + n2;
    } 
    else if (operacao == 1) {
        operador = '-';
        respostaCorreta = n1 - n2;
    } 
    else if (operacao == 2) {
        operador = '*';
        respostaCorreta = n1 * n2;
    } 
    else if (operacao == 3) {
        operador = '/';
        respostaCorreta = n1 / n2;
    } 
    else if (operacao == 4) {
        operador = '%';
        respostaCorreta = n1 % n2;
    }

    printf("Resolva: %d %c %d = ?\n", n1, operador, n2);

    
    inicio = time(NULL);

   
    printf("Sua resposta: ");
    scanf("%d", &respostaUsuario);

   
    fim = time(NULL);
    tempo = difftime(fim, inicio);

    if (respostaUsuario == respostaCorreta) {
        printf("Correto! Tempo de resposta: %.2f segundos.\n", tempo);
    } else {
        printf("Errado. A resposta correta era %d. Tempo de resposta: %.2f segundos.\n", respostaCorreta, tempo);
    }

    return 0;
}





