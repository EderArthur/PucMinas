#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eleitores, brancos, nulos, validos, pBrancos, pNulos, pValidos;


    printf("Digite o numero de votos em branco: \n");
    scanf("%d",&brancos);

    printf("Digite o numero de votos nulos: \n");
    scanf("%d",&nulos);

    printf("Digite o numero de votos validos: \n");
    scanf("%d",&validos);

    eleitores = brancos + nulos + validos;

    printf("\nO numero total de eleitores foi: %d\n", eleitores);

    pBrancos = (brancos * 100) / eleitores;
    pNulos = (nulos * 100) / eleitores;
    pValidos = (validos * 100) / eleitores;
    
    printf("O percentual de votos brancos foi: %d% \n", pBrancos);
    printf("O percentual de votos nulos foi: %d% \n", pNulos);
    printf("O percentual de votos validos foi: %d% \n", pValidos);
    
    return 0;
}
