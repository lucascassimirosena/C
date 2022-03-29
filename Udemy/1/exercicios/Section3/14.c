//Ex14
/* 
Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula
de conversão é: R = G * pi/180, sendo G o ângulo em graus e R em radianos
e pi = 3.14.
*/

#include <stdio.h>

int main()
{
    float graus;
    printf("Graus:  ");
    scanf("%f", &graus);

    float rad;
    rad = graus * 3.14/180;
    printf("Rad: ");
    printf("%f", rad);

}