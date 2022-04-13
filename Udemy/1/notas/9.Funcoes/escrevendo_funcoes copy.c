/*
É dentro da função principal (main) que executamos todas as outras funções.

Podemos criar nossas próprias funções.

Estrutura das Funções:

- tipo de retorno
- nome
- parâmetros de entrada (opcional)
- implementação
- retorno (opcional)





*/

#include <stdio.h>

void mensagem()
{  //Os parênteses indicam a função.
    printf("Bem-vindo!");
}

int soma(int num1, int num2)
{
    return (num1 + num2);
}


//Protótipo de função
/* O protótipo de função diz a main quais funções estão sendo implementadas após a main */
int soma(int num1, int num2);

int main ()
{
    int n1, n2, ret;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    ret = soma(n1, n2);
    printf("A soma de %d com %d e %d", n1, n2, ret);
    return (0);
}

