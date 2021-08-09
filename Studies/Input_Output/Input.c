#include <stdio.h>
/*The function printf() displays information on the screen, the function 
scanf() takes information and stores it in a variable. When we're using this function we need to specify
the type of data we're taking:
%d - interger
%s - string
%c - character
%f - float
If we're refering to a value stored in a variable we have to use &, if it's a string we don't use it.
*/

int main()
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d:::::%s", i, str);

    return (0);
}