//Ex29
/*
Faça uma prova de matemática pra crianças que estão aprendendo a somar
números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100,
e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números
aleatórios. Peça a resposta. Faça cinco perguntas ao aluo, e mostre apra ele as pergutnas e 
as respostas corretas, além de quantas vezes o aluno acertou.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n1, n2;

    while(i <= 10)
    {
        n1 = rand() % 100;
        n2 = rand() % 100;
        printf("Qual e a soma de %d + %d?\n", n1, n2);
        int answer;
        scanf("%d", &answer);

        int sum;
        sum = n1 + n2;
        if(answer == sum)
        {
            printf("Correto!");
        }
        else
        {
            printf("Errado!");
        }
        i++;
    }

}

//NOT SOLVED YET