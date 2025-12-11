/* *********************************************************************
   Course    : COP 2270 - ANSI C Programming 
   Program # : 4
   Purpose   : Text File Processing
               This program reads a text file character by character,
               copies it to an output file, and displays each character
               to the screen as it is processed
   Date      : November 2025
   *********************************************************************
*/

#include <stdio.h>

/* Function prototype */
void processTextFile();

/* Function: processTextFile
    Purpose: Reads input text file character by character, writes to output file, and displays to screen
*/

void processTextFile()
{
    FILE *inp, *outp;
    char ch;

    /* Open input file for reading */
    inp = fopen("textFileInput.txt", "r");

    /* Check if input file opened successfully */
    if(inp == NULL)
    {
        printf("Error: Cannot open input file\n");
        return;
    }

    /* Open output file for writing */
    outp = fopen("textFileOutput.txt", "w");

    /* Check if output file opened successfully */
    if(outp == NULL)
    {
        printf("Error: Cannot open output file\n");
        fclose(inp);
        return;
    }

    printf("Processing file...\n\n");

    /* Read character by character until the end of the file */
    while((ch = fgetc(inp)) != EOF)
    {
        /* Display character to screen */
        printf("%c", ch);

        /* Write character to output file */
        fputc(ch, outp);
    }

    printf("\n\nFile processing complete!\n");

    /* Close both files */
    fclose(inp);
    fclose(outp);
}

/* Main function - program execution starts here */
int main()
{
    /* Call the text file processing function */
    processTextFile();

    return 0;
} /* end int main */
