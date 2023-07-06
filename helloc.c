/*Function Descriptio

Complete the main() function below.

The main() function has the following input:

string s: a string
Prints

*two strings: * "Hello, World!" on one line and the input string on the next line.
Input Format

There is one line of text, .

Sample Input 0

Welcome to C programming.
Sample Output 0

Hello, World!
Welcome to C programming.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf(s);
  	return 0;
}
