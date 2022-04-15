//Ex09
/*
Crie uma função que recebe como parâmetro um número inteiro
e devolve seu dobro.
*/

#include <stdio.h>

int ft_double(int n)
{
    n = n + n;
    return(n);
}

int main()
{
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);
    printf("O dobro desse numero e: %d", ft_double(number));

    return (0);
}