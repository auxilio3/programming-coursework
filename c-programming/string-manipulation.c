/* ****************************************************
   Program  : 2, String Manipulation and Math Functions
              This program demonstrates character arrays, math functions,
              character analysis, and string manipulation
   Date     : October 2025
   ****************************************************
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Macros for MIN and MAX */
#define MIN(a,b)((a) < (b) ? (a) : (b))
#define MAX(a,b)((a) > (b) ? (a) : (b))

/* Function prototypes */
void processAbsoluteValues(int i, int j, double x, double y);
void processRoundValues(int i, int j, double x, double y);
void processCeilingValues(int i, int j, double x, double y);
void processFlooringValues(int i, int j, double x, double y);
void processMinimumValues(int i, int j, double x, double y);
void processMaximumValues(int i, int j, double x, double y);
void processTrigFunctionsValues(int i, int j, double x, double y);
void processExponentialValues(int i, int j, double x, double y);
void processLogValues(int i, int j, double x, double y);
void processPowerValues(int i, int j, double x, double y);
void processSquareRootsValues(int i, int j, double x, double y);
void processRandomValues(int i, int j, double x, double y);
void myName(char name[]);
void pyramid(char name[]);
void parsing(char name[]);

/* Function: processAbsoluteValues
    Purpose: Demonstrates absolute value function
*/
void processAbsoluteValues(int i, int j, double x, double y)
{
    printf("\n=== ABSOLUTE VALUES ===\n");
    printf("abs(%d) = %d\n", i, abs(i));
    printf("abs(%d) = %d\n", j, abs(j));
    printf("fabs(%.2f) = %.2f\n", x, fabs(x));
    printf("fabs(%.2f) = %.2f\n", y, fabs(y));
}

/* Function: processRoundValues
    Purpose: Demonstrates rounding function
*/
void processRoundValues(int i, int j, double x, double y)
{
    printf("\n=== ROUND VALUES ===\n");
    printf("round(%d) = %d\n", i, i);
    printf("round(%d) = %d\n", j, j);
    printf("round(%.2f) = %.0f\n", x, round(x));
    printf("round(%.2f) = %.0f\n", y, round(y));
}

/* Function: processCeilingValues
    Purpose: Demonstrate ceiling function (rounds up)
*/
void processCeilingValues(int i, int j, double x, double y)
{
    printf("\n=== CEILING VALUES ===\n");
    printf("ceil(%d) = %d\n", i, i);
    printf("ceil(%d) = %d\n", j, j);
    printf("ceil(%.2f) = %.0f\n", x, ceil(x));
    printf("ceil(%.2f) = %.0f\n", y, ceil(y));
}

/* Function: processFlooringValues
    Purpose: Demonstrates floor function (rounds down)
*/
void processFlooringValues(int i, int j, double x, double y)
{
    printf("\n=== FLOOR VALUES ===\n");
    printf("floor(%d) = %d\n", i, i);
    printf("floor(%d) = %d\n", j, j);
    printf("floor(%.2f) = %.0f\n", x, floor(x));
    printf("floor(%.2f) = %.0f\n", y, floor(y));
}

/* Function: processMinimumValues
    Purpose: Demonstrates minimum value function using MIN macro
*/
void processMinimumValues(int i, int j, double x, double y)
{
    printf("\n=== MINIMUM VALUES ===\n");
    printf("MIN(%d, %d) = %d\n", i, j, MIN(i, j));
    printf("MIN(%.2f, %.2f) = %.2f\n", x, y, MIN(x, y));
}

/* Function: processMaximumValues
    Purpose: Demonstrates maximum value using MAX macro
*/
void processMaximumValues(int i, int j, double x, double y)
{
    printf("\n=== MAXIMUM VALUES ===\n");
    printf("MAX(%d, %d) = %d\n", i, j, MAX(i, j));
    printf("MAX(%.2f, %.2f) = %.2f\n", x, y, MAX(x, y));
}

/* Function: processTrigFunctionsValues
    Purpose: Demonstrates trigonometric functions (cos, sin, tan)
*/
void processTrigFunctionsValues(int i, int j, double x, double y)
{
    printf("\n=== TRIGONOMETRIC FUNCTIONS ===\n");
    printf("cos(%d) = %.4f\n", i, cos(i));
    printf("sin(%d) = %.4f\n", i, sin(i));   
    printf("tan(%d) = %.4f\n", i, tan(i));   
    printf("cos(%.2f) = %.4f\n", x, cos(x));
    printf("sin(%.2f) = %.4f\n", x, sin(x));
    printf("tan(%.2f) = %.4f\n", x, tan(x));
}

/* Function: processExponentialValues
    Purpose: Demonstrates exponential function (e^x)
*/
void processExponentialValues(int i, int j, double x, double y)
{
    printf("\n=== EXPONENTIAL VALUES ===\n");
    printf("exp(%d) = %.4f\n", i, exp(i));
    printf("exp(%d) = %.4f\n", j, exp(j));
    printf("exp(%.2f) = %.4f\n", x, exp(x));
    printf("exp(%.2f) = %.4f\n", y, exp(y));
}

/* Function: processLogValues
    Purpose: Demonstrates natural logarithm function          
*/
void processLogValues(int i, int j, double x, double y)
{
    printf("\n=== LOG VALUES ===\n");
    printf("log(%d) = %.4f\n", i, log(i));
    printf("log(%d) = %.4f\n", j, log(j));
    printf("log(%.2f) = %.4f\n", x, log(x));
    if(y > 0)
        printf("log(%.2f) = %.4f\n", y, log(y)); 
    else
        printf("log(%.2f) = undefined (negative number)\n", y);
}

/* Function: processPowerValues
    Purpose: Demonstrates power function (base^exponent)
*/
void processPowerValues(int i, int j, double x, double y)
{   
    printf("\n=== POWER VALUES ===\n");
    printf("pow(%d, 2) = %.2f\n", i, pow(i, 2));
    printf("pow(%d, 3) = %.2f\n", j, pow(j, 3));
    printf("pow(%.2f, 2) = %.2f\n", x, pow(x, 2));
    printf("pow(%.2f, 3) = %.2f\n", y, pow(y, 3));
}

/* Function: processSquareRootsValues
    Purpose: Demonstrates square root function 
*/
void processSquareRootsValues(int i, int j, double x, double y)
{
    printf("\n=== SQUARE ROOTS VALUES ===\n");
    printf("sqrt(%d) = %.4f\n", i, sqrt(i));
    printf("sqrt(%d) = %.4f\n", j, sqrt(j));
    printf("sqrt(%.2f) = %.4f\n", x, sqrt(x));
    if (y > 0)
        printf("sqrt(%.2f) = %.4f\n", y, sqrt(y));
    else
        printf("sqrt(%.2f) = undefined (negative number)\n", y);
}

/* Function: processRandomValues
    Purpose: Demonstrates random number generation
*/
void processRandomValues(int i, int j, double x, double y)
{
    printf("\n=== RANDOM VALUES ===\n");
    printf("Random number 1: %d\n", rand());
    printf("Random number 2: %d\n", rand());
    printf("Random number 3: %d\n", rand());
    printf("Random number 4: %d\n", rand());
    printf("Random number 5: %d\n", rand());
}

/* Function: myName
    Purpose: Analyzes each character in the name (vowel, consonant, space,or symbol)
*/
void myName(char name[])
{
    int i;
    int length = strlen(name);
    char ch;

    printf("\n\n=== MY NAME ANALYSIS ===\n");
    printf("My name is [%s]\n\n", name);

    for(i = 0; i < length; i++)
    {
        ch = name[i];

        if(ch == ' ')
        {
            printf("character [ ] located at position %d is a space\n", i);
        }
        else if(ch == '$' || ch == '%')
        {
            printf("character [%c] located at position %d is a symbol\n", ch, i);
        }
        else if(ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
        {
            printf("character[%c] located at position %d is a vowel\n", ch, i);
        }
        else
        {
            printf("character[%c] located at position %d is a consonant\n", ch, i);      
        }
    }
}

/* Function: pyramid
    Purpose: Displays the name in pyramid format, removing the first and last character each iteration
*/
void pyramid(char name[])
{
    int length = strlen(name);
    int start = 0;
    int end = length;
    int i, j;

    printf("\n=== PYRAMID ===\n");

    while(start < end)
    {
        /* Print leading spaces for alignment */
        for(j = 0; j < start; j++)
        {
            printf(" ");
        }

        /* Print the length */
        printf("%2d [", end - start);

        /* Print the substring */
        for(i = start; i < end; i++)
        {
            printf("%c", name[i]);
        }

        printf("]\n");

        /* Move inward from both ends */
        start++;
        end--;
    }

    /* Print final empty brackets with proper spacing */
    for(j = 0; j < start; j++)
    {
        printf(" ");
    }
    printf(" 0 []\n");
}

/* Function: parsing
    Purpose: Performs various string menipulations on the name
*/
void parsing(char name[])
{ 
    int i;
    int length = strlen(name);
    char ch;

    printf("\n=== PARSING ===\n");

    /* a) Print name in upper case */
    printf("\nUpper case: ");
    for(i = 0; i < length; i++)
    {
        printf("%c", toupper(name[i]));
    }

    /* b) Print name in lower case */
    printf("\n\nLower case: ");
    for(i = 0; i < length; i++)
    {
        printf("%c", tolower(name[i]));
    }

    /* c) Print name with all spaces removed */
    printf("\n\nNo spaces: ");
    for(i = 0; i < length; i++)
    {
        if(name[i] != ' ')
        {
            printf("%c", name[i]);
        }
    }

    /* d) Print name with vowels upper case, consonants lower case */
    printf("\n\nVowels upper, consonants lower: ");
    for(i = 0; i < length; i++)
    {
        ch = name[i];
        if(ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
        {
            printf("%c", toupper(ch));
        }
        else
        {
            printf("%c", tolower(ch));
        }
    }

    /* f) Print name backwards */
    printf("\n\nBackwards: ");
    for(i = length -1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    /* f? Print name in  ASCII values */ 
    printf("\n\nASCII values: ");
    for(i =0; i < length; i++)
    {
        printf("%d ", (int)name[i]);
    }
    printf("\n");
}

/* Main function - program execution starts here */
int main()
{

    /* Declare variables as specified */
    int i = 7;
    int j = 9;
    double x = 72.5;
    double y = -0.34;

    /* Create single dimension array with full name */
    char name[] = "First MN Last";

    /* Call all math functions with the variables */
    processAbsoluteValues(i, j, x, y);
    processRoundValues(i, j, x, y);
    processCeilingValues(i, j, x, y);
    processFlooringValues(i, j, x, y);
    processMinimumValues(i, j, x, y);
    processMaximumValues(i, j, x, y);
    processTrigFunctionsValues(i, j, x, y);
    processExponentialValues(i, j, x, y);
    processLogValues(i, j, x, y);
    processPowerValues(i, j, x, y);
    processSquareRootsValues(i, j, x, y);
    processRandomValues(i, j, x, y);

    /* Call name analysis functions */
    myName(name);
    pyramid(name);
    parsing(name);

    printf("\n\n");

    return 0;

} /* end int main */
