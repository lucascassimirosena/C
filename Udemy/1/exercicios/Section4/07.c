//Ex07
/*
Faça um programa que receba dois números e mostre o maior.
Se por acaso, o s dois números forem iguais,
imprima a mensagem Números iguais.
*/

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    if(num1 > num2)
    {
        printf("O numero %f e maior que o numero %f.", num1, num2);
    }
    else if(num2 > num1)
    {
        printf("O numero %f e maior que o numero %f.", num2, num1);
    }
    else if(num1 == num2 | num2 == num1)
    {
        printf("Numeros iguais");
    }
    else 
    {
        printf("Invalido.");
    }
}