#include <stdio.h>

int main(void)
{
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print the address of the first element
    printf("Address of first element: %p\n", (void*)&numbers[0]);

    // Print the address of the second element
    printf("Address of second element: %p\n", (void*)&numbers[1]);

    // Print the address of the third element
    printf("Address of third element: %p\n", (void*)&numbers[2]);

    // Print the address of the fourth element
    printf("Address of fourth element: %p\n", (void*)&numbers[3]);

    // Print the address of the fifth element
    printf("Address of fifth element: %p\n", (void*)&numbers[4]);

    int num1 = 50;
    int *p = &num1; // Pointer to num1

    printf("Address of num1: %p\n", p);

    // Manipulate the value using the pointer
    *p = 100;
    printf("New value of num1: %d\n", num1);
    printf("Value pointed to by p: %d\n", *p);
    printf("Address of num1 after manipulation: %p\n", (void*)&num1);
    printf("Address stored in p after manipulation: %p\n", (void*)p);

    // Declare a an integer variable and a pointer to it
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);
    // \n is an excape character, and creates a new line
    printf("Here is the number: %i\n", n);


    return 0;
}