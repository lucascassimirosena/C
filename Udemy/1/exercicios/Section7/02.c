//Ex02
/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre an tela os
valores lidos.
*/
#include <stdio.h>

int main()
{
    int value[5];
    int i;

    while(i <= 5)
    {
    printf("Digite um valor: ");
    gets(value[0]);
    i++;
    }

    printf("%d", value[0]);
    
}