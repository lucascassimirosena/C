//Ex47
/* Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1
digito por linha.
*/

#include <stdio.h>

int main()
{
    int num, first, second, third, fourth;

    printf("Digite um numero inteiro de 1000 a 9999: ");
    scanf("%d", &num);

    first = num / 1000 % 10;
    second = num / 100 % 10;
    third = num / 10 % 10;
    fourth = num / 1 % 10;

    printf("%d", first);
    printf("\n%d", second);
    printf("\n%d", third);
    printf("\n%d", fourth);


}


