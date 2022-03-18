//Ex10
/*
Leia uma velocidade em km/h (quilômestros por hora) e apresente-a 
convertida em m/s (metros por segundo). A fórmula de conversão é:
M = K/3.6, sendo K a velocidade em km/h e M em m/s.
*/

#include <stdio.h>

int main()
{
    printf("Digite a velocidade em km/h: ");
    float km;
    scanf("%f", &km);
    
    printf("Este e o valor em m/s: ");
    float ms;
    ms = km/3.6;
    printf("%f", ms);
}