//Ex17
/*
Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que
A = basemaior + basemenor * altura / 2
*/

#include <stdio.h>

int main()
{
    int basemaior, basemenor, altura, area, somaDeBases;

    basemaior = 10;
    basemenor = 10;
    altura = 5;
    somaDeBases = basemaior + basemenor;
    area = somaDeBases * altura / 2;

    if(basemaior > 0 && basemenor > 0)
    {
        printf("%d", area);
    }
    else
    {
        printf("Numero invalido.");
    }

}