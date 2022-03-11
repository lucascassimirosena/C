//Ex04
//Leia um número real e imprima o quadrado desse número.

#include <stdio.h>

int main (){

    float numero;
    float quadrado = numero * numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);
    printf("O quadrado deste numero e: ");
    printf("%f", quadrado);
}

//ao executar o comando, o programa resulta em 0.00 por que?