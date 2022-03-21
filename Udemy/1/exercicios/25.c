//Ex25
/*
Leia um valor de area em acres e apresente-o convertido
em metros quadrados m2. A formula de conversão e: 
M = A * 4048,58, sendo M a área em metros quadrados e A
a área em acres.
*/

#include <stdio.h>

int main ()
{
    float acres;
    printf("Digite o valor em acres: ");
    scanf("%f", &acres);

    float Mquadrados;
    Mquadrados = acres * 4048,58;
    printf("O valor em Metros quadrados e: ");
    printf("%f", Mquadrados);

}