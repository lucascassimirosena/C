//Ex07
/* Leia uma temperatura em graus Fernheit e apresente-a convertida em Graus
Celsius. A fórmula de conversão é: C = 5.0*(F-32.0)/9.0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

int main ()
{
    float Ftemp;
    printf("Digite a temperatura em C: ");
    scanf("%f", &Ftemp);

    printf("Em Celsius, a temperatura informada e: ");
    float Ctemp;
    float Middle;

    Middle = Ftemp - 32.0;
    Ctemp =  5*Middle/9;
    printf("%f", Ctemp);



}