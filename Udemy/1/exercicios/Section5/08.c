//Ex08
/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o
maior valor lido.
*/

#include <unistd.h>

int main()
{
    int i = 0;
    int num, maior, menor;

    while(i < 10)
    {
        num = 0;
        printf("Digite um numero: ");
        scanf("%d", &num);
        menor = 0;
        maior = 0;
        if(num < maior)
        {
            if(num < menor)
            {
            menor = num;
            }
        }
        else if(num > maior)
        {
            maior = num;
        }
        i++;
    }
    printf("O menor numero e: %d\n", menor);
    printf("O maior numero e: %d", maior);

    

}

/*
Este exercícios ainda não foi concluído
voltar e resolver o exercício.
*/