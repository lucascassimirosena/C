//Ex18
/*
Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e
o seu programa então pede dois valores númericos e realiza a operação, mostrando
resultado e saindo.
*/

#include <stdio.h>

int main()
{
    int num;
    int n1, n2;
    int sum, div, mult, sub;

    printf("Lista de Operacoes:\n");
    printf("    Soma: 1\n    Subtracao: 2\n    Divisao: 3\n    Multiplicacao: 4\n");
    printf("Digite o numero da operacao desejada: ");

    switch(num)
    {
        case 1:
        printf("Digite um numero: \n");
        scanf("%d", &n1);
        printf("Digite outro numero: \n");
        scanf("%d", &n2);

        sum = n1 + n2;
        printf("A soma e %d", sum);
        break;

    }
}
//FINISH IT