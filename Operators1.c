/*#include <stdio.h>

int main( )
{

float price = 99.99;
int quantity = 3;
float totalPrice = price * quantity; // Calculate total price

printf("Total price: %.2f\n", totalPrice);

}*/

/*#include <stdio.h>

int main()
{
    int totalSeconds = 3600; // 1 hour in seconds
int minutes = totalSeconds / 60; // 60 seconds in a minute
int seconds = totalSeconds % 60; // Remainder gives the leftover seconds

printf("Time: %d minutes and %d seconds\n", minutes, seconds);

}*/

/*#include <stdio.h>
int main()
{

int score = 0;  // Initialize score

score += 10;  // Add 10 points to the score
score *= 2;   // Double the score

printf("Final score: %d\n", score);
}*/


/*#include <stdio.h>
int main()
{
int age = 12;

if (age >= 18) {
    printf("Eligible for voting.\n");
} else {
    printf("Not eligible for voting.\n");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int isUserLoggedIn = 1;  // 1 means true
int hasValidSession = 0;  // 0 means false

if (isUserLoggedIn && hasValidSession) {
    printf("Access granted.\n");
} else {
    printf("Access denied.\n");
}
return 0;
}*/


/*#include <stdio.h>
int main()
{
int features = 0b00000000;  // All features off
int FEATURE_FLAG = 0b00001000; // Bit to represent a feature

features |= FEATURE_FLAG;  // Set the feature flag on

printf("Feature enabled: %d\n", (features & FEATURE_FLAG) != 0);

return 0;
}*/


/*#include <stdio.h>
int main()
{

for (int i = 0; i < 10; i++)
 {
    printf("%d ", i);  // Prints numbers 0 to 9
   
 }
return 0;
}*/


/*#include <stdio.h>
int main()
{

int score = 40;
char* result = (score >= 50) ? "Pass" : "Fail";
printf("Result: %s\n", result);
return 0;

}*/


/*#include <stdio.h>

int main( )
{
int integer = 75.87655;
float floatingPoint = integer;  // Implicit casting from int to float

printf("Implicit cast value: %.2f\n", floatingPoint);  // Outputs: 7.00
return 0;
}*/


/*#include <stdio.h>

int main( )
{
float pi = 3i677;
int intPi = (int)pi;  // Explicit casting from float to int

printf("Explicit cast value: %d\n", intPi);  // Outputs: 3

}*/


/*#include <stdio.h>

int main( )
{
int num = 17;
float decimal = 3.14;
char character = 'A';
double largeDecimal = 2.718281828459;
int* ptr = &num;  // Store the address of num in ptr
float* fptr = &decimal;  // Store the address of decimal in fptr
char* cptr = &character;  // Store the address of character in cptr
//Here I didn't use the address operator '&' for largeDecimal because it is already a pointer
// and I am using it to store the address of largeDecimal
printf("Address of decimal: %p\n", fptr);  // Outputs the memory address of decimal
printf("Address of character: %p\n", cptr);  // Outputs the memory address of character
printf("Address of largeDecimal: %p\n", &largeDecimal);  // Outputs the memory address of largeDecimal
printf("Address of num: %p\n", ptr);  // Outputs the memory address of num
return 0;

}*/


/*#include <stdio.h>

int main( )
{
int num = 17;
float decimal = 3.14;
char character = 'A';
double largeDecimal = 2.718281828459;
int* ptr = &num;  // Store the address of num in ptr
float* fptr = &decimal;  // Store the address of decimal in fptr
char* cptr = &character;  // Store the address of character in cptr
double* dptr = &largeDecimal;  // Store the address of largeDecimal in dptr
printf("Address of decimal: %p\n", fptr);  // Outputs the memory address of decimal
printf("Address of character: %p\n", cptr);  // Outputs the memory address of character
printf("Address of largeDecimal: %p\n", &largeDecimal);  // Outputs the memory address of largeDecimal
printf("Address of num: %p\n", ptr);  // Outputs the memory address of num
return 0;

}*/


/*#include <stdio.h>

int main( )
{
int num = 10;
int* ptr = &num;  // Store the address of num

printf("Value at pointer: %d\n", *ptr);  // Dereference pointer to get value of num
return 0;
}*/


/*#include <stdio.h>

void updateValue(int* p) {
    *p = *p + 5;  // Modify the value at the address
}

int main() {
    int x = 10;
    updateValue(&x);  // Pass address of x
    printf("Updated x: %d\n", x);  // Output: 15
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int a = 42;
    int* ptrA = &a;

    printf("Address of a: %p\n", &a);    // Using &
    printf("Address stored in ptrA: %p\n", ptrA);  // Should match above
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int value = 100;
    int* p = &value;

    *p = 200;  // Dereference and change the value
    printf("New value: %d\n", value);  // Output: 200
    return 0;
}*/#include <stdio.h>

/*int main() {
    int arr[] = {10, 20, 30};
    int* p = arr;  // Equivalent to &arr[0]

    printf("First: %d\n", *p);       // 10
    printf("Second: %d\n", *(p + 1));  // 20
    printf("Third: %d\n", *(p + 2));   // 30
    return 0;
}*/


/*#include <stdio.h>

int main( )
{
 
 int x, y;
 x = (y = 10, y + 5);  // Assign 10 to y, then x = 15 (y + 5)

 printf("x = %d, y = %d\n", x, y);  // Outputs: x = 15, y = 10

}*/


/*#include <stdio.h>

int main( )
{
 int a = 5;
 typeof(a) b = 10;  // b is of type int
 printf("%d\n", b);
 return 0;
}*/

/*#include <stdio.h>

int main()
{
    double pi = 3.14;
    typeof(pi) approx = 22.0 / 7;
    printf("%lf\n", approx);
    return 0;
}*/


/*#include <stdio.h>

int main( )
{
typeof(3.14) piCopy = 22.0 / 7;  // typeof(3.14) is double
printf("%lf\n", piCopy);

}*/


/*# include <stdio.h> THIS WHOLE CODE IS WRONG FOLLOW TO THE NEXT CODE WHICH IS CORRECT.

int main()
{
    #define SWAP(x, y) do 
    {           
    typeof(x) temp = x;           
    x = y;                        
    y = temp;                     
   } 
    while (0)

    int a = 10, b = 20;
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);

}*/


#include <stdio.h>

// Correctly define the SWAP macro using backslashes for line continuation
#define SWAP(x, y) do {            \
    typeof(x) temp = x;            \
    x = y;                         \
    y = temp;                      \
} while (0)

int main()
{
    int a = 10, b = 20;
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}








