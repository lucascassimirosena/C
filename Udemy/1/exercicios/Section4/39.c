//Ex39
/*
Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o temo de serviço de cada funcionário. Os funcionários com
menorsalário terão um aumento proporcionalmente maior do que os funcionários com um salário 
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional
de salário. Faça um programa que leia:

    * O valor do salário atual do funcionário;
    * O tempo de serviço desse funcionário na empresa (número de anos de
    * trabalho na empresa).

Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o
valor do salário final reajustado, ou uma mensagem caso o funcoinário não tenha direito
a nenhum aumento.

Salário Atual       Reajuste(%)         Tempo de Serviço            Bônus
Até 500.00              25%             Abaixo de 1 ano            Sem bônus
Até 1000.00             20%              De 1 a 3 anos              100.00
Até 1500.00             15%              De 4 a 6 anos              200.00
Até 2000.00             10%              De 7 a 10 anos             300.00
Acima de 2000        Sem reajuste        Mais de 10 anos            500.00
*/

#include <stdio.h>

int main()
{
    int wage, workTime, newWage;
    int percentage, bonus;

    printf("Digite o seu salario atual: ");
    scanf("%d", &wage);
    printf("Digite o tempo de servico em anos: ");
    scanf("%d", &workTime);

    if(wage < 500 && workTime < 1)
    {
        percentage = wage * 0.25;
        bonus = 0;
        newWage = wage + percentage + bonus;
        printf("Seu novo salario e de %d", newWage);
    }
    else if(wage >= 500 < 1000 && workTime >= 1 <= 3)
    {
        percentage = wage * 0.20;
        bonus = 100;
        newWage = wage + percentage + bonus;
        printf("Seu novo salario e de %d", newWage);
    }
    else if(wage >= 1000 < 1500 && workTime >= 4 <= 6)
    {
        percentage = wage * 0.15;
        bonus = 200;
        newWage = wage + percentage + bonus;
        printf("Seu novo salario e de %d", newWage);
    }
    else if(wage >= 1500 < 2000 && workTime >= 7 <= 10)
    {
        percentage = wage * 0.10;
        bonus = 300;
        newWage = wage + percentage + bonus;
        printf("Seu novo salario e de %d", newWage);
    }
    else if(wage >= 2000 && workTime > 10)
    {
        percentage = 0;
        bonus = 500;
        newWage = wage + percentage + bonus;
        printf("Seu novo salario e de %d", newWage);
    }
    else
        prinf("Invalido");

}