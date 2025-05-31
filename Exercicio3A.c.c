#include <stdio.h>
#include <math.h>

int main()
{
    //exercicio 3 A) 
    float a, b, c, delta, delta1;
    printf("Quais são os coeficientes? \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta = (pow(b, 2) - 4.0 * a * c);
    delta1 = pow(delta, 1.0 / 2);
    printf("As raizes são %f e %f: ", (-b+delta)/2*a, (-b-delta)/2*a);
    
    return 0;
}