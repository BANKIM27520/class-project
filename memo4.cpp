/*4)	Write a C program to dynamically allocate memory for a string.
→ Let the user specify the size.
→ Input a string and display it.
→ Then use realloc() to expand the string size and append more characters.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int size, new_size;
    char *str;

    // Input initial size of the string
    printf("Enter the initial size of the string: ");
    scanf("%d", &size);
    getchar(); // to consume the newline character left by previous scanf

    // Dynamically allocate memory for the string
    str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input the string
    printf("Enter a string: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    // Display the string
    printf("You entered: %s\n", str);

    // Input new size for the string
    printf("Enter the new size of the string: ");
    scanf("%d", &new_size);
    getchar(); // to consume the newline character left by previous scanf

    // Reallocate memory to expand the string size
    str = (char *)realloc(str, new_size * sizeof(char));
    if (str == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit if memory reallocation fails
    }

    // Append more characters to the string
    printf("Enter additional characters to append: ");
    fgets(str + strlen(str), new_size - strlen(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    // Display the updated string
    printf("Updated string: %s\n", str);

    // Free the allocated memory
    free(str);

    return 0;
}