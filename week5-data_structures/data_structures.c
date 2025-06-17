// Data Structures in C
#include <stdio.h>

int main(void)
{
    int datalist[3]; // Declare an array of integers with 3 elements

    datalist[0] = 10;
    datalist[1] = 20;
    datalist[2] = 30;

    for (size_t i = 0; i < 3; i++)
    {
        printf("Element %zu: %d\n", i, datalist[i]);
    }

    int *mylist = malloc(3 * sizeof(int)); // Allocate memory for 3 integers
    if (mylist == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    mylist[0] = 40;
    mylist[1] = 50;
    mylist[2] = 60;

    for (size_t i = 0; i < 3; i++)
    {
        printf("Dynamic Element %zu: %d\n", i, mylist[i]);
    }

    free(mylist); // Free the allocated memory
    return 0; // Return success
}