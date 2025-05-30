/*#include <stdio.h>

int main( )
{
    char ch;

    scanf(" %c", &ch);//Leaving a space before %c to ignore any whitespace characters. Since after compilation program goes to the buffer area in the RAM and waits for input  if we don't leave a space before %c,it will read the newline character from the buffer as input.
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    return 0;
}*/


/*#include <stdio.h>

int main( )
{
    char ch;

    scanf(" %c", &ch);//Leaving a space before %c to ignore any whitespace characters. Since after compilation program goes to the buffer area in the RAM and waits for input if we don't leave a space before %c,it will read the newline character from the buffer as input.
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    if (!(ch >= 'A' && ch <= 'Z'))
    {
        printf("Not Uppercase\n");
    }
    return 0;
}*/


/*#include <stdio.h>

int main() {
    char ch;
    int isUpper = 0; // Flag to track if it's uppercase. isUpper is an integer variable initialized to 0.We use it as a flag to indicate whether the character is uppercase or not.

    scanf(" %c", &ch);  // space before %c skips whitespace

    if (ch >= 'A') {
        if (ch <= 'Z') {
            isUpper = 1;  // it's uppercase
        }
    }

    if (isUpper) {
        printf("Uppercase\n");
    }

    if (!isUpper) {
        printf("Not Uppercase\n");
    }

    return 0;
}*/
/*Why use a flag?
Sometimes you want to check multiple conditions or do some processing before deciding what to print or do next.

Using a flag lets you store the result of a test (like “is this character uppercase?”) and then use that stored result later in the program.

This makes the code clearer and easier to read because your print statements depend on this flag, not the condition directly.*/


/*#include <stdio.h>

int main() {
    char ch;
    int isUpper = 0; // Flag: 1 = uppercase, 0 = not uppercase

    // Read character, skip any leading whitespace like \n or space
    scanf(" %c", &ch);

    // Check if character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        isUpper = 1;
    }

    // Print result based on the flag
    if (isUpper) // concept using: true/false
    {
        printf("Uppercase\n");
    } else 
    {
        printf("Not Uppercase\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    char ch;

    scanf(" %c", &ch);  // Skip leading whitespace

    // Use ternary operator to directly choose and print the message
    (ch >= 'A' && ch <= 'Z') ? printf("Uppercase\n") : printf("Not Uppercase\n");

    return 0;
}*/


/*#include <stdio.h>

int main()
 {
    char ch;

    printf("Enter a character: ");
    // Read a character, skipping any leading whitespace
    scanf(" %c", &ch);

    // Use ternary to print result
    (ch >= 'A' && ch <= 'Z') 
        ? printf("Uppercase\n") 
        : printf("Not Uppercase\n");

    return 0;
}*/


/*#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a character: ");

    scanf(" %c", &ch);

    // Print the ASCII value
    printf("ASCII value: %d\n", ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }

    // Separate condition to check for not-uppercase (i.e., fallback)
    if (!(ch >= 'A' && ch <= 'Z')) {
        printf("Not Uppercase\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    int num;          // To store numeric input like 65
    char ch;          // Will hold the character form

    printf("Enter an ASCII value : ");
    scanf("%d", &num);  // Read the number

    ch = (char)num;     // Convert number to character

    printf("Character: %c\n", ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Not Uppercase\n");
    }
   
    return 0;
}*/

/*#include <stdio.h>

int main( )
{
    char ch;
    scanf("%c", &ch);
    if (ch >=65 && ch<= 90)//here If you enter 65 then scanf("%c", &ch); reads only one character — in this case, it reads '6'. '6' is a character, and its ASCII value is 54. The condition ch >= 65 && ch <= 90 becomes 54 >= 65, which is false.
    {
        printf("Uppercase\n");
    }
    else 
    {
        printf("Not Uppercase\n");
    }
    return 0;
}*/


/*#include <stdio.h>

int main( )
{
    char ch;
    scanf("%c", &ch);
    if (ch >='A' && ch<= 'Z')// When you write 'A' and 'Z' in your code, the compiler automatically treats it as a character literal — which means it's the ASCII value of the character A, that is 65 and of Z is 90.
    {
        printf("Uppercase\n");
    }
    else 
    {
        printf("Not Uppercase\n");
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);  // space before %c to skip any leftover whitespace

    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n");
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special character or symbol\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);  // space before %c to skip any leftover whitespace

    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z')
 {
        printf("ASCII value: %d\n", ch);// ASCII value of the character since character type stores instructions in the form of ASCII values. Therfore use %d to print the ASCII value of the character.
        printf("Uppercase letter\n");
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z') 
    {
        printf("ASCII value: %d\n", ch);
        printf("Lowercase letter\n");
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        printf("ASCII value: %d\n", ch);
        printf("Digit\n");
    }
    else {
        printf("ASCII value: %d\n", ch);
        printf("Special character or symbol\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);  // space before %c to skip any leftover whitespace
    printf("ASCII value: %d\n", ch);
    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("Uppercase letter\n");
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z')
  {
        printf("Lowercase letter\n");
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') 
    {
        printf("Digit\n");
    }
    else 
    {
        printf("Special character or symbol\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    char ch;
    int flag;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    // Step 1: categorize using if-else and assign flag
    if (ch >= 'A' && ch <= 'Z') {
        flag = 1;  // uppercase
    }
    else if (ch >= 'a' && ch <= 'z') {
        flag = 2;  // lowercase
    }
    else if (ch >= '0' && ch <= '9') {
        flag = 3;  // digit
    }
    else {
        flag = 4;  // special character or symbol
    }

    // Step 2: use switch on the flag
    switch (flag) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Special character or symbol\n");
            break;
        default:
            printf("Unknown category\n");
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    char ch;
    int flag;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    // Step 1: categorize using if-else and assign flag
    if (ch >= 'A' && ch <= 'Z') //Note: Switch statements are not used for boolean expressions, but rather for discrete values. That's why we categorize the character first and then use a switch statement.
    {

        flag = 1;  // uppercase
    }
    else if (ch >= 'a' && ch <= 'z')
  {
        flag = 2;  // lowercase
    }
    else if (ch >= '0' && ch <= '9') 
    {
        flag = 3;  // digit
    }
    else 
    {
        flag = 4;  // special character or symbol
    }

    // Step 2: use switch on the flag
    switch (flag) 
    {
        case 1:
            printf("Uppercase letter\n");
            printf("ASCII value: %d\n", ch);
            break;
        case 2:
            printf("Lowercase letter\n");
            printf("ASCII value: %d\n", ch);
            break;
        case 3:
            printf("Digit\n");
            printf("ASCII value: %d\n", ch);
            break;
        case 4:
            printf("Special character or symbol\n");
            printf("ASCII value: %d\n", ch);
            break;
        default:
            printf("Unknown category\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    printf("\nCharacter Entered: %c\n", ch);
    printf("ASCII Value       : %d\n", ch);

    switch (ch) {
        // A few uppercase letters
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
            printf("Category          : Uppercase Letter\n");
            break;

        // A few lowercase letters
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
            printf("Category          : Lowercase Letter\n");
            break;

        // A few digits
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
            printf("Category          : Digit\n");
            break;

        default:
            // Use if-else inside default to cover remaining types
            if (ch >= 'A' && ch <= 'Z')
                printf("Category          : Uppercase Letter (not explicitly listed)\n");
            else if (ch >= 'a' && ch <= 'z')
                printf("Category          : Lowercase Letter (not explicitly listed)\n");
            else if (ch >= '0' && ch <= '9')
                printf("Category          : Digit (not explicitly listed)\n");
            else
                printf("Category          : Special character or symbol\n");
    }

    return 0;
}*/
/* This code demonstrates how to use a switch statement for a few specific cases and then fall back to if-else for the rest.
   It allows you to categorize characters while still providing flexibility for additional characters not explicitly listed. */


   /*#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);
    (ch >= 'A' && ch <= 'Z') ? printf("Uppercase\n") :
    (ch >= 'a' && ch <= 'z') ? printf("Lowercase\n") :
    (ch >= '0' && ch <= '9') ? printf("Digit\n") :
    printf("Special character\n");
    return 0;
}*/


/*#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);
    (ch >= 'A' && ch <= 'Z') ? printf("Uppercase, ASCII: %d\n", ch) :
    (ch >= 'a' && ch <= 'z') ? printf("Lowercase, ASCII: %d\n", ch) :
    (ch >= '0' && ch <= '9') ? printf("Digit, ASCII: %d\n", ch) :
    printf("Special character, ASCII: %d\n", ch);
    return 0;
}*/
/* This code checks if the character is uppercase, lowercase, a digit, or a special character, and prints the corresponding message along with its ASCII value. */


#include <stdio.h>
#include <ctype.h> // It’s a standard C library that provides functions to check character types and to convert characters.It makes your code cleaner & easier instead of manually checking ASCII ranges.

int main() {
    char ch;
    scanf(" %c", &ch);
    if (isupper(ch)) printf("Uppercase\n");
    else if (islower(ch)) printf("Lowercase\n");
    else if (isdigit(ch)) printf("Digit\n");
    else printf("Special character\n");
    return 0;
}

/* This code uses the isupper, islower, and isdigit functions from the ctype.h library to check the character type.
   It simplifies the code and makes it more readable by avoiding manual ASCII range checks. isupper(ch)	Checks if ch is uppercase letter	Non-zero (true) if yes
islower(ch)	Checks if ch is lowercase letter	Non-zero (true) if yes
isdigit(ch)	Checks if ch is a digit (0-9)	Non-zero (true) if yes*/
