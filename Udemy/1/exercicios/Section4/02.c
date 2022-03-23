//Ex02
/*
Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número.
Se o número for negativo, mostre a mensagem dizendo que o número é inválido.
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Ok, digita mais um: ");
    scanf("%d", &num2);

    if(num1 >= 0)
    {
        int raiz;
        raiz = sqrt(num1);
        printf("%d", raiz);
    }




    return 0;
}