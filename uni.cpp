/*Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. 
Write a C program to display your present address. */
#include<stdio.h>
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    int zip;
};
int main() {
    union Address addr;

    // Input present address details
    printf("Enter Name: ");
    fgets(addr.name, sizeof(addr.name), stdin);
    printf("Enter Home Address: ");
    fgets(addr.home_address, sizeof(addr.home_address), stdin);
    printf("Enter Hostel Address: ");
    fgets(addr.hostel_address, sizeof(addr.hostel_address), stdin);
    printf("Enter City: ");
    fgets(addr.city, sizeof(addr.city), stdin);
    printf("Enter State: ");
    fgets(addr.state, sizeof(addr.state), stdin);
    printf("Enter ZIP Code: ");
    scanf("%d", &addr.zip);

    // Display present address (hostel address in this case)
    printf("\nPresent Address:\n");
    printf("Name: %s", addr.name);
    printf("Hostel Address: %s", addr.hostel_address);
    printf("City: %s", addr.city);
    printf("State: %s", addr.state);
    printf("ZIP Code: %d", addr.zip);

    return 0;
}