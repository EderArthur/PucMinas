#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a1, b;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&a);

    printf("Digite o segundo valor: \n");
    scanf("%d",&b);

    a1 = a;
    a = b;
    b = a1;

    printf("O primeiro valor passou a ser %d \n", a);
    printf("O segundo valor passou a ser %d \n", b);

    return 0;
}
