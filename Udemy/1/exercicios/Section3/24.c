//Ex24
/*
Leia um valor ce area em metros quadrados m2 e apresente-o
convertido em acres. A formula de conversao e: A = M*0.000247,
sendo M a area em metros quadrados e A a area em acres.
*/

#include <stdio.h>

int main()
{
    float Mquadrado;
    printf("Digite o valor em M2: ");
    scanf("%f", &Mquadrado);

    float acres;
    acres = Mquadrado * 0.000247;
    printf("O valor em acres e: ");
    printf("%f", acres);


}