//Ex34
/*
Leia o valor do raio de um círculo e calcule e imprima a área
do círculo correspondente. A área do círculo é pi*raio2,
considere pi = 3.141592.
*/

#include <stdio.h>

int main()
{
    float raio;
    printf("Coloque o valor do raio do circulo: ");
    scanf("%f", &raio);

    float pi = 3.141592;
    float Qraio = raio * raio;
    float area = pi * Qraio;
    
    printf("O valor da area do circulo e: ");
    printf("%f", area);
}