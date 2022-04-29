//Ex15
/*
Usando o Switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima
o dia da semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, 
e assim por diante.
*/

#include <stdio.h>

int main()
{
    int sem;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &sem);

    switch (sem)
    {
    case 1:
        printf("Domingo.");
        break;
    case 2:
        printf("Segunda.");
        break;
    case 3:
        printf("Terca.");
        break;
    case 4:
        printf("Quarta.");
        break;
    case 5:
        printf("Quinta.");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado.");
        break;
    default:
        printf("Valor invalido.");
        break;
    }

}