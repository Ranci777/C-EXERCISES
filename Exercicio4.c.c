#include <stdio.h>
#include <math.h>

int main()
{
    //exercicio 4 
    int ano;
    printf("Qual o ano? ");
    scanf("%d", &ano);
    if(ano % 4 == 0)
      printf("O ano eh bissexto");
    else
      printf("Nao eh bissexto");
    
    return 0;
}
