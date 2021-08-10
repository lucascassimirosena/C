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
        int c;
        int d;

        scanf("%d %d", &a, &b);
        c = a + b;
        d = a - b;
        printf("%d %d", c, d);

        return 0;
    }