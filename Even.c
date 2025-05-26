/*#include <stdio.h>

int main() 
{
    int n, i;
    int isEven = 1; // Assume the number is even

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is even
    if (n % 2 != 0) {
        isEven = 0; // If n is odd, set isEven to 0
    }

    if (isEven) {
        printf("%d is an even number.\n", n);
    } else {
        printf("%d is an odd number.\n", n);
    }

    return 0;

}*/


/*#include <stdio.h>

int main( )
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Entered number is even.");
    }
    printf("\nEntered number is odd.");
return 0;
//printf("\nEntered number is odd.");

}*/


/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Entered number is even.\n");
    }

    if (n % 2 != 0)
    {
        printf("Entered number is odd.\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Entered number is even.\n");
    }

    if (n % 2 == 1 || n % 2 == -1) // Handles negative odd numbers as well
    {
        printf("Entered number is odd.\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%f", &n);

    if (n % 2 == 0)
    {
        printf("Entered number is even.\n");
    }

    if (n % 2 == 1 || n % 2 == -1) // Handles negative odd numbers as well
    {
        printf("Entered number is odd.\n");
    }

    return 0;
*/

/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%f", &n);

    if ((int)n == n) // check if n is a whole number
    {
        int int_n = (int)n;

        if (int_n % 2 == 0)
        {
            printf("Entered number is even.\n");
        }

        if (int_n % 2 == 1 || int_n % 2 == -1)
        {
            printf("Entered number is odd.\n");
        }
    }
    else
    {
        printf("The entered number is not an integer. Cannot check even/odd.\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%f", &n);

    if ((int)n == n) // it's a whole number
    {
        int int_n = (int)n;

        if (int_n % 2 == 0)
        {
            printf("Entered number is even.\n");
        }

        if (int_n % 2 == 1 || int_n % 2 == -1)
        {
            printf("Entered number is odd.\n");
        }
    }

    if ((int)n != n) // it's not a whole number
    {
        printf("The entered number is not an integer. Cannot check even/odd.\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%f", &n);

    // The number wants to be understood — but is it stable?
    if ((int)n != n)
    {
        printf("You are a fluid number - not bound to integers.\n");
    }

    // Now, the number claims to be whole — we must test its nature
    if ((int)n == n)
    {
        int whole = (int)n;

        // Is it divisible — does it divide evenly in half?
        if (whole % 2 == 0)
        {
            printf("You are harmonious and balanced - even.\n");
        }

        if (whole % 2 == 1 || whole % 2 == -1)
        {
            printf("You are asymmetrical - odd.\n");
        }
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number to begin your journey:\n");
    scanf("%f", &n);

    // First, we test if the number is a whole number — can it wield integer magic?
    if ((int)n != n)
    {
        printf("⚠️  You are a Mystic Float — unfit for the Even/Odd arena.\n");
        printf("🔒 Only Whole Number Warriors may proceed to the Gate of Parity.\n");
    }

    // If the number is a whole, then we test its inner nature — even or odd
    if ((int)n == n)
    {
        int hero = (int)n;

        printf("✅ You are a Whole Number Warrior.\n");

        if (hero % 2 == 0)
        {
            printf("🧝‍♂️ You wield the Staff of Balance — you are Even.\n");
        }

        if (hero % 2 == 1 || hero % 2 == -1)
        {
            printf("🧙‍♀️ You bear the Orb of Chaos — you are Odd.\n");
        }
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter the crew member's ID number:\n");
    scanf("%f", &n);

    // Check if the ID number is whole — fractional IDs are invalid for missions
    if ((int)n != n)
    {
        printf("🚨 Alert! ID number contains unknown quantum fluctuations — invalid for classification.\n");
        printf("🔒 Only whole number IDs can be processed.\n");
    }

    // If ID is whole, proceed with classification
    if ((int)n == n)
    {
        int crewID = (int)n;

        printf("🛰️ Crew ID accepted.\n");

        if (crewID % 2 == 0)
        {
            printf("⚙️ Assigned role: Engineer (Even Squad)\n");
        }

        if (crewID % 2 == 1 || crewID % 2 == -1)
        {
            printf("🛡️ Assigned role: Security Officer (Odd Squad)\n");
        }
    }

    return 0;
}*/



/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Entered number is even.\n");
    }
    else
    {
        printf("Entered number is odd.\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float n;
    printf("Enter a number:\n");
    scanf("%f", &n);

    if ((int)n != n)
    {
        printf("The entered number is not an integer. Cannot check even/odd.\n");
    }
    else
    {
        int int_n = (int)n;

        if (int_n % 2 == 0)
        {
            printf("Entered number is even.\n");
        }
        else
        {
            printf("Entered number is odd.\n");
        }
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
    }
    else
    {
        if (n % 2 == 0)
        {
            printf("Entered number is even.\n");
        }
        else
        {
            printf("Entered number is odd.\n");
        }
    }

    return 0;
}*/


#include <stdio.h>

int main()
{
    int n;
    char c;

    printf("Enter a whole number:\n");

    // Input validation: ensure it's a valid integer with nothing extra
    if (scanf("%d%c", &n, &c) != 2 || c != '\n')
    {
        printf("Invalid input.\n");
        printf("Please enter a whole number without letters or decimal parts.\n");
        return 1;
    }

    // Parity check
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


