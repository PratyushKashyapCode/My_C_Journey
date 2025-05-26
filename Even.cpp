/*#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number:\n";
    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "Entered number is even.";
    }
    std::cout << "\nEntered number is odd.";

    return 0;
}*/


/*#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number:\n";
    std::cin >> n;

    if (n % 2 == 0)
    {
        std::cout << "Entered number is even.\n";
    }
    else
    {
        std::cout << "Entered number is odd.\n";
    }

    return 0;
}*/


/*#include <iostream>

int main()
{
    float n;
    std::cout << "Enter a number:\n";
    std::cin >> n;

    if ((int)n == n)  // checks if it has no decimal part
    {
        int int_n = (int)n;

        if (int_n % 2 == 0)
        {
            std::cout << "Entered number is even.\n";
        }

        if (int_n % 2 == 1 || int_n % 2 == -1)
        {
            std::cout << "Entered number is odd.\n";
        }
    }
    else
    {
        std::cout << "The entered number is not an integer. Cannot check even/odd.\n";
    }

    return 0;
}// this code on entering any alphabetic character will not crash the program, it will just print the message that the Entered number is even.
*/

/*#include <iostream>  // for input and output using std::cin and std::cout

int main()
{
    float n;  // Declare a float variable to store any number — whole or decimal
    std::cout << "Enter a number to begin your journey:\n";

    std::cin >> n;  // Take input from the user

    // Check if the number is not whole (e.g., 3.14, 7.5)
    if ((int)n != n)
    {
        // If it's not a whole number, show poetic message
        std::cout << "You are a Mystic Float - unfit for the Even/Odd arena.\n";
        std::cout << "Only Whole Number Warriors may proceed to the Gate of Parity.\n";
    }

    // If the number *is* a whole number (i.e., integer part equals the float)
    if ((int)n == n)
    {
        int hero = (int)n;  // Convert to int to safely check parity

        std::cout << "You are a Whole Number Warrior.\n";

        // Check if it's even (divisible by 2)
        if (hero % 2 == 0)
        {
            std::cout << "You wield the Staff of Balance - you are Even.\n";
        }

        // Check if it's odd (remainder 1 or -1, depending on sign)
        if (hero % 2 == 1 || hero % 2 == -1)
        {
            std::cout << "You bear the Orb of Chaos - you are Odd.\n";
        }
    }

    return 0;  // Successful termination
}
*/



/*#include <iostream>      // for input/output
#include <limits>        // for std::numeric_limits

int main()
{
    int n;   // Variable to store the integer input
    char c;  // Variable to store the next character after the integer

    std::cout << "Enter a whole number:\n";

    // Try to read an integer, and also read the next character (possibly '\n')
    if (!(std::cin >> n) || std::cin.get(c) && c != '\n')
    {
        // If reading the integer failed (e.g., user typed letters or symbols)
        // OR if there are extra characters after the number (like "78abc")
        std::cout << "Invalid input.\n";
        std::cout << "Please enter a whole number without letters or decimal parts.\n";
        return 1;  // Exit with error code
    }

    // Now we know input is a clean whole number, check if it's even
    if (n % 2 == 0)
    {
        std::cout << "You entered " << n << " - it is even.\n";
    }
    else
    {
        std::cout << "You entered " << n << " - it is odd.\n";
    }

    return 0;  // Program finished successfully
}*/


/*#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    printf("You entered %d\n", n);
    return 0;
}*/


#include <cstdio>  // Use <cstdio> instead of <stdio.h> in C++

int main()
{
    int n;
    char c;

    printf("Enter a whole number:\n");

    // Input validation
    if (scanf("%d%c", &n, &c) != 2 || c != '\n')
    {
        printf("Invalid input.\n");
        printf("Please enter a whole number without letters or decimal parts.\n");
        return 1;
    }

    // Even or Odd check
    if (n % 2 == 0)
    {
        printf("You entered %d - it is even.\n", n);
    }
    else
    {
        printf("You entered %d - it is odd.\n", n);
    }

    return 0;
}
