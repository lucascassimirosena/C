//Ex03
//Peça ao usuário para digitar 3 valores inteiros e imprima a soma deles

#include <stdio.h>

int main(){
    int A;
    int B;
    int C;
    int soma;


    printf("Digite um numero: ");
    scanf("%d", &A);
    printf("Digite outro numero: ");
    scanf("%d", &B);
    printf("Mais um: ");
    scanf("%d", &C);

    soma = A + B + C;
    printf("A soma dos numeros digitados e: ");
    printf("%d", soma);
    

}