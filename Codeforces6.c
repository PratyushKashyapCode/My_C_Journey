#include<stdio.h>

int main( )
{
    int N1, N2;
    scanf("%d %d", &N1, &N2);
    if(N1%N2==0 || N2%N1==0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }
    return 0;

}