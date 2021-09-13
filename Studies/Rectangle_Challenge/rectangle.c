/*  RECTANGLE CHALLENGE

- In this challenge, you are to creat a program in C that displays the perimeter and area of a rectangle.

- The program should create 4 variables of type double
    - one variable to store the width of the rectangle
    - one variable to store the height of the rectangle
    - one variable to store the perimeter of the rectangle
    - one variable to store the area of the rectangle

*/

#include <stdio.h>

int main ()
{
double width;
double height;
double perimeter;
double area;

width = 5;
height = 10;
perimeter = 2 * (width + height);
area = width + height;

printf("The perimeter of the rectangle is %e\n and the area is %e.", perimeter, area);

return 0;



}
