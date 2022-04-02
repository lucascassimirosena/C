/*
Estruturas de repetição, for, while, do... while

A estrtura de repetição deve ter um critério de parada.

Quando se há uma estrutura onde já existe um número pré-determinado de parada utilizamos o "for".
Por exemplo: Receba 10 números.

Quando não existe um número finito de elementos porém e feita uma checagem no início do código, se utiliza "While".

Quando se deseja executar o loop pelo menos uma vez e depois realizar a checagem se utiliza o "Do... While".


*/



//Estrutura de repetição
//While
 
    /*
    Utilizado quand você preicsa de um loop onde não se tenha um número fixo de elementos
    mas que tenha um critério de parada e antes de iniciar o loop a condição é checada.
    */

/*
PROBLEMA:

Faça um programa, no qual receba e some números inteiros até que
o número de entrada seja 0 e apresente a soma no final;
*/


#include <stdio.h>

int main()
{

    int numero, soma = 0;
    printf("Informe um numero: ");
    scanf("%d", &numero);


    while(numero != 0)
    {
        soma = soma + numero;
        printf("Informe um numero: ");
        scanf("%d", &numero);
    }
    printf("A soma e %d", soma);

    return 0;
}