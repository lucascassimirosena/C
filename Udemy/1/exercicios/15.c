//Ex15
/*
Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula
de conversão é: G = R*180/pi, sendo G o ângulo em graus e R em radianos e 
pi = 3.14.
*/

#include <stdio.h>

int main()
{
    float rad;
    printf("Rad: ");
    scanf("%f", &rad);

    float graus;
    printf("Graus: ");
    graus = rad*180/3.14;
    printf("%f", graus);

}