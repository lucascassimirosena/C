//Ex10
/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include <stdio.h>

int main()
{
int n, i, even = 0, sum = 0;

do
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("Numero par: %d\t",even);
            sum = sum + even;
            printf("A soma e:%d\n", sum);
            even = even + 2;
            i = i + 1;
        }        
    }
}
while(i <= 50);

    return 0;

}