//Ex13
/*
Faça um programa que leia um número inteiro  positivo par N e imprima
todos os números pares de 0 até N em ordem crescente.
*/

#include <stdio.h>

int main()
{
    int num, even, i;

    printf("Digite um numero positivo par: ");
    scanf("%d", &num);

    even = 0;
   do
   {
        printf("%d", even);
        even = even + 2;
   }
    while (even < num + 2);


}