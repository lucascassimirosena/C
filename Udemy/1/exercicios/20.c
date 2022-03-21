//Ex20
/*
Leia um valor de massa em quilogramas e apresente-o convertido
em libras. A formula de conversão e: L = K/0.45; sendo K
a massa em quilogramas e L a massa em libras. 
*/

#include <stdio.h>

int main ()
{
    float quilo;
    printf("Digite quantos quilos: ");
    scanf("%f", &quilo);

    float libras;
    libras = quilo/0.45;
    printf("O valor em quilos e: ");
    printf("%f", libras);

}