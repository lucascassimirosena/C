//Ex13
/*
Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula
de conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
*/

#include <stdio.h>

int main ()
{
    float km;
    scanf("%f", &km);
    printf("Digite o valor em quilometros: ");

    float milhas;
    milhas = km/1.61;
    printf("Em milhas, este valor eh: ");
    printf("%f", milhas);
}