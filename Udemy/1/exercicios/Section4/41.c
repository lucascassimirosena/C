//Ex41
/*
Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação
de acordo com a tabela abaixo:

IMC                             CLASSIFICAÇÃO
< 18.5                          Abaixo do Peso
18,6 - 24,9                     Saudável
25,0 - 29,9                     Peso em excesso
30,0 - 34,9                     Obesidade Grau I
35,0 - 39,9                     Obesidade Grau II (severa)
>= 40                           Obesidade Grau III (mórbida)
*/

#include <stdio.h>

int main()
{
    float height, weight, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &weight);
    printf("Digite a sua altura: ");
    scanf("%f", &height);

    height = height * height;
    imc = weight / height;

    if(imc <= 18.5)
    {
        printf("Abaixo do peso.");
    }
    else if(imc >= 18.6 && imc <= 24.9)
    {
        printf("Saudavel.");
    }
    else if(imc >= 25.0 && imc <= 29.9)
    {
        printf("Peso em excesso.");
    }
    else if(imc >= 30.0 && imc <= 34.9)
    {
        printf("Obesidade Grau I");
    }
    else if(imc >= 35.0 && imc <= 39.9)
    {
        printf("Obesidade Grau II(severa)");
    }
    else
    {
        printf("Obesidade Grau III(morbida)");
    }
}