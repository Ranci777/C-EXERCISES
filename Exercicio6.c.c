#include <stdio.h>
#include <math.h>

int main()
{
    //exercicio 6)
  
    int x, y;
    scanf("%d %d", &x, &y);

    if (x >= 0 && x <= 432 && y >= 0 && y <= 468) {
        printf("d\n"); // dentro
    } else {
        printf("f\n"); // fora
    }

    return 0;
}
