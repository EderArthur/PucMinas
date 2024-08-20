#include <stdio.h>
#include <stdlib.h>

int main()
{
    float investimento, taxa, meses, rendimento, total, taxaTotal;


    printf("Digite o valor a ser investido: \n");
    scanf("%f",&investimento);

    printf("Digite a taxa mensal: \n");
    scanf("%f",&taxa);

    printf("Digite o numero de meses do investimento: \n");
    scanf("%f",&meses);

    taxa = taxa/100;
    taxaTotal = taxa * meses;

    rendimento = investimento * taxa * meses;
    total = investimento + rendimento;

    printf("\nCom uma taxa de: %.2f ao mes \nDurante %.0f meses \nSe obtem uma taxa de %.2f\nO rendimento total e de R$%.2f\n", taxa, meses, taxaTotal, rendimento);
    printf("O total foi de R$%.2f\n", total);
    return 0;
}
