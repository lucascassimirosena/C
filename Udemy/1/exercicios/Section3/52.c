//Ex52
/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada
um ganharia do prêmio com base no valor investido.
*/

#include <stdio.h>

int main()
{
    float prize, player1, player2, player3;
    int count, player;
    
    printf("Quanto o apostador 1 ira investir? ");
    scanf("%f", &player1);
    printf("Quanto o apostador 2 irá investir? ");
    scanf("%f", &player2);
    printf("Quanto o apostador 3 ira investir? ");
    scanf("%f", &player3);

    char answer;
    printf("Responda S ou N");
    printf("\nO apostador 1 ganhou a aposta?");
    scanf("%c", &answer);
        if(answer == 'S')
        {
            count++;
        }
        else
        {
            printf("Que pena.");
        }

    printf("\nO apostador 2 ganhou a aposta?");
    scanf("%c", &answer);
        if(answer == 'S')
        {
            count++;
        }
        else
        {
            printf("Que pena.");
        }

    printf("\nO apostador 3 ganhou a aposta?");
    scanf("%c", &answer);
        if(answer == 'S')
        {
            count++;
        }
        else
        {
            printf("Que pena.");
        }

    if(count == 0)
    {
        printf("Que pena.");
    }
    else if(count == 1);
    {
        printf("Qual apostador venceu? ");
        scanf("%d", &player);
        switch(player)
        {
            case 1:
            prize = player1 + player1;
            printf("O valor a receber e de %d", prize);
        }
    }

    

}