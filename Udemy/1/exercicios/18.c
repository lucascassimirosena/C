//Ex18
/* 
Leia um valor de volume em metros cubicos m3 e apresente-o
convertido em litros. A formula de conversao e: L = 1000*M,
sendo L o volume me litros e M o volume em metros cubicos.
*/

#include <stdio.h>

int main ()
{
    float cubicos;
    printf("Digite o valor em metros cubicos: ");
    scanf("%f", &cubicos);

    float litros;
    litros = 1000 * cubicos;
    printf("Em litros este valor e: ");
    printf("%f", litros);
}