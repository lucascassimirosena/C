//Ex31
/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostre qual a classificação dessa pessoa.

Altura                       Peso
                    Até 60      Entre 60 e 90 (inclusive)   Acima de 90
Menor que 120        A              D                           G
De 1.20 a 1.70       B              E                           H
Maior que 1.70       C              F                           I
*/

#include <stdio.h>

int main()
{
    float weight, height;


    printf("Coloque a altura: ");
    scanf("%f", &height);
    printf("Coloque o peso: ");
    scanf("%f", &weight);

        if(height < 1.20 && weight < 60)
        {
            printf("A");
        }
        else if(height < 1.20 && (weight >= 60 && weight <= 90))
        {
            printf("D");
        }
        else if(height < 1.20 && weight > 90)
        {
            printf("G");
        }

        else if((height >= 1.20 && height <= 1.70) && (weight < 60))
        {
            printf("B");
        }
        else if((height >= 1.20 && height <= 1.70) && (weight >= 60 && weight <= 90))
        {
            printf("E");
        }
        else if((height >= 1.20 && height <= 1.70) && weight > 90)
        {
            printf("H");
        }
        else if(height > 70 && weight < 60)
        {
            printf("C");
        }
        else if(height > 70 && (weight >= 60 && weight <= 90))
        {
            printf("F");
        }
        else if(height > 70 && weight > 90)
        {
            printf("I");
        }
        else
        {
            printf("Invalido");
        }
}
