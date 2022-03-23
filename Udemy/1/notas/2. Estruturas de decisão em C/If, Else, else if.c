//If, Else, else if
// Estruturas de decisão

#include <stdio.h>

int main()
{
    //Declaração de variáveis
    int idade;

    //Entrada
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    //Processamento
    if(idade < 18)
    {
        printf("Você é menor de idade. ");
    } 
    else if(idade > 18 && idade < 60)
    {
        printf("Você é adulto.");
    }
    else
    {
        printf("Você é idoso.");
    }

    //Saída
    printf("Sua idade é %d", idade);

    return 0;


}