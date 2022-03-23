//Ex40
/*
Uma empresa contrata um encanador a R$30.00 por dia. Faça
um programa que solicite o número de dias trabalhados pelo
encanador e imprima a quantia líquida que deverá ser paga, 
sabendo--se que são descontados 8% para imposto de renda.
*/

#include <stdio.h>

int main ()
{
    float vDia, diasTrabalhados, vTotal, desconto, salario;
    vDia = 30.00;
    printf("Quantos dias o encanador trabalhou? ");
    scanf("%f", &diasTrabalhados);
    vTotal = vDia * diasTrabalhados;
    desconto = vTotal * 0.08;
    salario = vTotal - desconto;

    printf("O valor que o encanador recebera e: ");
    printf("%f", salario);

}