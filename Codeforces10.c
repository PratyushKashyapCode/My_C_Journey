/*#include <stdio.h>

int main( )
{
    int A, B;
    scanf("%d %d", &A, &B);  // Read two integers
    if (A > B) {
        printf("Right\n");
    } else if (A < B) {
        printf("Wrong\n");
    } else {
        printf("Equal\n");
    }
    return 0;
}*/


#include <stdio.h>

int main() {
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);  // Read A, S, B

    if (S == '<') {
        if (A < B) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else if (S == '>') {
        if (A > B) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else if (S == '=') {
        if (A == B) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else {
        printf("Invalid symbol\n");  // Just in case input is not one of <, >, =
    }

    return 0;
}
