/*
Your task is to take two numbers of int data type, two numbers of float data type as input 
and output their sum:

1. Declare 4 variables: two of type int and two of type float.

2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below)
 and initialize your 4 variables.

3. Use the + and - operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
*/

#include <stdio.h>

    int main()
    {
        int a;
        int b;
        float c;
        float d;

        scanf("%d %d %f %f", &a, &b, &c, &d);
        printf("%d %d\n%.1f %.1f", a+b, a-b, c+d, c-d);

        return 0;
    }

    //EXPLANATION
    /* First it was necessary to declare de variables (lines 19-22); then
    we use scanf() to scan the user's input from standard input. We need to tell the
    computer what kind of input we're scanning and that's why we need to use %d for int
    and %f for float. & will point to the value in the memory adress.

    moving forward on line 25 we print the first 2 values, press entre \n and then print the float 
    valus rounded to one decimal number, that's why we need to put .1.*/