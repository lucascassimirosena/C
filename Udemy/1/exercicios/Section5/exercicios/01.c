/*Faça um programa que determine e mostre os cinco 
primeiros múltiplos de 3, considerando números maiores que 0.
*/

#include <stdio.h>

int main()
{
 int numero, multiplo;
 numero = 1;


    while(numero < 6)
    {
        multiplo = 3 * numero++;
        printf("Multiplo: %d\n", multiplo);

    }

}

