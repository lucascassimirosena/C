//Ex06
/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>

int main ()
{
    int vez, numero, soma, media;
    numero = 0;
    vez = 0;
    soma = 0;


    while(vez < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
       
        soma = soma + numero;
        media = soma/10;
        vez++;
    }

    printf("Media: %d", media);
}