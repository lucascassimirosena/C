//Ex48
/*
Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, hours, minutes, seconds;

    printf("Digite o valor em segundos: ");
    scanf("%d", &num);

    hours = floor(num / 3600);
    minutes = floor((num - (hours * 3600)) / 60);
    seconds = (num - (hours * 3600) - (minutes * 60));

    printf("%d segundos e o equivalente a: %d:%d:%02d", num, hours, minutes, seconds);
}