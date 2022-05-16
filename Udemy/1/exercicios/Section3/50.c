//Ex50
/*
Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de 
sua idade atual.
*/

#include <stdio.h>

int main()
{
    int age, currentYear, birthYear;

    printf("Quantos anos voce tem? ");
    scanf("%d", &age);
    printf("Em que ano estamos? ");
    scanf("%d", &currentYear);

    birthYear = currentYear - age;
    printf("%d", birthYear);
}