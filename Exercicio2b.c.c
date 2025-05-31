#include <stdio.h>

int main()
{
    //exercicio 2 B) - area e perimetro
    float base, altura;
    printf("Qual o valor da base? \n");
    scanf("%f", &base);
    printf("Qual o valor da sua altura? \n");
    scanf("%f", &altura);
    if(2*(base + altura)>base*altura)
      printf("O perimetro eh maior");
    else
      printf("A area eh maior");
      
    return 0;
}