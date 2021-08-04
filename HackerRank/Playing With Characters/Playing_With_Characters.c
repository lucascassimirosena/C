/*

Task

You have to print the character, 'CH' , in the first line. Then print 'S' in next line. In the last line print the sentence, 'sen' .

Input Format

First, take a character,'CH' as input.
Then take the string,'S'as input.
Lastly, take the sentence 'SEN' as input.

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, . */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() //Working on this challenge yet
{

    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);

    char s[100];
    scanf("%s", s);
    printf("%s\n", s);

    char sen[100];
    scanf("%s", sen);
    printf("%s", sen);
    
    
    return 0;  printf("%s, sen");
    
}