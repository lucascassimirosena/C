/*This challenge requires you to print  on a single line.
Then print the already provided input string to stdout. 
If you are not familiar with C, you may want to read about the printf() command.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf ("Hello, World!\nWelcome to C programming."); /*The goal of the challenge 
    was to show these 2 phrases in two separated line and I did it using a \n */
    return 0;
}