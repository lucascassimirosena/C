//Ex02
/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre an tela os
valores lidos.
*/
#include <stdio.h>

int main()
{
    int value[5];
    int i;

    for (i= 0; i <= 5; i++)
    {
        printf("Enter a value %d: ", i+1);
        scanf("%d", &value[i]);
    }

    for (i = 0; i <= 5; i++)
    {
        printf("Number %d = %d\n", i+1, value[i]);
    }

}


/*

int main()
{
    int number[3],
        indice;
 
        for(indice=0 ; indice <= 2 ; indice++)
        {
            printf("Entre com o numero %d: ", indice+1);
            scanf("%d", &number[indice]);
        }
 
        for(indice=0 ; indice <= 2 ; indice++)
            printf("Numero %d = %d\n", indice+1, number[indice]);
 
}
*/


// I STILL NEED TO WORK ON IT.