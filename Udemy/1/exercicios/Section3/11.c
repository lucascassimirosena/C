//Ex11
/*
Leia uma velocidade em m/s (metros por segundos) e apresente-a convertida
em km/h (quilômetros por hora). A fórmula de conversão é: K = M*3.6,
sendo K a velocidade em km/h e M em m/s.
*/

#include <stdio.h>

int main()
{
printf("Digite o valor em m/s: ");
float ms;
scanf("%f", &ms);

printf("O valor digitado, em quilometros por hora e: ");
float km;
km = ms * 3.6;
printf("%f", km);
}