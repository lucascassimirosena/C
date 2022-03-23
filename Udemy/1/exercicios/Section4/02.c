//Ex02
/*
Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número.
Se o número for negativo, mostre a mensagem dizendo que o número é inválido.
*/

#include <stdio.h>
#include <math.h> //Tive que incluir esta biblioteca para colocar a função da raiz quadrada

int main ()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0)
    {
        int raiz;
        raiz = sqrt(num);
        printf("%d", raiz);
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}