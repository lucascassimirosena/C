//Ex01
/*
Faça um programa que receba dois números e mostre qual deles é o maior.
*/

#include <stdio.h>

int main()
{
    int numero1, numero2;
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2)
    {
        printf("O numero %d e maior que o numero %d", numero1, numero2);
    }
    else if(numero2 > numero1)
    {
        printf("O numero %d e maior que o numero %d", numero2, numero1);
    }
    else if(numero1 == numero2)
    {
        printf("Os numeros tem o mesmo valor.");
    }
    else
    {
        printf("Invalido.");
    }

    return 0;
}