//Ex12
/*
Ler um número inteiro. Se o número lido for negativo, escreva a mensagem "Número Inválido"
Se o número for postivo, caluclar o logarítimo deste número.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Numero invalido.");
    }
    else
    {
        log(num);
        printf("O logaritmo e %lf .", log(num));

    }
}
