//Ex46
/*
Faça um programa que leia um número inteiro positivo de três
dígitos (de 100 a 999). Gere outro número formado pelos dígitos
invertidos do número lido. Exemplo:

NúmeroLido = 123
NúmeroGerado = 321

*/

#include <stdio.h>

int main()
{

    char num[3];
    int size, i;
    printf("Digite um numero de 3 digitos: ");
    scanf("%3[^\n]", num);
    size = strlen(num);
        for(i = size - 1; i >= 0; i--)
        {
        printf("%c", num[i]);
        }

}

