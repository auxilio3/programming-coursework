/* ****************************************************
   Program  : 1, Numerical Computations and Loops
              This program performs various mathematical operations,
              demonstrates loops, and displays personal information
   Date : October 2025
   ****************************************************
*/

#include <stdio.h>

/* Function prototypes*/
    void numericalComputations();
    void sumOfNumbers();
    void myInfo(char name[], char major[], int creditsCompleted, int creditsTaking, char className[]);
    void numericalComputationsForLoop();
    void numericalComputationsWhileLoop();
    void sumOfNumbersForLoop();

/* Function: numericalComputations
    Purpose: Performs modulo, subtraction, addition, multiplication, and division operations with maximumNumber (10) and values 1-10
*/

void numericalComputations() 
{
    int maximumNumber = 10;
    printf("\n === NUMERICAL COMPUTATIONS ===\n\n");

    /* Modulo operations (maximumNumber % 1 through 10) */
    printf("Modulo Operations (maximumNumber %% 1-10):\n");
    printf("%d %% 1 = %d\n", maximumNumber, maximumNumber % 1);
    printf("%d %% 2 = %d\n", maximumNumber, maximumNumber % 2);
    printf("%d %% 3 = %d\n", maximumNumber, maximumNumber % 3);
    printf("%d %% 4 = %d\n", maximumNumber, maximumNumber % 4);
    printf("%d %% 5 = %d\n", maximumNumber, maximumNumber % 5);
    printf("%d %% 6 = %d\n", maximumNumber, maximumNumber % 6);
    printf("%d %% 7 = %d\n", maximumNumber, maximumNumber % 7);
    printf("%d %% 8 = %d\n", maximumNumber, maximumNumber % 8);
    printf("%d %% 9 = %d\n", maximumNumber, maximumNumber % 9);
    printf("%d %% 10 = %d\n", maximumNumber, maximumNumber % 10);

/* Subtraction operations (maximumNumber -1 through 10) */
    printf("\nSubtraction Operations (maximumNumber - 1-10):\n");
    printf("%d - 1 = %d\t", maximumNumber, maximumNumber - 1);
    printf("%d - 2 = %d\t", maximumNumber, maximumNumber - 2);
    printf("%d - 3 = %d\t", maximumNumber, maximumNumber - 3);
    printf("%d - 4 = %d\t", maximumNumber, maximumNumber - 4);
    printf("%d - 5 = %d\t", maximumNumber, maximumNumber - 5);
    printf("%d - 6 = %d\t", maximumNumber, maximumNumber - 6);
    printf("%d - 7 = %d\t", maximumNumber, maximumNumber - 7);
    printf("%d - 8 = %d\t", maximumNumber, maximumNumber - 8);
    printf("%d - 9 = %d\t", maximumNumber, maximumNumber - 9);
    printf("%d - 10 = %d\t", maximumNumber, maximumNumber - 10);

/* Addition operations (maximumNumber + 1 through 10) */
    printf("\n\nAddition Operations (maximumNumber + 1-10):\n");
    printf("%d + 1 = %d\n", maximumNumber, maximumNumber + 1);
    printf("%d + 2 = %d\n", maximumNumber, maximumNumber + 2);
    printf("%d + 3 = %d\n", maximumNumber, maximumNumber + 3);
    printf("%d + 4 = %d\n", maximumNumber, maximumNumber + 4);
    printf("%d + 5 = %d\n", maximumNumber, maximumNumber + 5);
    printf("%d + 6 = %d\n", maximumNumber, maximumNumber + 6);
    printf("%d + 7 = %d\n", maximumNumber, maximumNumber + 7);
    printf("%d + 8 = %d\n", maximumNumber, maximumNumber + 8);
    printf("%d + 9 = %d\n", maximumNumber, maximumNumber + 9);
    printf("%d + 10 = %d\n", maximumNumber, maximumNumber + 10);

/* Multiplication operations (maximumNumber * 1 through 10) */
    printf("\nMultiplication Operations (maximumNumber * 1-10:\n");
    printf("%d * 1 = %d\t", maximumNumber, maximumNumber * 1);
    printf("%d * 2 = %d\t", maximumNumber, maximumNumber * 2);
    printf("%d * 3 = %d\t", maximumNumber, maximumNumber * 3);
    printf("%d * 4 = %d\t", maximumNumber, maximumNumber * 4);
    printf("%d * 5 = %d\t", maximumNumber, maximumNumber * 5);
    printf("%d * 6 = %d\t", maximumNumber, maximumNumber * 6);
    printf("%d * 7 = %d\t", maximumNumber, maximumNumber * 7);
    printf("%d * 8 = %d\t", maximumNumber, maximumNumber * 8);
    printf("%d * 9 = %d\t", maximumNumber, maximumNumber * 9);
    printf("%d * 10 = %d\t", maximumNumber, maximumNumber * 10);

/* Division operations (maximumNumber / 1 through 10) */
    printf("\n\nDivision Operations (maximumNumber / 1-10):\n");
    printf("%d / 1 = %d\n", maximumNumber, maximumNumber / 1);
    printf("%d / 2 = %d\n", maximumNumber, maximumNumber / 2);
    printf("%d / 3 = %d\n", maximumNumber, maximumNumber / 3);
    printf("%d / 4 = %d\n", maximumNumber, maximumNumber / 4);
    printf("%d / 5 = %d\n", maximumNumber, maximumNumber / 5);
    printf("%d / 6 = %d\n", maximumNumber, maximumNumber / 6);
    printf("%d / 7 = %d\n", maximumNumber, maximumNumber / 7);
    printf("%d / 8 = %d\n", maximumNumber, maximumNumber / 8);
    printf("%d / 9 = %d\n", maximumNumber, maximumNumber / 9);
    printf("%d / 10 = %d\n", maximumNumber, maximumNumber / 10);
} /* end numericalComputations */

/* Function: sumOfNumbers
    Purpose: Uses the sum formula (1 + N)*(N/2) to calculate sum of 1 to 100
*/
    void sumOfNumbers() 
{
    int N = 100;
    int sum;

    printf("\n\n=== SUM OF NUMBERS ===\n");

/* Calculate sum using formula: (1 + N)*(N / 2) */
    sum = (1 + N) * (N / 2);

    printf("The total amount of the sum of digits from 1 to 100 = %d\n", sum);
} /* end of sumOfNumbers */

/* Function: myInfo
    Purpose: Displays personal information passed as parameters
*/
    void myInfo(char name[], char major[], int creditsCompleted, int creditsTaking, char className[])
{
    printf("\n\n=== MY INFORMATION ===\n");
    printf("Hi my name is %s\n", name);
    printf("My major is %s\n", major);
    printf("I have completed %d credits. \n", creditsCompleted);
    printf("I am taking %d credits.\n", creditsTaking);
    printf("This class's name is %s\n", className);
} /* end myInfo */

/* Function: numericalComputationsForLoop
    Purpose: Performs same computations as numericalComputations but uses FOR loops
*/
    void numericalComputationsForLoop()
{
    int maximumNumber = 10;
    int x;

    printf("\n\n=== NUMERICAL COMPUTATIONS USING FOR LOOP ===\n\n");

/* Modulo operations using for loop */
    printf("Modulo Operations (maximumNumber %% 1-10):\n");
    for(x = 1; x<= 10; x = x + 1)
{
    printf("%d %% %d = %d\n", maximumNumber, x, maximumNumber % x);
}

/* Subtraction operations using for loop */
    printf("\nSubtraction Operations(maximumNumber - 1-10:\n");
    for(x = 1; x <= 10; x = x + 1)
{
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber - x);
}

/* Addition operations using for loop */
    printf("\nAddition Operations(maximumNumber + 1-10:\n"); 
    for(x = 1; x <= 10; x = x + 1)
{
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber + x);
}
/* Multiplication operations using for loop */
    printf("\nMultiplication Operations(maximumNumber * 1-10:\n");    
    for(x = 1; x <= 10; x = x + 1)
{   
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber * x);
}  
/* Division operations using for loop */
    printf("\nAddition Operations(maximumNumber / 1-10:\n");    
    for(x = 1; x <= 10; x = x + 1)
{   
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber / x);
}  

} /* end numericalComputationsForLoop */

/* Function: numericalComputationsWhileLoop
    Purpose: Performs same computations as numericalComputations but uses WHILE loops
*/
    void numericalComputationsWhileLoop()
{
    int maximumNumber = 10;
    int x;

    printf("\n\n=== NUMERICAL COMPUTATIONS USING WHILE LOOP ===\n\n");

    /* Modulo operations using while loop */
    printf("Modulo Operations (maximumNumber %% 1-10):\n");
    x = 1;
    while(x <= 10)
{
    printf("%d %% %d = %d\n", maximumNumber, x, maximumNumber % x);
    x = x + 1;
}

    /* Subtraction operations using while loop */
    printf("\nSubtraction Operations (maximumNumber - 1-10):\n");
    x = 1;
    while(x <= 10)
{
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber - x);
    x = x + 1;
}
   /* Addition operations using while loop */
    printf("\nAddition Operations (maximumNumber + 1-10):\n");
    x = 1;
    while(x <= 10)
{   
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber + x);
    x = x + 1;
} 
   /* Multiplication operations using while loop */
    printf("\nMultiplication Operations (maximumNumber * 1-10):\n");
    x = 1;
    while(x <= 10)
{   
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber * x);
    x = x + 1;
} 
   /* Division operations using while loop */
    printf("\nDivision Operations (maximumNumber / 1-10):\n");
    x = 1;
    while(x <= 10)
{   
    printf("%d - %d = %d\t", maximumNumber, x, maximumNumber / x);
    x = x + 1;
} 

} /* end numericalComputationsWhileLoop */

/* Function: sumOfNumbersForLoop
    Purpose: Calculates sum of all numbers from 1 to 100 using a for loop
*/
    void sumOfNumbersForLoop()
{
    int sum = 0;
    int i;

    printf("\n\n=== SUM OF NUMBERS USING FOR LOOP ===\n");

    /* Add each number from 1 to 100 */
    for(i = 1; i <= 100; i = i + 1)
{
    sum = sum + i;
}

    printf("The sum of all numbers from 1 to 100 is %d\n", sum);
} /* end of sumOfNumbersForLoop */

/* Main function - program execution starts here */
    int main()
{
    /* Declare variables for personal info */
    char myName[] = "Student";
    char myMajor[] = "Cybersecurity";
    int myCreditsCompleted = 87;
    int myCreditsTaking = 12;
    char myClassName[] = "COP 2270 Sec ANSI C Online";

   /* Call all required functions */
    numericalComputations();
    sumOfNumbers();
    myInfo(myName, myMajor, myCreditsCompleted, myCreditsTaking, myClassName);
    numericalComputationsForLoop();
    numericalComputationsWhileLoop();
    sumOfNumbersForLoop();

    printf("\n\n");

    return 0;
} /* end in main */
