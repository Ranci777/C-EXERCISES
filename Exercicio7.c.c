#include <stdio.h>

int main()
{
    float base, altura, area, perimetro;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    // Exibe os resultados
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);

 
    if (area == perimetro) 
       printf("A área e o perímetro são iguais.\n");
    else if (area > perimetro) 
        printf("A área é maior que o perímetro.\n");
    else 
        printf("O perímetro é maior que a área.\n");
    

    return 0;
}
