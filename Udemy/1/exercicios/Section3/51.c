//Ex51
/*
Escreva um programa que leia as coodrdenadas x e y de pontos no R² e calcule
sua distância da origem (0,0).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    r = sqrt(pow(x, 2) + pow(y, 2));

    printf("A distancia e de: %.2f", r);
}