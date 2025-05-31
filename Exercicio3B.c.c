#include <stdio.h>
#include <math.h>

int main()
{
    //exercicio 3 B) 
    float a, b, c, delta, delta1;
    printf("Quais sao os coeficientes? \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta = (pow(b, 2) - 4.0 * a * c);
    delta1 = pow(delta, 1.0 / 2);
    
    if(delta < 0)
    printf("Nao ha raizes reais");
    else
    printf("As raizes sao %f e %f: ", (-b+delta)/2*a, (-b-delta)/2*a);
    
    return 0;
}
