//Ex43
/*
Escreva um programa de ajuda para vendedores. A partir de
um valor total lido, mostre:

- O total a pagar com desconto de 10%
- O valor de cada parcela, no parcelamento de 3x sem juros;
- A comissão do vendedor, no caso da venda ser a vista (5%
sobre o valor total)
- A comissã do vendedor , no caso da venda ser parcelada (5% sobre
o valor total)
*/

#include <stdio.h>

int main()
{
    float valorDoProduto;
    printf("Valor do produto: ");
    scanf("%f", &valorDoProduto);

    float descontoAVista = valorDoProduto * 0.10;
    float valorDesconto = valorDoProduto - descontoAVista;
    printf("\nValor com desconto a vista: ");
    printf("%f", valorDesconto);

    float parcela = valorDoProduto/3;
    printf("\nValor da parcela, se parcelado em 3x: ");
    printf("%f", parcela);

    float comissaoVista = valorDesconto * 0.05;
    printf("\nValor da comissao da venda a vista: ");
    printf("%f", comissaoVista);

    float comissaoCheia = valorDoProduto * 0.05;
    printf("\nValor da venda cheia: ");
    printf("%f", comissaoCheia);

}
