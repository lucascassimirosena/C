//Ex36
/*
Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.
O volume de um cilindro é calulcado por meio da seguinte fórmula:
V = pi * raio2 * altura, onde pi = 3.141592.
*/

#include <stdio.h>

int main ()
{
    float altura, raio, Qraio, pi;
    Qraio = raio * raio;
    pi = 3.141592;

    printf("Coloque a altura: ");
    scanf("%f", &altura);
    printf("Coloque o raio: ");
    scanf("%f", &raio);

    float volume;
    volume = pi * Qraio * altura;
    printf("O volume do cilindro e: ");
    printf("%f", volume);

    

}