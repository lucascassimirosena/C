//Ex01
/*
Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o valor da posição 4, atribuindo a esta posição o  valor 100
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include <stdio.h>

int main()
{
    int a[5];

    a[0] = 1;
    a[1] = 0;
    a[2] = 5;
    a[3] = -2;
    a[4] = -5;
    a[5] = 7;

    int sum = a[0] + a[1] + a[5];
    a[4] = 100;

    printf("A0: %d\n ", a[0]);
    printf("A1: %d\n ", a[1]);
    printf("A2: %d\n ", a[2]);
    printf("A3: %d\n ", a[3]);
    printf("A4: %d\n ", a[4]);
    printf("A5: %d\n ", a[5]);
    printf("Soma: %d\n", sum);
}