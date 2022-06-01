//Ex17
/*
Faça um programa que leia um número inteiro positivo N e calcule a soma dos N 
primeiros números naturais
*/

#include <stdio.h>
int main()
{
    int num, sum, i, inum;

    printf("Digite umn numero: ");
    scanf("%d", &num);

    i = 0;
    inum = i + 1;
    do
    {
        sum = i + inum;
        i++;
        inum++;
    } while (i < num );
    
    printf("%d", sum);

}

//Return to it