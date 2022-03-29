//Ex08
/*

Leia uma temperatura em graus Kelvin e apresente-a convertida em graus
Celsius. A fórmula de conversão é: C = K - 273,15, sendo C a temperatura
em Celsius e K a temperatura em Kelvin.

*/

#include <stdio.h>

int main()
{
    float Ktemp;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &Ktemp);
    
    float Ctemp;
    float Vkelvin = 273.15;
    
    Ctemp = Ktemp - Vkelvin;
    printf("A temperatura informada, em Celsius e: ");
    printf("%f", Ctemp);

}

