//EX03

/*
Faça um algoritmo utilizando o comando 
while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0.
Mostrar uma mensagem "FIM!" Após a contagem
*/

#include <stdio.h>

int main()
{
    int numero = 11;

    while(numero != 0)
    {
        numero--;
        printf("%d\n", numero);
        if(numero == 0)
        {
            printf("FIM!");
        }
    }
    return 0;
}