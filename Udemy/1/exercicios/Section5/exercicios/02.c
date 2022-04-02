//EX02

/*
Escreva um programa que escreva na tela,
de 1 até 100, de 1 em 1.
*/

#include <stdio.h>

int main()
{
    int numero;
    numero = 0;

    while(numero < 100)
    {
        numero++;
        printf("%d\n", numero);
    }
    return 0;
}