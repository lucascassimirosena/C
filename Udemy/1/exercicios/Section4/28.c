//EXx27
/*
Faça um programa que leia três números inteiros positivos e efetue o cáluclo de uma das seguintes médias de acordo com um valor numérido digitado
pelo usúario.
*/
#include <stdio.h>
#include <math.h>


int main()
{
    int num1, num2, num3, result;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("Digite um numero: ");
    scanf("%d", &num3);

    int value;
    printf("Gostaria de calcular qual tipo de media?\n");
    printf(" 1 - Geometrica\n 2 - Ponderada\n 3 - Harmonica\n 4 - Aritmetica\n");
    printf("Opcao: ");
    scanf("%d", &value);

    int mult, pond, aritSum, aritDiv;
    switch(value)
    {
        case 1:
        mult = num1 * num2 * num3;
        result = pow(mult,1.0/3.0);
        printf("%d", result);
        break;

        case 2:
        pond = num1 + 2 * num2 + 3 * num3 / 6;
        printf("%d", pond);
        break;

        case 3:
        printf("Resolver harmonica");
        break;

        case 4:
        aritSum = num1 + num2 + num3;
        aritDiv = aritSum / 3;
        printf("%d", aritDiv);
        break;

        default:
        printf("Invalid");


        
    }
}

// Resolver harmonica