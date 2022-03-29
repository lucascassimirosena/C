//Ex26
/*
Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A fórmula de conversão é:
H = M * 0.0001, sendo M a área em metros quadrados e H a área em Hectares.
*/

#include <stdio.h>

int main ()
{
    float metros;
    printf("Coloque o valor em metros quadrados: ");
    scanf("%f", &metros);

    float hectares;
    hectares = metros * 0.0001;
    printf("O valor em hectares e: ");
    printf("%f", hectares); 
}