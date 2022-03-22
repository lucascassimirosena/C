//Ex30
/*
Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/

#include <stdio.h>

int main()
{
    float real;
    printf("Quantos reais? ");
    scanf("%f", &real);

    float dolar;
    dolar = real * 4.92;
    printf("Em dolares este valor e: ");
    printf("%f", dolar);
}