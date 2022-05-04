//Ex33
/*
Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia
o praço antigo, calcule e escreva o preço novo, e escreva uma
mensagem em função do preço novo (de acordo com a segunda tabela).

Preço Antigo                         Percentual de Aumeto
Até R$50                                    5%
entre R$50 e R$100                          10%
acima de R$100                              15%
*/

#include <stdio.h>

int main()
{
    float oldPrice, newPrice;
    float percentage;
    
    printf("Digite o valor antigo: ");
    scanf("%f", &oldPrice);

    if(oldPrice < 50)
    {
        percentage = oldPrice * 0.05;
        newPrice = oldPrice + percentage;
        printf("O novo preco e: %f", newPrice);
    }
    else if(oldPrice >= 50 && oldPrice <= 100)
    {
        percentage = oldPrice * 0.10;
        newPrice = oldPrice + percentage;
        printf("O novo preco e: %f", newPrice);
    }
    else if(oldPrice > 100)
    {
        percentage = oldPrice * 0.15;
        newPrice = oldPrice + percentage;
        printf("O novo preco e: %f", newPrice);
    }
}