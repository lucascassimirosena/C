//Ex29
//Leia quatro notas, calcule a média aritimética e imprima o resultado

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);
    
    printf("Nota 4: ");
    scanf("%f", &nota4);

    float media;
    media = nota1 + nota2 + nota3 + nota4 / 4;
    printf("Sua media e: ");
    printf("%f", media);
}