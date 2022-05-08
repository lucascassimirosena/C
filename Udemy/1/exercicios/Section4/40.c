//Ex40
/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica, da 
comissão do distribuidor, e dos impostos. A comissão e os imposstos são caluclados
sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica
e escreva o custo ao consumidor.

CUSTO D FÁBRICA             % DO DISTRIBUIDOR           % DOS IMPOSTOS
até R$12.000,00                     5                       isento
entre R$12.000,00                   10                         15
acima de R$25.000,00                15                         20
*/

#include <stdio.h>

int main()
{
    int cost, comission, taxes, final;

    printf("Digite o custo de fabrica: ");
    scanf("%d", &cost);

    if(cost < 12000)
    {
        comission = cost * 0.5;
        taxes = 0;
        final = cost + comission + taxes;
        printf("O custo do carro e de: %d", final);
    }
    else if(cost >= 12000 && cost <= 25000)
    {
        comission = cost * 0.10;
        taxes = cost * 0.15;
        final = cost + comission + taxes;
        printf("O custo do carro e de: %d", final);
    }
    else
    {
        comission = cost * 0.15;
        taxes = cost * 0.20;
        final = cost + comission + taxes;
        printf("O custo do carro e de: %d", final);
    }
}


