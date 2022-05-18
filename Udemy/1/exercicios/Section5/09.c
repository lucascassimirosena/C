//Ex09
/*
Make a program that reads the int number N and print the first N natural odd numbers.
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 0;
    while(i <= 10)
    {
        if(num % 2 != 0)
        {
            printf("%d", num);
            i++;
        }
        
    }
    
}

//TERMINAR