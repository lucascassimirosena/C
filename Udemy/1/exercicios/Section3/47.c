//Ex47
/* Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1
digito por linha.
*/

#include <stdio.h>

int main()
{
    char number[4];
    printf("Digite o numero: ");
    scanf("%c", &number);

    printf("%c", number[4]);
}