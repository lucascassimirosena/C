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

        if(a < b && b < c || a < c && c > b && b > a)
        {
            printf("%d %d %d", a, b, c);
        }
        else if(a > b && b > c || a > c && c < b && a > b)
        {
            printf("%d %d %d", c, b, a);
        }
        else if(a < c && c < b)
        {
            printf("%d %d %d", a, c, b);
        }

        else if(a > c && c < b && b > a)
        {
            printf("%d %d %d", c, a, b);
        }
        else if(a < c && c > b && a > b)
        {
            printf("%d %d %d", b, a, c);
        }

    
        if()
    
}  


/*
Validações por a, foram feitas. Faltam as seguintes:


b > a > c
b > c > a
b < a < c
b < c < a
b < a > c < b
b < a > c > b
b > a < c > b
b > a < c < b

c > a > b
c > b > a
c < b < a
c < a < b
c < b > a
c > b < a
*/