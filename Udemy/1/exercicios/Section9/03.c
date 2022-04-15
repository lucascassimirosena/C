//Ex03
/*
Faça uma função para verificar se um número é positivo ou negativo. Sendo que
o valor de retorno será 1 se posittivo, -1 se negativo e 0 se for igual a 0.
*/

#include <stdio.h>

int ft_positive(int n)
{
    int number;

    if(n > 0)
    {
        number = 1;
    }
    else if(n < 0)
    {
        number = -1;
    }
    else
    {
        number = 0;
    }
    return (number);
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero e %d", ft_positive(num));
}