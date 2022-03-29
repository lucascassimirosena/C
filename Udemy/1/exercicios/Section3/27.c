//Ex27
/*
Leia um valor de área em hectares e apresente-o convertido em metros quadrados
m2. A fórmula de conversão é: M = H * 10000, sendo M a área em metros quadrados
e H a área em hectares.
*/

#include <stdio.h>

int main ()
{
    float hectares;
    printf("Hectares: ");
    scanf("%f", &hectares);

    float metros;
    metros = hectares * 10000;
    printf("Metros quadrados: ");
    printf("%f", metros);


}