//Ex32
/*
Escrever um programa que leia o código do produto escolhido do cardápio
de uma lanchonete e a quantidade. O programa deve calcular o valor
a ser pago por aquele lanche. Considere que cada execução somente
será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:

Especificação:              Código:             Preço:
Cachorro quente              100                1.20
Bauru Simples                101                1.30
Bauru com Ovo                102                1.50
Hamburguer                   103                1.20
Cheeseburguer                104                1.70
Suco                         105                2.20
Refrigerante                 106                1.00
*/

#include <stdio.h>

int main()
{
    int cod, qtd; 
    float price;

    printf("Digite o codigo: ");
    scanf("%d", &cod);

    printf("Digite a quantidade: ");
    scanf("%d", &qtd);


    switch(cod)
    {
        case 100:
        price = 1.20 * qtd;
        printf("O valor a pagar e de %f", price);
        break;

        case 101:
        price = 1.30 * qtd;
        printf("O valor a pagar e de %f", price);
        break;
        
        case 102:
        price = 1.50 * qtd;
        printf("O valor a pagar e de %f", price);
        break;
        
        case 103:
        price = 1.20 * qtd;
        printf("O valor a pagar e de %f", price);
        break;
        
        case 104:
        price = 1.70 * qtd;
        printf("O valor a pagar e de %f", price);
        break;
        
        case 105:
        price = 2.20 * qtd;
        printf("O valor a pagar e de %f", price);
        break;
        
        case 106:
        price = 1.00 * qtd;
        printf("O valor a pagar e de %f", price);
        break;

        default:
        printf("Codigo invalido.");
        break;

        
    }





}
