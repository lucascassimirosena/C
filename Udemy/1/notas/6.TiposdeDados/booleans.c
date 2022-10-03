//Boleanos
/*

Booleanos são dados que retornam ou verdadeiro ou falso. (True/False).

Na linguagem C, não existe um tipo de dado boolean, mas a linguagem C
reconhece o valor 0 como Falso e qualquer valor diferente de 0 como True.

*/

#include <stdio.h>

int main()
{

    int booleano = 1;

    if(booleano)
    {
        printf("Verdadeiro.");
    }
    else
    {
        printf("Falso.");
    }

    return (0);
}