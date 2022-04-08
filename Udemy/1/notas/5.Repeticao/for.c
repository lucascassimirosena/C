/*
Estruturas de repetição, for, while, do... while

A estrtura de repetição deve ter um critério de parada.

Quando se há uma estrutura onde já existe um número pré-determinado de parada utilizamos o "for".
Por exemplo: Receba 10 números.

Quando não existe um número finito de elementos porém e feita uma checagem no início do código, se utiliza "While".

Quando se deseja executar o loop pelo menos uma vez e depois realizar a checagem se utiliza o "Do... While".


*/



#include <stdio.h>

int main()
{

    int numero, soma = 0;

    //FOR
    //para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1
    //inicialização, critério de parada, forma de incremento
    for(int i = 0; i < 5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
    }
    printf("A soma e %d", soma);

    return 0;
}