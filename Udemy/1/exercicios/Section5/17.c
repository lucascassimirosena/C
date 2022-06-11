//Ex17
/*
Faça um programa que leia um número inteiro positivo N e calcule a soma dos N 
primeiros números naturais
*/

#include <stdio.h>
int main() 
{
    
   int num, soma, i;
   
   printf("Informe um numero inteiro: ");
   scanf("%d",&num);
   
   soma = 0;
   for(i = 0; i <= num; i++)
   {
       soma = soma + i;
   }
        printf("%d\n",soma);
    
   
    return 0;
}
