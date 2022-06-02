//The alphabet

//Gerar um alfabeto completo com um loop baseado na tabela ACII
/*
https://www.ime.usp.br/~pf/algoritmos/apend/ascii.html
*/

#include<stdio.h>

int main()
{
    for (int i = 97; i <= 122; i++)
    {
        printf("%c\n", i);
    }

    return (0);
}