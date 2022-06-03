//Ex20
/*
Ler uma sequência de números e determinar se eles são pares ou não. Deverá
ser ifnormado o número de dados lidos e número de valores pares. O processo termina
quando for digitado o número 1000.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, sum, res;


    while(num1 != 1000)
    {
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite um numero: ");
        scanf("%d", &num2);       

        sum = 0;
        if(num1 % 2 == 0)
        {
            sum = num1 + num2;
            num3 = sum;

        }

        
    }
    res = num3 + sum;
    printf("%d", num1);
}

//solving