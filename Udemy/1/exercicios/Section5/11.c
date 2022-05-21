//Ex11
/*
Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero inteior positivo: ");
    scanf("%d", &num);

    i = 0;
    while(i < num + 1)
    {
        printf("%d", i);
        printf(" ");
        i++;
    }
}