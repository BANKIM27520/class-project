/*Create a Book structure containing book_id, title, author name and price. 
Write a C program to pass a structure as a function argument and print the book details*/
#include<stdio.h>
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};
int main() {
    struct Book b;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);
    printf("Enter Book Title: ");
    getchar(); // to consume the newline character left by previous scanf
    fgets(b.title, sizeof(b.title), stdin);
    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    // Print book details
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}