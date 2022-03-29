//Ex05
//Leia um número real e imprima a quinta parte desse número.

#include <stdio.h>

int main(){
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    float quinta;

    quinta = numero / 5;
    printf("A quinta parte do numero e: ");
    printf("%f", quinta);
}