#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, s, m, p;

    printf("Digite a primeira nota \n");
    scanf("%f",&n1);

    printf("Digite a segunda nota \n");
    scanf("%f",&n2);

    printf("Digite a terceira nota \n");
    scanf("%f",&n3);

    s = n1+n2+n3;
    m = (n1+n2+n3)/3;
    p = n1*n2*n3;

    printf("A soma das notas foi %f \n", s);
    printf("A media das notas foi %f \n", m);
    printf("O produto das notas foi %f \n", s);
}
