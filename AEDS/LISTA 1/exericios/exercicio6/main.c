#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x1, x2, y1, y2, m1, m2, d;

    printf("Digite o valor de X1 e Y1: \n");
    scanf("%f %f",&x1, &y1);

    printf("Digite o valor de X2 e Y2: \n");
    scanf("%f %f",&x2, &y2);

    m1=pow((x2-x1), 2);

    m2=pow((y2-y1), 2);

    d= m1+m2;

    printf("\n A distancia euclediana entre os dois pontos é de: %f \n",d);

    return(0);
}
