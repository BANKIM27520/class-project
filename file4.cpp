/*4.	Write a program to count number of words in a file*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char ch;
    int wordCount = 0, inWord = 0;

    file = fopen("example.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Check for word boundaries
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; // We are outside a word
        } else {
            if (inWord == 0) {
                wordCount++; // We found the start of a new word
                inWord = 1; // We are now inside a word
            }
        }
    }

    fclose(file); // Close the file

    // Display the word count
    printf("Number of words in the file: %d\n", wordCount);

    return 0;
}