//Ex03
/*
Leia umnúmero fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre a mensagem dizendo  que o 
número é inválido.
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
        raiz = sqrt(num);
        printf("A raiz desse numero e: %f", raiz);      
    }
    else
    {
        float quadrado;
        quadrado = num * num;
        printf("O quadrado deste numero e: %f", quadrado);
    }
}

