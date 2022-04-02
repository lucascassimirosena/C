//EX05

/*
Faça um programa que peça ao usuário
digitar 10 valores e some-os.
*/

#include <stdio.h>

int main()
{
    int valor = 0;
    int soma = 0; 
    int vez;

    printf("Digite um valor: ");
    scanf("%d\n", &valor);

    while(vez < 10)
    {
        soma = valor + soma;
        printf("Digite um valor: ");
        scanf("%d\n", &valor);
        vez++;
    }
    printf("A soma e %d", soma);
    return 0;
}


