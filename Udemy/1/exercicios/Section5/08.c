//Ex08
/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o
maior valor lido.
*/

#include <unistd.h>

int main()
{
  int num, maior = 0, menor = 0, i=0;
 
    printf("Digite um numero: ");
    scanf("%d",&num);
    
    menor = num;
    maior = num;
    
    for(i = 1; i < 10; i++)
    {
    
        printf("Digite um numero: ");
        scanf("%d",&num);
    
        if(num > maior) 
        {
        maior = num;
        }
        else if(num < menor) 
        {
            menor = num;
        }
    }
    printf ("Menor: %d Maior: %d\n",menor, maior);
    
    return 0;
        

    

}

