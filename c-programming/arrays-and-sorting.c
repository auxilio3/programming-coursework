/* ****************************************************
   Course   : COP 2270 - ANSI C Programming
   Program  : 3, Multidimensional Arrays and Sorting
              This program demonstrates 2D arrays, sorting, ASCII values,
              error handling, and parallel arrays
   Date     : October 2025
   ****************************************************
*/

#include <stdio.h>

/* Function prototypes */
void ascending(int a, int b, int c);
void printAlphabetDescending();
void divisionWithErrorHandling();
void moduloFive();
void parallelArrays();

/* Function: create2DArray
    Purpose: Creates 2D array, loads with multiplication values, calculates column and row sums
*/
void array2D()
{
    int x, y;
    int array2D[10][10];
    int columnSum = 0;
    int rowSum = 0;
    int difference = 0;

    printf("\n=== 2D ARRAY - MULTIPLICATION TABLE ===\n");

    /* Load array with multiplication of x and y positions */
    for(x = 0; x < 10; x++)
    {
        for(y = 0; y < 10; y++)
        {
            array2D[x][y] = x * y;
        }
    }

    /* Add all values in columns 3, 5, and 7 */
    for(x = 0; x < 10; x++)
    {
        columnSum += array2D[x][3];
        columnSum += array2D[x][5];
        columnSum += array2D[x][7];
    }

    /* Add all values in rows 2, 4, and 6 */
    for(y = 0; y < 10; y++)
    {
        rowSum += array2D[2][y];
        rowSum += array2D[4][y];
        rowSum += array2D[6][y];
    }

    /* Calculate difference */
    difference = rowSum - columnSum;

    /* Print results */
    printf("Sum of columns 3, 5, and 7: %d\n", columnSum);
    printf("Sum of rows 2, 4, and 6: %d\n", rowSum);
    printf("Difference (rows - columns): %d\n", difference);
}

/* Function: ascending
    Purpose: Sorts and prints 3 numbers in ascending order using swapping 
*/
void ascending(int a, int b, int c)
{
    int temp;

    printf("\n=== ASCENDING ORDER ===\n");
    printf("Original numbers: %d %d %d\n", a, b, c);

    /* Sort the three numbers using swapping */
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Sorted in ascending order: %d %d %d\n", a, b, c);
}

/* Function: printAlphabetDescending
    Purpose: Prints uppercase alphabet from Z to A with ASCII values using while(1)
*/
void printAlphabetDescending()
{
    char letter = 'Z';

    printf("\n=== ALPHABET Z TO A WITH ASCII VALUES ===\n");

    while(1)
    {
        printf("Letter: %c ASCII: %d\n", letter, letter);

        if(letter == 'A')
        {
            break;
        }

        letter--;
    }
}

/* Function: divisionWithErrorHandling
    Purpose: Performs division with error trapping for divide by zero
*/ 
void divisionWithErrorHandling()
{
    int firstNumber;
    int secondNumber;
    float result;

    printf("\n=== DIVISION WITH ERROR HANDLING ===\n");
    printf("Enter 999 for either number to exit\n\n");

    while(1)
    {
        printf("Enter first number: ");
        scanf("%d", &firstNumber);

        if(firstNumber == 999)
        {
            printf("Exiting division program.\n");
            break;
        }

        printf("Enter second number: ");
        scanf("%d", &secondNumber);

        if(secondNumber == 999)
        {
            printf("Exiting division program.\n");
            break;
        }

        while(secondNumber == 0)
        {
            printf("Error: Cannot divide by zero!\n");
            printf("Please enter a correct second number: ");
            scanf("%d", &secondNumber);
        }

        result = (float)firstNumber / secondNumber;
        printf("The first number %d divided by the second number %d is %.2f\n\n", firstNumber, secondNumber, result);
    }
}

/* Function: moduloFive
    Purpose: Displays all numbers from 0 to 100 where x mod 5 = 3
*/
void moduloFive()
{
    int x;

    printf("\n=== NUMBERS WHERE X MOD 5 = 3 ===\n");

    for(x = 0; x <= 100; x++)
    {
        if(x % 5 == 3)
        {
            printf("%d ", x);
        }
    }

    printf("\n");
}

/* Function: parallelArrays
    Purpose: Combines two one-dimensional arrays and prints them in parallel
*/
void parallelArrays()
{

    char one[3][50] = {"This ANSI C ", "at ", "is "};
    char two[3][50] = {"class", "FIU", "challenging && enjoyable"};
    int i;

    printf("\n=== PARALLEL ARRAYS ===\n");

    for(i = 0; i < 3; i++)
    {
        printf("%s%s\n", one[i], two[i]);
    }
}

/* Main function - program execution starts here */
int main()
{
    /* Call 2D array function */
    array2D();

    /* Call ascending sort with 3 numbers of your choice */
    ascending(98, 234, 6);

    /* Call alphabet descending function */
    printAlphabetDescending();

    /* Call division with error handling */
    divisionWithErrorHandling();

    /* Call modulo 5 function */
    moduloFive();

    /* Call parallel arrays function */
    parallelArrays();

    printf("\n\n");

    return 0;

} /* end int main */
