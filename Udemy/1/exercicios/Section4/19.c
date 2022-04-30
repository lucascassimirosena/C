//Ex19
/*
Faça um programa para verificar se um determinado número inteiro e divisível por 3
ou 5, mas não simultaneamnete pelos dois.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 3 == 0)
    {
        printf("Nao Divisivel");
    }
    else if(num % 5 == 0 || num % 3 == 0)
    {
        printf("Divisivel");
    }
    else
        printf("Nao Divisivel");
}
