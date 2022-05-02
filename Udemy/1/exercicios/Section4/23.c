//Ex23
/*
Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto
se for divisível por 400 ou se for divisível por 4 e não for divisível por 100.
Por exemplo: 1988, 1992, 1996.
*/

#include <stdio.h>

int main()
{
    int year;

    printf("Digite o ano: ");
    scanf("%d", &year);


    if(year % 400 == 0 || year % 4 == 0 && (!(year % 100 == 0)))
    {
        printf("Ano bissexto.");
    }
    else
    {
        printf("Nao bissexto.");
    }
    
}