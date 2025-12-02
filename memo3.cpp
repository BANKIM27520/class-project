/*3)	Write a C program to create an array using malloc(), fill it with values, and then:
→ Use realloc() to increase the size of the array.
→ Add new values and print all elements.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, new_size, i;
    int *arr;

    // Input initial size of the array
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input new size for the array
    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);

    // Reallocate memory using realloc()
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit if memory reallocation fails
    }

    // Input new elements if the new size is greater than the old size
    if (new_size > n) {
        printf("Enter %d new integers:\n", new_size - n);
        for (i = n; i < new_size; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }

    // Print all elements of the updated array
    printf("All elements in the updated array:\n");
    for (i = 0; i < new_size; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}