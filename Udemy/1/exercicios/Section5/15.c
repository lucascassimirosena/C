//Ex15
/*
Faça um programa que leia um número inteiro positivo ímpar N
e imprima todos os números ímpares de 1 até N em ordem crescente.
*/

#include <stdio.h>

int main()
{
    int num, odd;

    printf("Digite um numero impar positivo: ");
    scanf("%d", &num);

    odd = 1;
    while(odd < num + 2)
    {
 
        printf("%d", odd);
        printf(" ");
        odd = odd + 2;
    }
}