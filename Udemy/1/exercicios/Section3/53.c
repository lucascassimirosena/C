//Ex53
/*
Faça um programa para ler as dimensões de um terreno(comprimento c e largura l),
bem como o preço por metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.
*/

#include <stdio.h>

int main()
{
    float c, l, cost, price, size;


    printf("Insira o comprimento: ");
    scanf("%f", &c);
    printf("Insira a largura: ");
    scanf("%f", &l);
    printf("Qual e o valor do metro? ");
    scanf("%f", cost);

    size = c * l;
    price = size * cost;

    printf("%f", price);
}