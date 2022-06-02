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
    int num1, num2;
    float res;
    //Verificar se um número é ímpar ou par em C
    
    num1 = 3;
    num2 = 7;
    if(num1 % 2 == 0)
    {
        printf("%d e par", num1);
    }
    else
    {
        printf("%d e impar", num1);
    }
    
    //Pontos flutuantes
    res = (float)num1 / (float)num2; //cast
    printf("\nA divisao e %f\n", (float)res);



}