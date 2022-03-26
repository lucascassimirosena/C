//Ex09
/*
Leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação for maior que 20% do salário imprima:
Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
*/

#include <stdio.h>

int main ()
{
    float salario;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    float prestacao;
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);


    float vintepercento;
    vintepercento = salario * 0.20;

    if(prestacao <= vintepercento)
    {
        printf("Emprestimo concedido.");
    }
    else
    {
        printf("Emprestimo nao concedido.");
    }
}