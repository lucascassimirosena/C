/*
Format Specifiers are used when displaying variables as output
    They specify the type of data of the variable to be displayed
*/

#include<stdio.h>

int main()
{
int sum = 89;
printf("The sum is %d\n", sum);

/*
The printf() function can display as output the values of variables
    - has two items or agruments enclosed within the parentheses
    - arguments are separated by a comma
    - first argument to the printf() froutine is always the character
    sring to be displayed
    - along with the display of the character string, you might also frequently want to have the value
     of certain program variables displayed

The percent character inside the first argument is a special character recognized by the printf(f)
function
    the character that immediately follows the percent sign specifies what
    type of balue is to be displayed
*/

int intergerVar = 100;
float floatVar = 31.79;
double doubleVar = 8.44e11;
char charVar = 'W';
_Bool boolVar = 0;

printf ("intergerVar = %i\n", intergerVar);
printf ("floatVar = %f\n", floatVar);
printf ("doubleVar = %e\n", doubleVar);
printf ("charVar = %g\n", doubleVar);
printf ("charVar = %c\n", charVar);
printf ("boolVar = %i\n", boolVar);
    return 0;
}
