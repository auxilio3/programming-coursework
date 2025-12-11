/* ********************************************************************* 
   Course    : COP 2270 - ANSI C Programming
   Program # : 4
   Purpose   : Binary File Processing
               This program creates a binary file containing name and
               number sequences (odd/even/all numbers forward and backward
               from 0 to 25), displaying output to screen
   Date      : November 2025
   *********************************************************************
*/

#include <stdio.h>

/* Function: createBinaryFile
    Purpose: Creates a binary file with name and number sequences, displaying each character to screen as it's written
*/
void createBinaryFile()
{
    FILE *binFile;
    int i;
    char buffer[100];

    /* Open binary file for writing */
    binFile = fopen("numbers.bin", "wb");

    /* Check if file opened successfully */
    if(binFile == NULL)
    {
        printf("Error: Cannot open the binary file\n");
        return;
    }

    printf("Creating binary file...\n\n");

    /* Write full name */
    sprintf(buffer, "Student Name\n");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);

    /* Write odd numbers forward */
    sprintf(buffer, "odd numbers forwards: ");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);

    for(i = 1; i <= 25; i+= 2)
    {
        sprintf(buffer, "%d", i);
        fprintf(binFile, "%s", buffer);
        printf("%s", buffer);
    }
    fprintf(binFile, "\n");
    printf("\n");

  /* Write even numbers forward */
    sprintf(buffer, "even numbers forwards: ");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);

    for(i = 0; i <= 25; i+= 2)
    {
        sprintf(buffer, "%d", i);
        fprintf(binFile, "%s", buffer);
        printf("%s", buffer);
    }
    fprintf(binFile, "\n");
    printf("\n");

/* Write all  numbers forward */
    sprintf(buffer, "all numbers forwards: ");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);

    for(i = 0; i <= 25; i++)
    {
        sprintf(buffer, "%d", i);
        fprintf(binFile, "%s", buffer);
        printf("%s", buffer);
    }
    fprintf(binFile, "\n");
    printf("\n");

/* Write a blank line */
    fprintf(binFile, "\n");
    printf("\n");

  /* Write odd numbers backward */
    sprintf(buffer, "odd numbers backwards: ");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);

    for(i = 25; i >= 1; i -= 2)
    {
        sprintf(buffer, "%d", i);
        fprintf(binFile, "%s", buffer);
        printf("%s", buffer);
    }
    fprintf(binFile, "\n");
    printf("\n");

/* Write even numbers backward */
    sprintf(buffer, "even numbers backwards: ");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);
    
    for(i = 24; i >= 0; i -= 2)
    {
        sprintf(buffer, "%d", i);
        fprintf(binFile, "%s", buffer);
        printf("%s", buffer);
    }
    fprintf(binFile, "\n");
    printf("\n");

/* Write all numbers backward */
    sprintf(buffer, "all numbers backwards: ");
    fprintf(binFile, "%s", buffer);
    printf("%s", buffer);
    
    for(i = 25; i >= 0; i--)
    {
        sprintf(buffer, "%d", i);
        fprintf(binFile, "%s", buffer);
        printf("%s", buffer);
    }
    fprintf(binFile, "\n");
    printf("\n");

    /* Close file */
    fclose(binFile);

    printf("\nBinary file creation complete!\n");
}

/* Main function - program execution starts here */
int main()
{
    /* Call the binary file creation function */
    createBinaryFile();

    return 0;
} /* end int main */
```
