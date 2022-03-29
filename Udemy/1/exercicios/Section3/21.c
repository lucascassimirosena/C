//Ex21
/*
Leia um valor de massa em libras e apresente-o convertido em
quilogramas. A formula de conversao e: K = L * 0.45, sendo
K a massa em quilogramas e L a massa em libras.
*/

#include <stdio.h>

int main ()
{
    float libras;
    printf("Digite a massa: ");
    scanf("%f", &libras);

    float quilo;
    quilo = libras * 0.45;
    printf("O valor em quilogramas e: ");
    printf("%f", quilo);
}