/*
A program needs to store the instructions of its program and the data that it acts upn while your computer
is executing that program.

- This information is stored in memory (RAM)
- RAM's content are lost when the computer is turned of.
- Hard drives store persistent data.

You can think of RAM as an ordered squence of boxes.

- The box is full when it represents 1 and the box is empty when it represents 0.
- Each box represents a binary digit, either 0 or 1 (true or false)

Bits in memory are grouped into sets of digits (byte)

- Each byte has been labeled with a number (adress)
- the adress of a byte uniquely references that byte in your computer's memory.

So... in short, memory consists of a large number of bits that are grouped in 8(bytes) and has an 
unique address.

Variables are the names you give to computer memory locations which are used to store values in a 
computer program and as the name suggests, the value it represents is going to change, differntly from 
Constants that are... you know, constants, they're going to hold the same value forever. 

In C, all the names must begin with a letter or underscore and can be followed by numbers.

Declaring a variable is when you specify the type of the variable followed by the variable name.
C requires that all program variables be declared before they're used in a program.*/

#include <stdio.h>

int main()
{
    int lucas; //Declared a variable
    float x = 10.21;
    double xd = 10.24165465450+11;
    _Bool boolVariable = 1;
    
    lucas = 28; //Initialized the variable, I assigned the value 28 to the variable lucas.
    return 0;
}

/* the difference between the types is in the amount of memory they occupy and the range of values tehy can hold.

*********** int *********** 
- stores integral values only (not decimals)
- a minus sign preceding the data type and variable indicates that the value is negative
- it can be either a positive number, negative number or 0.
- if an interger is preceded by a zzero and the letter x (either lowercase or uppercase),
the value is taken as being expressed in hexadecimal (base 16) notatio:
        int rgbColor = 0xFFEF0D;
- It's not possible to express numbers larger than 999 using commas (15,000 must be written as 15000)

*********** float *********** 
- A variable to be of type float can be used for storing floating-point numbers(values containing deci
mal places)

*********** double *********** 
- it's similar but larger than float
- used whenever the range provided by a float variable is not sufficient
- can store twice as many signifcant digits
- most computers represent double values using 64 bits.

*********** _Bool *********** 
- used for indicating an on/off, or true/false.
- 0 indicates a false value and 1 indicates a true value
*/