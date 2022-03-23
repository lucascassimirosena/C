//Ex45
/* 
Faça um programa para converter uma letra maiúscula em
letra minúscula. Use a tabela ASCII para resolver o problema.
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("\nDigite um caracter: ");
    scanf("%c", &ch);
    char minusculo = ch + 32;
    printf("Minúsculo: ");
    printf("%c", minusculo);

}