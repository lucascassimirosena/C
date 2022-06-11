//Ex09
/*
Make a program that reads the int number N and print the first N natural odd numbers.
*/

#include <stdio.h>

int main()
{
    int num = 0, i = 0, num2;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++)
    {
        if(num % 2 == 0)
        printf(" ");
        else 
        num2 = num + 1 - num;
        printf("%d", num2);
    }

}


