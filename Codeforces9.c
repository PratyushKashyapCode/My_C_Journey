#include<stdio.h>

int main( )
{
    double X;
    scanf("%lf", &X);  // Read a double value
    if(X >=0.00 && X<=25.00)
    {
        printf("Interval [0,25]\n");
    }
    else if(X > 25.00 && X <= 50.00)
    {
        printf("Interval (25,50]\n");
    }
    else if(X > 50.00 && X <= 75.00)
    {
        printf("Interval (50,75]\n");
    }
    else if(X > 75.00 && X <= 100.00)
    {
        printf("Interval (75,100]\n");
    }
    else
    {
        printf("Out of Intervals\n");
    }

}