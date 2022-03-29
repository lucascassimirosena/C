//Ex42
/*
Receba o salário-base de um funcionário. Calcule e imprima o 
salário a receber, sabendo-se que esse funcionário tem uma
gratificação de 5% sobre o salário-base. Além disso, ele paga
7% de imposto sobre o salário-base.
*/

#include <stdio.h>

int main()
{
    float salario, salarioReceber, gratificacao, imposto;
    printf("Qual e o salario? ");
    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;
    salarioReceber = salario - imposto + gratificacao;

    printf("O salario a receber e: ");
    printf("%f", salarioReceber);

}
