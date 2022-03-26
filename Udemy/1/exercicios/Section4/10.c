//Ex10
/*
Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (onde h corresponde à altura):

- Homens (72.7 * h) - 58
- Mulheres (62.1 * h) - 44.7
*/

#include<stdio.h>

int main()
{
    char sexo;
    printf("Seu sexo e m ou f?");
    scanf("%c", &sexo);

    float altura;
    printf("Agora sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'm')
    {
        float homens = 72.7 * altura - 58;
        printf("Seu peso ideal e: ");
        printf("%f", homens);
    }
    else
    {
        float mulheres = 62.1 * altura - 44.7;
        printf("Seu peso ideal e: ");
        printf("%f", mulheres);
    }

    
}