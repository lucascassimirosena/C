//Ex24
/*
Uma empresa vende o mesmo produto para quatro diferentes estados.
Cadas estado possui uma taxa diferente de imposto sobre o produto
(MG 7%; SP 12%; RJ 15%; MS 8%). Faça um program em que o usuário entre com
o valor e o estado destino do produto e o programa retorne o preço final
do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.
*/

#include <stdio.h>

int main()
{
    char state;
    printf("Lista de Estados: \nMG\nSP\nRJ\nMS\n");
    printf("Digite o estado: ");
    scanf("%c", &state);

    float price;
    printf("Digite o preco: ");
    scanf("%f", &price);

    float finalPrice;
    if(state == "MG")
    {
        finalPrice = price * 0.07;
    }
    else if(state == "SP")
    {
        finalPrice = price * 0.12;
    }
    else if(state == "RJ")
    {
        finalPrice = price * 0.15;
    }
    else if(state == "MS")
    {
        finalPrice = price * 0.08;
    }
    else
    {
        printf("Estado invalido.");
    }

    printf("\nO valor final do produto e: ");
    printf("%f", finalPrice);

}