/*2.	Open an existing file and read its content character by character, and then close the file.*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char ch;

    file = fopen("example.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Read and display content character by character
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file); // Close the file
    return 0;
}