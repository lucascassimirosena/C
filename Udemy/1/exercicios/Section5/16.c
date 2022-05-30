//Ex16
/*
Faça um programa que leia um número inteiro positivo ímpar N e imprima todos
os números ímpares de 1 até N em ordem decrescente.
*/

#include <stdio.h>
int main()
{
    int num, odd;

    printf("Digite um numero impar: ");
    scanf("%d", &num);
    
    odd = num - 2;
    while(odd > num)
    {
        num = num - 2;
        printf("%d", odd);
        printf(" ");
    }
}


// I had to stop this study because the class started
// CONTINUE