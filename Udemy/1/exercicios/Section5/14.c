//Ex14
/*
Faça um programa que leia um número inteiro positivo par N e imprime todoso os números pares de 0
até N em ordem decrescente.
*/

#include <stdio.h>

int main()
{
    int num, even;

    printf("Digite um numero positivo par: ");
    scanf("%d", &num);

    do
    {
        even = num;
        printf("%d", even);
        num = num - 2;
    } while (even > 0);
    
}