/*1.	Write a program to create a new file and write text into it.*/
#include <stdio.h>
int main() 
{
    FILE *file;
    file=fopen("example.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }
    // Write text to the file
    fprintf(file, "Hello, this is a sample text written to the file.\n");
    fprintf(file, "This demonstrates file handling in C programming.\n");
    fclose(file); // Close the file
    printf("Text written to file successfully.\n");
    return 0;
}