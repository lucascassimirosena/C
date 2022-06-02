//Ex19
/*
Escreva um algoritmo que leia certa quantidade de números e imprima o maior
deles quantas vezes o maior número foi lido. A quantidade de números a serem lidos 
deve ser fornecida pelo usuário.
*/

#include <stdio.h>

int main()
{
    int i, iBig, num, times, biggest;

    printf("Este e um programa que compara numeros.");
    printf("\nDigite quantos numeros devem ser comparados: ");
    scanf("%d", &times);

    biggest, iBig = 0;
    for(i = 0; i < times; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num >= biggest)
        {
            biggest = num;
            iBig++;
        }
    }

        printf("\nO maior numero e: %d", biggest);
        printf("\nEste numero foi digitado %d vezes", iBig);

}

/*
Most of the exercise is correct but it's returning a wrong value
when it executes the line 32. 
The counter isn't counting it correctly.
*/