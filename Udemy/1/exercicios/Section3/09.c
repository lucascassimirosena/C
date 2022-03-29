//Ex09

/* 
Leia uma temperatura em graus Celsius e apresente-a convertida
 em graus Kelvin. A formula d conversão é: K = C + 273.15, sendo C 
 a temperatura em Celsius e K a temperatura em Kelvin.
*/

#include <stdio.h>

int main()
{
    printf("Digite a temperatura em Celsius: ");
    float Ctemp;
    scanf("%f", &Ctemp);

    float Ktemp;
    Ktemp = Ctemp + 273.15;
    printf("A temperadura informada, em Kelvin e: ");
    printf("%f", Ktemp);
}