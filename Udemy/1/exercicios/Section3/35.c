//Ex35
/*
Sejam a e b os catetos de um triângulo, onde a hipotenusa é
obrtida pela equação: hipotenusa = raiz de a2 + b2. 
Faça um programa que receba os valores de a e b e calcule
o valor da hipotenusa através da equação. Impprima o resultado dessa operação.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float hipotenusa, cat1, cat2;

    printf("Informe o valor do primeiro cateto: ");
    scanf("%f", &cat1);
    printf("Informe o valor do segundo cateto: ");
    scanf("%f", &cat2);

    hipotenusa = sqrt(cat1*cat1 + cat2*cat2);
    printf("O valor da hipotenusa e %f\n", hipotenusa);
}