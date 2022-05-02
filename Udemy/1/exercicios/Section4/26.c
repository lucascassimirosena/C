//Ex26
/*
Leia a distancia em Km e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem
de acordo com a tabela abaixo:

menor que 8km/l: Venda o carro!
entre 8 e 14km/l: Economico!
maior que 12km/l: Super econômico!
*/

#include <stdio.h>

int main()
{
    int km;
    int l;
    int consumo;

    printf("Digite a distancia em Km: ");
    scanf("%d", &km);
    printf("Digite quantos litros consumidos: ");
    scanf("%d", &l);

    consumo = km / l;
    if(consumo < 8)
    {
        printf("Venda o carro!");
    }
    else if(consumo == 8 || consumo <= 14)
    {
        printf("Economico!");
    }
    else
    {
        printf("Super Economico!");
    }


}