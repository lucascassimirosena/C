//Ex36
/*
Escreva um programa que, dado o valor da venda, imprima a comissão que deverá
ser paga ao vendedor. Para calcular a comissão, considere a tabela abaixo:

Venda Mensal:                                   Comissão:



*/

#include <stdio.h>

int main()
{
     int sale, comission, percentage;

     printf("Qual e o valor da venda: ");
     scanf("%d", &sale);

    if(sale >= 100000)
    {
        percentage = 700 * 0.16;
        comission = 700 + percentage;
        printf("O Valor da comissao e %d", comission);
    }
    else if(sale < 100000 && sale >= 80000)
    {
        percentage = 650 * 0.14;
        comission = 650 + percentage;
        printf("O valor da comissao e %d", comission);
    }
    else if(sale < 80000 && sale >= 60000)
    {
        percentage = 600 * 0.14;
        comission = 600 + percentage;
        printf("O valor da comissao e %d", comission);
    }
    else if(sale < 60000 && sale >= 40000)
    {
        percentage = 550 * 0.14;
        comission = 550 + percentage;
        printf("O valor da comissao e %d", comission);
    }
    else if(sale < 40000 && sale >= 20000)
    {
        percentage = 500 * 0.14;
        comission = 500 + percentage;
        printf("O valor da comissao e %d", comission);
    }
    else if(sale < 20000)
    {
        percentage = 400 * 0.14;
        comission = 400 + percentage;
        printf("O valor da comissao e %d", comission);
    }
    else
    {
        printf("Invalido.");
    }
}