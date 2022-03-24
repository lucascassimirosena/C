//Ex05
/*
Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("Este e um numero par");
    }
    else
        printf("Este numero e impar");
}