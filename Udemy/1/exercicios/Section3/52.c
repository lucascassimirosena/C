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
    float prize, player1, player2, player3, sum;
    int num;
    
    printf("Qual e o valor do premio? ");
    scanf("%d", &prize);

    printf("Quanto o apostador 1 ira investir? ");
    scanf("%f", &player1);
    printf("Quanto o apostador 2 ira investir? ");
    scanf("%f", &player2);
    printf("Quanto o apostador 3 ira investir? ");
    scanf("%f", &player3);

    printf("Quantos apostadores acertaram?");
    scanf("%d", &num);

    sum = 0;
    switch(num)
    {
        case 1:
        sum = prize;
        printf("O premio e de %f ", sum);
        break;

        case 2:
        sum = prize / 2;
        printf("O premio e de %f ", sum);
        break;

        case 3:
        sum = prize / 3;
        printf("O premio e de %f ", sum);
        break;

        default:
        printf("Invalido.");
    }
}