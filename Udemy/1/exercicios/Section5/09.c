//Ex09
/*
Make a program that reads the int number N and print the first N natural odd numbers.
*/

#include <stdio.h>


int main()
{
    int num = 0, i = 0, odd = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

        while(i <= num)
        {
            if(num % 2 != 0)
            {
            printf("%d\n", odd);
            odd = odd + 2;
            i++;
            }
        }

}

