//Ex28
/*
Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos;
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Digite 1 numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Mais um:  ");
    scanf("%d", &num3);

    int quad1 = num1 * num1;
    int quad2 = num2 * num2;
    int quad3 = num3 * num3;

    int soma = quad1 + quad2 + quad3;
    printf("A soma dos quadrados dos numeros informados e: ");
    printf("%d", soma);
}