//ex12
/*
Leia uma distância em milhas e apresente-a convertida em quilômetros.
A fórmula de conversão é: K = 1,61*M, sendo K a distância em quilômetros
e M em milhas.
*/

#include <stdio.h>


int main()
{
printf("Digite o valor em milhas: ");
float milhas;
scanf("%f", &milhas);

float km;
km = 1.61*milhas;
printf("Este valor, em quilometros eh: ");
printf("%f", km);
}
