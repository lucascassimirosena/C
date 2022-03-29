//Ex44
/*
Receba a altura do degra de uma escada e a altura que o 
usuário deseja alcançar subindo a escada. alcule e mostre
quantos degraus o usuário deverá subir para atingir seu
objetivo
*/

#include <stdio.h>

int main ()
{
    int escada = 10;
    int degrau;
    printf("Em qual degrau voce esta? ");
    scanf("%d", &degrau);
    int restante = escada - degrau;
    printf("Faltam ");
    printf("%d", restante);
    printf(" degraus para chegar ao topo.");

}