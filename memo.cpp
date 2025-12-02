/*	Write a C program to dynamically allocate an integer array using malloc().*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    int max,min;
    int sum = 0;
    int *arr;

    // Input size of the array
    printf("Enter the number of elements: ");
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
    max=arr[0];
    min=arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum value: %d\n",max);
    printf("Minimum value: %d\n",min);

    // Print the sum of elements of the array
    printf("THE SUM:\n");
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    printf("Sum of array elements: %d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}