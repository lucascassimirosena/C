//Ex17
/*
Leia um valor de comprimento em centímetros e apresente-o
convertido em polegadas. A fórmula de conversão é: P = C/2.24,
sendo C o comprimento em centímetros e P o comprimento em
polegadas.
*/

#include <stdio.h>

int main()
{
    float centimetros;
    printf("Coloque o valor em centimetros: ");
    scanf("%f", &centimetros);

    float polegadas;
    polegadas = centimetros/2.54;
    printf("O valor em polegadas e: ");
    printf("%f", polegadas);
    
}