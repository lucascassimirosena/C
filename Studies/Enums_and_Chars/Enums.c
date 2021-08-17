/* 
A data type that allows a programmer to define a variable and specify the valid 
values that could be stored into that variable.
   - can create a variable named "myColor" and it can only contain one of the primary colors, red, 
    or blue, and no other values

Firts, it's necessary to define an Enum type and give it a name.
   - initiated by the keyword enum
   - then the name of the enumarated data
   - then list of identifiers (enclosed in a set of curly braces) that define the permissible values 
    that can be assigned to the type
*/

enum primaryColor { red, yellow, blue};
/*variables declared to be of this data type can be assigned the values
red, yellow, or blue inside the program, andno other values.

to declare a variable to be of type enum primaryColor
    - Use the keyword Enum
    - followed by the enumerated data type
    - followed by the variable list. The statement.
*/

enum primaryColor myColor, DanisColor;
/* this defines the two variables myColor and DanisColor to be of type priamryColor
    - The only permissible values that can be assinged to these variables are the names red,
    yellow, and blue.
    myColor = red;
*/

myColor = red;
/* the compiler treats enumeration identifiers as intergers constants
    - first name in list is 0. */

enum direction {up, down, left = 10, right};
/* In this case:

up = 0
down = 1
left = 10 this happens because we explicity told the compiler that left = 10.
right = 11 */

/* ****** Char *******
    - Chars represent a sinle character such as the letter 'a', the digit '7', or a semicolon (';')
    - Character literals use single quotes such as 'A 'or 'Z'

You can also declare char variables to be unsigned
    - can be used to explicitly tell the compiler that a particular variable is signed quantity 
*/
char colombo = 'L';

/* ***** ESCAPE CHARACTERS ****

\a - Alert (ANSI C)
\b - Backspace
\f - From feed
\n - Newline
\r - Carriage return
\t - Horizontal tab
\v - Vertical tab
\\ - Backslash (\)
\' - Single quote (')
\" - Double quote (")
\? - Question mark (?)
\0oo - Octal value.
\xhh - Hexadecimal value.
*/