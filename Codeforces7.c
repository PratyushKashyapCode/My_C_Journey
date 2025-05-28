#include<stdio.h>

int main( )
{
    char X;
    scanf(" %c", &X);  // Space before %c to ignore any previous newline or space

    if (X >= '0' && X <= '9')
     {
        printf("IS DIGIT\n");
    }
     else 
     {
        printf("ALPHA\n");
     
        if (X >= 'A' && X <= 'Z') 
        {
            printf("IS CAPITAL\n");
        }
         else if (X >= 'a' && X <= 'z') 
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}


