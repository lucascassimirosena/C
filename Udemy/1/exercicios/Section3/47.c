//Ex47
/* Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1
digito por linha.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro de 1000 a 9999: ");
    scanf("%d", &num);

    if(num >= 1000 && num <= 9999)
    {
        printf("%d", num);

    }

}

//CONTINUAR
