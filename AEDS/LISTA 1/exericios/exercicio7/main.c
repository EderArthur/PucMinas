#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=1; //s�o declaradas as variav�is
    a = -2; //O valor de "a" � iniciado com -2 (a vale -2)
    b = a*a; //o valor de "b" � iniciado com o valor de "a" vezes ele mesmo (b vale 4)
    c = d++; //o valor de "c" � iniciado com o valor de "d" mais 1
    d = c++ + 5; // o valor de "d" � iniciado com o valor de c = 1 (foi p�s-incrementado) mais 5 totalizando 6 (c ap�s compilar vale 2)
    d = ++c + 5; // o valor de "d" � alterado para c=3 (o valor de c foi pr�-incrementado) mais 5 (c vale 3, d vale 8)
    printf("%d %d %d %d", a,b,c,d); //� impresso os valores das vari�veis


    return 0;
}
