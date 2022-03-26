//Ex06
/*
Escreva um programa que, dado dois numeros inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Numero 1: ");
    scanf("%i", &num1);

    printf("Numero 2: ");
    scanf("%i", &num2);

    if(num1 > num2)
    {

        printf("O numero %i, e maior que o numero %i." num1, num2);
        int diferenca = num1 - num2;
        printf("E a diferenca entre os numeros e de %i", diferenca);
    }
    else
    {
        printf("O numero %i e maior que o numero %i." num2, num1);
        int diferenca2 = num2 - num1;
        printf("E sua diferenca e de %d." diferenca2);
    }
}

// NEED TO RETURN TO IT BECAUSE THE CODE ISN'T COMPILING AND I COUDN'T FIND A SOLUTION