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

    scanf("%d", &num);
        if(num == 1)
        {
            printf("Numero 1: ");
            scanf("%d", &n1);
            printf("Numero 2: ");
            scanf("%d", &n2);

            sum = n1 + n2;
            printf("A soma e: %d", sum);
        }
        if(num == 2)
        {
            printf("Numero 1: ");
            scanf("%d", &n1);
            printf("Numero 2: ");
            scanf("%d", &n2);

            sub = n1 - n2;
            printf("A diferenca e de: %d", sub);
        }
        if(num == 3)
        {
            printf("Numero 1: ");
            scanf("%d", &n1);
            printf("Numero 2: ");
            scanf("%d", &n2);

            div = n1 / n2;
            printf("O resultado e: %d", div);
        }
        if(num == 4)
        {
            printf("Numero 1: ");
            scanf("%d", &n1);
            printf("Numero 2: ");
            scanf("%d", &n2);

            mult = n1 * n2;
            printf("O resultado e: %d", mult);
        }



}
