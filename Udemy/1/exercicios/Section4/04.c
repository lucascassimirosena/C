//Ex04
/*
Faça um programa que leia um número e, caso ele seja posistivo, calcule e mostre:
- O número digitado ao quadrado.
- A raiz quadrada do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 0)
    {
        float raiz;
        float quadrado;

        quadrado = num * num;
        raiz = sqrt(num);

        printf("O quadrado do numero %f e %f", num, quadrado);
        printf("\nA raiz do numero %f e %f", num, raiz);
    }
    else
    {
        printf("Invalido.");
    }
}

