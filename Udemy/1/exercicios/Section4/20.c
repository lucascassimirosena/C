//Ex20
/*
Dados três valores, A, B, C, verificar se eles podem ser valores dos 
lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero
ou isóscele, considerando os seguitnes conceitos:

- O comprimento de cada lado de um triângulo é menor do que a soma dos
outros dois lados.
- Chama-se equilátero o triângulo que tem três lados iguais.
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados
iguais.
- Recebe o nome de escaleno o triânguo que tem os três lados diferentes.
*/

#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("Digite o tamanho dos tres lados do triangulo.\n");
    printf("Lado 1: ");
    scanf("%d", &a);
    printf("Lado 2: ");
    scanf("%d", &b);
    printf("Lado 3: ");
    scanf("%d", &c);

    if(a < b + c || b < a + c || c < a + b)
    {
        if(a == b && b == c)
        {
            printf("Triangulo Equilatero.");
        }
        else if(a == b || b == c || c ==a)
        {
            printf("Triangulo Isosceles.");
        }
        else if(!(a == b && b == c && c ==a))
        {
            printf("Triangulo Escaleno.");
        }
        else
        {
            printf("Invalido.");
        }
    }
    else
    {
        printf("Invalido.");
    }
}
