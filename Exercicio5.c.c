#include <stdio.h>
#include <math.h>

int main()
{
    //exercicio 5)
    float litro_al, litro_gasolina, kilometros_litro1, kilometros_litro2, kilometros, kilometros2;
    printf("Qual o preco do litro do alcool? ");
    scanf("%f", &litro_al);
    printf("Qual o preco do litro de gasolina? ");
    scanf("%f", &litro_gasolina);
    
    printf("Quantos kilometros ira rodar com gasolina? ");
    scanf("%f", &kilometros_litro1);
    printf("Quantos kilometros ira rodar com gasolina? ");
    scanf("%f", &kilometros_litro2);
    kilometros = kilometros_litro1 * litro_gasolina;
    kilometros2 = kilometros_litro2 * litro_al;
    if(kilometros > kilometros2)
      printf("Compensa abastecer com alcool  ");
    else
      printf("Compensa abastecer com gasolina ");
    
    return 0;
}
