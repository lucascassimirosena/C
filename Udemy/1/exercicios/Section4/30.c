//Ex30
/*
Faça um programa que recceba três números e mostre-os em ordem crescente.
*/

#include <stdio.h>

int main()
{
    int a, b, c; 
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    printf("Digite um numero: ");
    scanf("%d", &c);

        if(a < b && b < c || a < c && c > b && b > a || b > a < c > b)
        {
            printf("%d %d %d", a, b, c);
        }
        else if(a > b && b > c || a > c && c < b && a > b)
        {
            printf("%d %d %d", c, b, a);
        }
        else if(a < c && c < b || b > c > a)
        {
            printf("%d %d %d", a, c, b);
        }
        else if(a > c && c < b && b > a || b > a > c)
        {
            printf("%d %d %d", c, a, b);
        }
        else if(a < c && c > b && a > b || b < a < c)
        {
            printf("%d %d %d", b, a, c);
        }
        else if(b < c < a)
        {
            printf("%d %d %d", b, c, a);
        }

        else if(b < a > c < b)
        {
            printf("%d %d %d", c, b, a);
        }

        else if(b < a > c > b)
        {
            printf("%d %d %d", b, c, a);
        }


}  

/*
Validações por a e b, foram feitas. Faltam as seguintes:

c > a > b
c > b > a
c < b < a
c < a < b
c < b > a
c > b < a
*/

