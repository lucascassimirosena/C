//Ex21
/*
Escreva o menu de opções abaixo. Leia a opçao do usuário e execute a
operação escolhida. Escreva uma mensagem de erro e a opção for errada.
*/

#include <stdio.h>

int main()
{
    int opt;
    int n1, n2;
    int sum, sub, mult, div;

    printf("Escolha a opcao: \n");
    printf("1 - Soma de 2 numeros.\n2 - Diferenca entre 2 numeros (Maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");

    printf("Opcao: ");
    scanf("%d", &opt);

    switch(opt)
    {
        case 1:
        printf("\nNumero 1: ");
        scanf("%d", &n1);
        printf("Numero 2: ");
        scanf("%d", &n2);

        sum = n1 + n2;
        printf("Soma: %d \n", sum);
        break;

        case 2:
        printf("Numero 1: ");
        scanf("%d", &n1);
        printf("Numero 2: ");
        scanf("%d", &n2);

        sub = n1 - n2;
        printf("Diferenca: %d \n", sub);
        break;

        case 3:
        printf("Numero 1: ");
        scanf("%d", &n1);
        printf("Numero 2: ");
        scanf("%d", &n2);

        mult = n1 * n2;
        printf("Produto: %d \n", mult);
        break;

        case 4:
        printf("Numero 1: ");
        scanf("%d", &n1);
        printf("Numero 2: ");
        scanf("%d", &n2);

        div = n1 / n2;
        printf("Divisao: %d \n", div);
        break;

        default:
        printf("Opcao invalida.");
    }

}