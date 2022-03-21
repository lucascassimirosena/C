//Ex23
/*
Lia um valor de comprimento em metros e apresente-o convertido
em jardas. A formula de conversao e: J = M/0.91, sendo J
o comprimento em jardas e M o comprimento em metros.
*/

#include <stdio.h>

int main()
{
    float metros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    float jardas;
    jardas = metros/0.91;
    printf("O valor em jardas e: ");
    printf("%f", jardas);
}