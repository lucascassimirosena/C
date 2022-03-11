//Ex04
//Leia um número real e imprima o quadrado desse número.

#include <stdio.h>

int main (){

    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    float quadrado = numero * numero;
    printf("O quadrado deste numero e: ");
    printf("%f", quadrado);
}

