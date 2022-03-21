//Ex22
/*
Leia um valor de comprimento em jardas e apresente-o convertido
em jardas. A formula de conersao e: J = M/0.91, sendo J
o comprimento em jardas e M o comprimento em metros.
*/

#include <stdio.h>

int main()
{
    float jardas;
    printf("Digite o valor em Jardas");
    scanf("%f", &jardas);

    float metros;
    metros = 0.91 * jardas;
    printf("O valor em metros e: ");
    printf("%f", metros);
}