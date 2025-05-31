#include <stdio.h>

int main()
{
    //exercicio 1 - do bondinho
    int n_alunos;
    int n_monitores;
    int soma;
    printf("Qual o numero de alunos? \n");
    scanf("%d", &n_alunos);
    printf("Qual o numero de monitores? \n");
    scanf("%d", &n_monitores);
    soma = n_alunos + n_monitores;
    if(soma >= 50)
    printf("não dá para levar todos os alunos");
    else
    printf("dá para levar todos os alunos");

    return 0;
}