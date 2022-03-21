//Ex16
/*
Leia um valor de comprimento em polegadas e apresente-o convertido 
em centímetros. A fórmula é: C = P*2.54, sendo C o comprimento
em centímetro e P o comprimento em polegadas.
*/

#include <stdio.h>

int main ()
{
    float polegadas;
    printf("Quantas polegadas? ");
    scanf("%f", &polegadas);

    float centimetros;
    centimetros = polegadas * 2.54;
    printf("Em centimetros: ");
    printf("%f", centimetros);
}