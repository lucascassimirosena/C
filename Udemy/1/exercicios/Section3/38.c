//Ex38
/*
Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que 
ele recebeu um aumento de 25%.
*/

#include <stdio.h>

int main ()
{
    float salario;
    printf("Qual e o seu salario? ");
    scanf("%f", &salario);

    float aumento;
    aumento = salario * 0.25;

    float novoSalario;
    novoSalario = salario + aumento;

    printf("Este e o seu novo salario: ");
    printf("%f", novoSalario);
}