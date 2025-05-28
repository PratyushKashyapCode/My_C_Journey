#include <stdio.h>

int main( )
{
    char X;
    scanf(" %c", &X);  // Space before %c to ignore any previous newline or space
    if (X >= 'A' && X <= 'Z') 
    {
        char Y = X + 32; // Convert to lowercase
        printf("%c\n",Y);
    } 
    else if (X >= 'a' && X <= 'z') 
    {
        char Y = X - 32; // Convert to uppercase
        printf("%c\n",Y);
    } 
    else 
    {
        printf("INVALID INPUT\n");
    }

}