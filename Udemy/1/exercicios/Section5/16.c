//Ex16
/*
Faça um programa que leia um número inteiro positivo ímpar N e imprima todos
os números ímpares de N até 1 em ordem decrescente.
*/

#include <stdio.h>
int main()
{
    int num, odd;

    printf("Digite um numero impar: ");
    scanf("%d", &num);
    

    odd = num;
    while(odd >= 1)
    {
 
        printf("%d", odd);
        printf(" ");
        odd = odd - 2;
    }
    
}


