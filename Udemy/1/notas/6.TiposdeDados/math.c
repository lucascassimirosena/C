//Operações Matemáticas
/*

somar +
subtrair -
multiplicar *
resto %
dividir /
elevar ao quadrado x ** 2

*/

#include <stdio.h>

int main()
{
    int num1;
    //Verificar se um número é ímpar ou par em C
    printf("Digite um numero: ");
    scanf("%d", &num1);

    if(num1 % 2 == 0)
    {
        printf("%d e par", num1);
    }
    else
    {
        printf("%d e impar", num1);
    }
}