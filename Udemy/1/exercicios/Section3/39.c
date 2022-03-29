//Ex39
/*
A importância de R$780 000.00 será dividida entre três
ganhadores de um concurso. Sendo a quantia total:
- O primeiro ganhador receberá 45%
- O segundo receberá 32%
- O terceiro receberá o restante;

Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

#include <stdio.h>

int main ()
{
    float premio = 780000;
    float primeiro, segundo, terceiro;
    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio - primeiro - segundo;

    printf("O valor que o primeiro recebera e: ");
    printf("%f", primeiro);
    printf("\nO valor que o segundo recebera e: ");
    printf("%f", segundo);
    printf("\nO valor que o terceiro recebera e: ");
    printf("%f", terceiro);



}