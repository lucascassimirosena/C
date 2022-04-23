/* 
Faça um programa que leia 10 inteiros positivos, ignorando os não positivos,
e imprima sua média.
*/

#include <stdio.h>

int main()
    {
    int i = 0;
    int number = 0;
    int sum = 0;
    int average = 0;

    while(i < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &number);
        if(number > 0)
        {
        sum = number + sum;
        i++;
        }
    }
    average = sum / 10;
    printf("A Soma e: %d\n", sum);
    printf("A media e: %d", average);
}