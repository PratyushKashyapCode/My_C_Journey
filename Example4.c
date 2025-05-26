#include <stdio.h>

int main( )
{
    int n;
    printf("Enter a number:\n ");
    scanf("%d", &n);
    if(n>0)
    {
        n=n+n*n;
        printf("Positive:%d\n",n);
    }
    return 0;
}