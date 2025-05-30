/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cin >> ch; // No need to worry about leading whitespace unless you're reading multiple characters

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;// endl: Prints a newline (\n), Flushes the output buffer, Output appears immediately
    }

    return 0;
}*/
/* This code reads a character from standard input and checks if it is an uppercase letter (between 'A' and 'Z').
   If it is, it prints "Uppercase". The code uses the C++ standard library for input/output. */
/*#include <stdio.h> → #include <iostream>

scanf(" %c", &ch); → cin >> ch;
In C++, cin automatically skips whitespace (spaces, tabs, newlines) when using >>, so the extra space isn't needed like in scanf(" %c", ...).

printf(...) → cout << ...*/

/*after you type something and press Enter, your input (like a character) first goes into a memory area called the buffer — specifically, the input buffer of the standard input stream (stdin).*/

/*Step-by-step input flow (when you use scanf(" %c", &ch);):
You type A then press Enter.

The OS puts the input (e.g., A\n) into an input buffer in memory (RAM).

scanf(" %c", &ch); reads one character, but because of the space before %c, it skips whitespace characters like ' ' and '\n'.

ch gets the value 'A', and the remaining characters (if any) stay in the buffer until read.*/


/*#include <iostream>

int main() {
    char ch;

    std::cin >> ch;  // Automatically skips whitespace (unlike scanf)

    if (ch >= 'A' && ch <= 'Z') {
        std::cout << "Uppercase\n";
    }
    if (!(ch >= 'A' && ch <= 'Z')) {
        std::cout << "Not Uppercase\n";
    }

    return 0;
}*/
/*std::cin automatically skips whitespace, so no need for the leading space like in " %c".

std::cout is used for printing output.

You can also use using namespace std; to avoid typing std::, but it's better style to keep it, especially as you grow in C++.*/


/*#include <iostream>

int main() 
{
    char ch;
    int isUpper = 0; // Flag to track if it's uppercase

    std::cin >> ch;  // Automatically skips whitespace

    if (ch >= 'A') {
        if (ch <= 'Z') {
            isUpper = 1;  // it's uppercase
        }
    }

    if (isUpper) {
        std::cout << "Uppercase\n";
    }

    if (!isUpper) {
        std::cout << "Not Uppercase\n";
    }

    return 0;
}*/

     // Flag to track if it's uppercase. isUpper is an integer variable initialized to 0.We use it as a flag to indicate whether the character is uppercase or not.

     // space before %c skips whitespace

/*Why use a flag?
Sometimes you want to check multiple conditions or do some processing before deciding what to print or do next.

Using a flag lets you store the result of a test (like “is this character uppercase?”) and then use that stored result later in the program.

This makes the code clearer and easier to read because your print statements depend on this flag, not the condition directly.*/


/*#include <iostream>

int main() {
    char ch;
    int isUpper = 0; // Flag: 1 = uppercase, 0 = not uppercase

    // Read character (cin automatically skips whitespace)
    std::cin >> ch;

    // Check if character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        isUpper = 1;
    }

    // Print result based on the flag
    if (isUpper) {
        std::cout << "Uppercase\n";
    } else {
        std::cout << "Not Uppercase\n";
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cin >> ch;  // Automatically skips leading whitespace for non-whitespace format specifiers

    // Ternary operator to check uppercase and print
    (ch >= 'A' && ch <= 'Z') ? cout << "Uppercase\n" : cout << "Not Uppercase\n";

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;  // Automatically skips leading whitespace

    // Use ternary operator to print result
    (ch >= 'A' && ch <= 'Z') 
        ? cout << "Uppercase\n" 
        : cout << "Not Uppercase\n";

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() 
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;  // Automatically skips leading whitespace

    // Print the ASCII value
    cout << "ASCII value: " << static_cast<int>(ch) << endl;

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    }

    // Separate condition to check for not-uppercase (i.e., fallback)
    if (!(ch >= 'A' && ch <= 'Z')) {
        cout << "Not Uppercase" << endl;
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


/*#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin >> ch;  // Reads a single character

    // Check using ASCII range (65 to 90 for uppercase letters)
    if (ch >= 65 && ch <= 90) {
        cout << "Uppercase" << endl;
    } else {
        cout << "Not Uppercase" << endl;
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else {
        cout << "Not Uppercase" << endl;
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a single character: ";
    cin >> ch;

    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter" << endl;
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter" << endl;
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    }
    else {
        cout << "Special character or symbol" << endl;
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a single character: ";
    cin >> ch;  // No need to skip whitespace manually with cin >> ch

    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        cout << "ASCII value: " << static_cast<int>(ch) << endl;
        cout << "Uppercase letter" << endl;
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        cout << "ASCII value: " << static_cast<int>(ch) << endl;
        cout << "Lowercase letter" << endl;
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        cout << "ASCII value: " << static_cast<int>(ch) << endl;
        cout << "Digit" << endl;
    }
    else {
        cout << "ASCII value: " << static_cast<int>(ch) << endl;
        cout << "Special character or symbol" << endl;
    }

    return 0;
}*/
/*static_cast<int>(ch) is used to print the ASCII value of the character in C++.

cout and cin are used for output/input respectively.

No need for a space before cin >> ch, as cin automatically skips leading whitespace for basic types like char.*/


/*#include <iostream>
using namespace std;

int main() 
{
    char ch;

    cout << "Enter a single character: ";
    cin >> ch;  // Automatically skips leading whitespace

    // Print ASCII value
    cout << "ASCII value: " << static_cast<int>(ch) << endl;// static_cast<int>(ch) is used to print ASCII value correctly in C++

    // Check if uppercase letter
    if (ch >= 'A' && ch <= 'Z') 
    {
        cout << "Uppercase letter" << endl;
    }
    // Check if lowercase letter
    else if (ch >= 'a' && ch <= 'z') 
    {
        cout << "Lowercase letter" << endl;
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') 
    {
        cout << "Digit" << endl;
    }
    else 
    {
        cout << "Special character or symbol" << endl;
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;
    int flag;

    cout << "Enter a single character: ";
    cin >> ch;

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
            cout << "Uppercase letter" << endl;//Used endl instead of \n for line breaks (C++ style)
            break;
        case 2:
            cout << "Lowercase letter" << endl;
            break;
        case 3:
            cout << "Digit" << endl;
            break;
        case 4:
            cout << "Special character or symbol" << endl;
            break;
        default:
            cout << "Unknown category" << endl;
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;
    int flag;

    cout << "Enter a single character: ";
    cin >> ch;

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
            cout << "Uppercase letter" << endl;
            cout << "ASCII value: " << static_cast<int>(ch) << endl;
            break;
        case 2:
            cout << "Lowercase letter" << endl;
            cout << "ASCII value: " << static_cast<int>(ch) << endl;
            break;
        case 3:
            cout << "Digit" << endl;
            cout << "ASCII value: " << static_cast<int>(ch) << endl;
            break;
        case 4:
            cout << "Special character or symbol" << endl;
            cout << "ASCII value: " << static_cast<int>(ch) << endl;
            break;
        default:
            cout << "Unknown category" << endl;
    }

    return 0;
}*/
/*#include <stdio.h> → #include <iostream>

printf(...) → cout << ...

scanf(...) → cin >> ...

ASCII value printed using static_cast<int>(ch) to convert char to its integer (ASCII) representation in C++ style.*/



/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a single character: ";
    cin >> ch;

    cout << "\nCharacter Entered: " << ch << endl;
    cout << "ASCII Value       : " << static_cast<int>(ch) << endl;

    switch (ch) {
        // A few uppercase letters
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
            cout << "Category          : Uppercase Letter" << endl;
            break;

        // A few lowercase letters
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
            cout << "Category          : Lowercase Letter" << endl;
            break;

        // A few digits
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
            cout << "Category          : Digit" << endl;
            break;

        default:
            // Use if-else inside default to cover remaining types
            if (ch >= 'A' && ch <= 'Z')
                cout << "Category          : Uppercase Letter (not explicitly listed)" << endl;
            else if (ch >= 'a' && ch <= 'z')
                cout << "Category          : Lowercase Letter (not explicitly listed)" << endl;
            else if (ch >= '0' && ch <= '9')
                cout << "Category          : Digit (not explicitly listed)" << endl;
            else
                cout << "Category          : Special character or symbol" << endl;
    }

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    (ch >= 'A' && ch <= 'Z') ? cout << "Uppercase\n" :
    (ch >= 'a' && ch <= 'z') ? cout << "Lowercase\n" :
    (ch >= '0' && ch <= '9') ? cout << "Digit\n" :
    cout << "Special character\n";

    return 0;
}*/


/*
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    (ch >= 'A' && ch <= 'Z') ? cout << "Uppercase, ASCII: " << int(ch) << "\n" :
    (ch >= 'a' && ch <= 'z') ? cout << "Lowercase, ASCII: " << int(ch) << "\n" :
    (ch >= '0' && ch <= '9') ? cout << "Digit, ASCII: " << int(ch) << "\n" :
    cout << "Special character, ASCII: " << int(ch) << "\n";

    return 0;
}*/
/* This code checks if the character is uppercase, lowercase, a digit, or a special character, and prints the corresponding message along with its ASCII value. */

#include <iostream>
#include <cctype>  // For isupper, islower, isdigit

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isupper(ch))
        cout << "Uppercase\n";
    else if (islower(ch))
        cout << "Lowercase\n";
    else if (isdigit(ch))
        cout << "Digit\n";
    else
        cout << "Special character\n";

    return 0;
}
/* This code uses the isupper, islower, and isdigit functions from the ctype.h library to check the character type.
   It simplifies the code and makes it more readable by avoiding manual ASCII range checks. isupper(ch)	Checks if ch is uppercase letter	Non-zero (true) if yes
islower(ch)	Checks if ch is lowercase letter	Non-zero (true) if yes
isdigit(ch)	Checks if ch is a digit (0-9)	Non-zero (true) if yes*/
