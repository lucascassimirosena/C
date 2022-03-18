//Ex06
/* Leia uma temperatura em graus Celsius e apresente-a convertida em Graus
Fahrenheit. A fórmula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

int main ()
{
    float Ctemp;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &Ctemp);


    printf("A temperatura em Farenheit e: ");
    float Ftemp;
    Ftemp = Ctemp*1.8+32.00;
    printf("%f", Ftemp);
}
