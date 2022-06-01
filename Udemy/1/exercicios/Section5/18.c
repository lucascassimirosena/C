//Ex18
/*
Escreva um algoritmo que leia certa quantidade de números e imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a 
serem lidos deve ser fornecida pelo usuário.
*/

#include <stdio.h>

int main()
{
    int num, times, i, biggest;

    printf("Este e um programa que compara numeros.");
    printf("\nDigite quantos numeros voce quer comparar ");
    printf("\n: ");
    scanf("%d", &times);

    biggest = 0;
    for(i = 0; i < times; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > biggest)
        {
            biggest = num;
        }
    }

    printf("%d", biggest);


}