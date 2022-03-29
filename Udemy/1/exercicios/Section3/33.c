//Ex33
/*
Leia o tamanho do lado de um quadrado e imprima como resultado
a sua área.
*/

#include <stdio.h>

int main ()
{
    int base, altura;
    printf("Coloque o tamanho do lado do quadrado: ");
    scanf("%d", &base);
    altura = base;

    int area;
    area = base * altura;
    printf("A area do quadrado e: ");
    printf("%d", area);

}