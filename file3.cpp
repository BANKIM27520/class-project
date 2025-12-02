/*3.	Open a file, read its content line by line, and display each line on the console.*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char line[256];

    file = fopen("example.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Read and display content line by line
    printf("File content:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file); // Close the file
    return 0;
}
