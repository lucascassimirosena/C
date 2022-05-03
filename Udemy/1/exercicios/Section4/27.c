//Ex27
/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma
das seguintes categorias:
Infantil A: 5 a 7 anos
Infantil B: 8 a 10 anos
Juvenil A: 11 a 13 anos
Juvenil B: 14 a 17 anos
Sênior: Maiores de 18 anos
*/

#include <stdio.h>

int main()
{
    int age;

    printf("Qual e a idade do nadador? \n");
    scanf("%d", &age);

    if(age >= 5 && age <= 7)
    {
        printf("Infantil A");
    }
    else if(age >= 8 && age <= 10)
    {
        printf("Infantil B");
    }
    else if(age >= 11 && age <= 13)
    {
        printf("Juvenil A");
    }
    else if(age >= 14 && age <= 17)
    {
        printf("Juvenil B");
    }
    else if(age >= 18)
    {
        printf("Senior");
    }
    else
        printf("Valor invalido");
}