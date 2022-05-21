//12
/*
Faça um programa qu eleia um número inteiro positivo N e imprima todos 
os números naturais de 0 até N em ordem descrescente.
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    i = num;
    while(i != -1)
    {
        printf("%d", i);
        printf(" ");
        i--;
    }


}