#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=1; //são declaradas as variavéis
    a = -2; //O valor de "a" é iniciado com -2 (a vale -2)
    b = a*a; //o valor de "b" é iniciado com o valor de "a" vezes ele mesmo (b vale 4)
    c = d++; //o valor de "c" é iniciado com o valor de "d" mais 1
    d = c++ + 5; // o valor de "d" é iniciado com o valor de c = 1 (foi pós-incrementado) mais 5 totalizando 6 (c após compilar vale 2)
    d = ++c + 5; // o valor de "d" é alterado para c=3 (o valor de c foi pré-incrementado) mais 5 (c vale 3, d vale 8)
    printf("%d %d %d %d", a,b,c,d); //é impresso os valores das variáveis


    return 0;
}
