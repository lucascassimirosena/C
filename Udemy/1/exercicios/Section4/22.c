//Ex22
/*
Leia a idade e o tempo de servico de um trabalhador e escreva se ele pode
ou nao se aposentar. As condicoes para aposentadoria sao:
- Ter pelo menos 65 anos.
- Ou ter trabalhado pelo menos 30 anos.
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include <stdio.h>

int main()
{
    int age;
    int workTime;

    printf("Digite a sua idade: ");
    scanf("%d", &age);
    printf("Voce possui %d anos.\n", age);
    printf("Digite seu tempo de trabalho: ");
    scanf("%d", &workTime);
    printf("Voce trabalhou por %d anos.\n", workTime);

    if(age == 65 || workTime == 30 || age >= 60 && workTime == 25)
    {
        printf("Voce ja pode se aposentar. Parabens.");
    }
    else
    {
        printf("Condicoes insuficientes para aposentadoria.");
    }

}