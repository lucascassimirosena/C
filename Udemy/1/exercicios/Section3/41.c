//Ex41
/*
Faça um programa que leia o valor da hora de trabalho (em reais)
e número de horas trabalhadas no mês. Imprima o valor a ser pago
ao funcionário, adicionando 10% sobre o valor calculado.
*/

#include <stdio.h>

int main ()
{
    float valHora, horasMes;
    printf("Qual e o valor da hora em reais? ");
    scanf("%f", &valHora);
    printf("Quantas horas no mes? ");
    scanf("%f", &horasMes);

    float valorTotal, valoraPagar, acrescimo;
    valorTotal = valHora * horasMes;
    acrescimo = valorTotal * 0.10;
    valoraPagar = valorTotal + acrescimo;

    printf("O valor total com acrescimo e: ");
    printf("%f", valoraPagar);
}

