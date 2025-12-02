/*2)	Write a C program that uses calloc() to allocate memory for n integers.
Display all values immediately after allocation to show zero initialization.
 Then allow the user to modify the values and print the updated array.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int *arr;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc()
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Display values immediately after allocation to show zero initialization
    printf("Array elements after calloc (should be zero):\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    // Allow user to modify the values
    printf("Enter %d integers to modify the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the updated array
    printf("Updated array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
